#include "MyRAW.h"
#include "mainwindow.h"

//includes for write_tiff()
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#ifndef WIN32
#include <netinet/in.h>
#else
#include <sys/utime.h>
#include <winsock2.h>

#endif
#include "libraw_types.h"
#include <libraw_types.h>
#include <iostream>
#include <QDir.h>


MyRAW::MyRAW(unsigned int flags):LibRaw(flags){
}

MyRAW::~MyRAW(){
}


void MyRAW::tiff_set (ushort *ntag,
    ushort tag, ushort type, int count, int val)
{
  struct tiff_tag *tt;
  int c;

  tt = (struct tiff_tag *)(ntag+1) + (*ntag)++;
  tt->tag = tag;
  tt->type = type;
  tt->count = count;
  if (type < 3 && count <= 4)
      for(c=0;c<4;c++) tt->val.c[c] = val >> (c << 3);
  else if (type == 3 && count <= 2)
      for(c=0;c<2;c++) tt->val.s[c] = val >> (c << 4);
  else tt->val.i = val;
}



void MyRAW::tiff_head (int width, int height, struct tiff_hdr *th)
{
  int c;
  time_t timestamp = time(NULL);
  struct tm *t;

  memset (th, 0, sizeof *th);
  th->t_order = htonl(0x4d4d4949) >> 16;
  th->magic = 42;
  th->ifd = 10;
  tiff_set (&th->ntag, 254, 4, 1, 0);
  tiff_set (&th->ntag, 256, 4, 1, width);
  tiff_set (&th->ntag, 257, 4, 1, height);
  tiff_set (&th->ntag, 258, 3, 1, 16);
  for(c=0;c<4;c++) th->bps[c] = 16;
  tiff_set (&th->ntag, 259, 3, 1, 1);
  tiff_set (&th->ntag, 262, 3, 1, 1);
  tiff_set (&th->ntag, 273, 4, 1, sizeof *th);
  tiff_set (&th->ntag, 277, 3, 1, 1);
  tiff_set (&th->ntag, 278, 4, 1, height);
  tiff_set (&th->ntag, 279, 4, 1, height*width*2);
  tiff_set (&th->ntag, 282, 5, 1, TOFF(th->rat[0]));
  tiff_set (&th->ntag, 283, 5, 1, TOFF(th->rat[2]));
  tiff_set (&th->ntag, 284, 3, 1, 1);
  tiff_set (&th->ntag, 296, 3, 1, 2);
  tiff_set (&th->ntag, 306, 2, 20, TOFF(th->date));
  th->rat[0] = th->rat[2] = 300;
  th->rat[1] = th->rat[3] = 1;
  t = localtime (&timestamp);
  if(t)
      sprintf (th->date, "%04d:%02d:%02d %02d:%02d:%02d",
               t->tm_year+1900,t->tm_mon+1,t->tm_mday,t->tm_hour,t->tm_min,t->tm_sec);
}



int MyRAW::write_tiff(int width, int height, ushort *bitmap, const char *fn)
{
  struct tiff_hdr th;

  FILE *ofp = fopen(fn,"wb");
  if(!ofp) return LIBRAW_DATA_ERROR;							//mistake is true
  tiff_head (width,height,&th);
  fwrite (&th, sizeof th, 1, ofp);
  fwrite (bitmap, 2, width*height, ofp);
  fclose(ofp);
  return LIBRAW_SUCCESS;
}

int MyRAW::write_raw_2_tiff(const char* path_to_save)
{
    return write_tiff(this->imgdata.sizes.raw_width,this->imgdata.sizes.raw_height,this->imgdata.rawdata.raw_image,path_to_save);
}



int MyRAW::getoriginalflip(){
    return originalflip;
}



void MyRAW::setoriginalflip(int i){
    originalflip=i;
}

void MyRAW::setoriginalblack(int index,int wert){
    black_orig[index]=wert;
}

unsigned int MyRAW::getoriginalblack(int index){
    return black_orig[index];
}





QString MyRAW::get_temp_path(){
    return QDir::tempPath()+QString::QString("rawshop_temp");
}





int MyRAW::write_raw_2_tiff_cropped(const char* path_to_save){
    int i=0;
    ushort* picture=new ushort [this->imgdata.sizes.iwidth * this->imgdata.sizes.iheight];
    for (int row=this->imgdata.rawdata.sizes.top_margin;row<this->imgdata.rawdata.sizes.raw_height;row++){
        for(int c=this->imgdata.rawdata.sizes.left_margin;c<this->imgdata.rawdata.sizes.raw_width;c++){			//zeilenweise kopieren
                picture[i]=this->imgdata.rawdata.raw_image[c+row*this->imgdata.rawdata.sizes.raw_width];
                i++;
        }
    }
    i=this->write_tiff(this->imgdata.sizes.iwidth,this->imgdata.sizes.iheight,picture,path_to_save);
    delete[]picture;
    return i;
}



int MyRAW::gcd(int a, int b)
{
    if (a == 0)
        return b;
    else if (b == 0)
        return a;

    if (a < b)
        return gcd(a, b % a);
    else
        return gcd(b, a % b);
}


void MyRAW::convert_t_to_rgb(int temperatur, float* rgb){

    //Temperatur
        float T = (float)temperatur;

        /* Convert between Temperature and RGB.
         * Base on information from http://www.brucelindbloom.com/
         * The fit for D-illuminant between 4000K and 23000K are from CIE color space
         */

    const double XYZ_to_RGB[3][3] = {
            { 3.24071,	-0.969258,  0.0556352 },
            { -1.53726,	1.87599,    -0.203996 },
            { -0.498571,	0.0415557,  1.05707 }
        };

        int i;
        double xD, yD, X, Y, Z, max;
        // Fit for CIE Daylight illuminant
        // Still needs adjustment, because pictures tends to be too blue
        // Maybe try different approximation factors of the equation
        if (T <= 4000) {
            xD = 0.27475e9 / (T * T * T) - 0.98598e6 / (T * T) + 1.17444e3 / T + 0.145986;
        } else if (T <= 7000) {
            xD = -4.6070e9 / (T * T * T) + 2.9678e6 / (T * T) + 0.09911e3 / T + 0.244063;
        } else {
            xD = -2.0064e9 / (T * T * T) + 1.9018e6 / (T * T) + 0.24748e3 / T + 0.237040;
        }
        yD = -3 * xD * xD + 2.87 * xD - 0.275;

        // Fit for Blackbody using CIE standard observer function at 2 degrees
        //xD = -1.8596e9/(T*T*T) + 1.37686e6/(T*T) + 0.360496e3/T + 0.232632;
        //yD = -2.6046*xD*xD + 2.6106*xD - 0.239156;

        // Fit for Blackbody using CIE standard observer function at 10 degrees
        //xD = -1.98883e9/(T*T*T) + 1.45155e6/(T*T) + 0.364774e3/T + 0.231136;
        //yD = -2.35563*xD*xD + 2.39688*xD - 0.196035;

        X = xD / yD;
        Y = 1;
        Z = (1 - xD - yD) / yD;
        for (i = 0; i < 3; i++) {
            rgb[i] = X * XYZ_to_RGB[0][i] + Y *  XYZ_to_RGB[1][i] + Z *  XYZ_to_RGB[2][i];
        }
}

void MyRAW::convert_rgb_to_t(){
		int temp_out = 6500;
		float rgb_d65[3] = {0.950456, 1, 1.088754}; // RGB multiplier for 6500k

		float tmin, tmax, tmp[3], original_temperature_rgb[3], intended_temperature_rgb[3];
		for(int k = 0; k < 3; k++) 
			 tmp[k] = cam_mul_rgb[k];
								//rgb values are saved in temp for approximation

		tmin = 1500;			//lowest Temperatur of the Slider in the GUI
		tmax = 25000;			//highest Temperatur of the Slider in the GUI

		convert_t_to_rgb (temp_out, original_temperature_rgb);

		for(originalTemprange = (tmax + tmin) / 2; tmax - tmin > 1; originalTemprange = (tmax + tmin) / 2) // 
		{
		 convert_t_to_rgb (originalTemprange,  intended_temperature_rgb);	//converts the temperatur and puts the output into temp
		 tmp[0] = original_temperature_rgb[0] / intended_temperature_rgb[0];
		 tmp[1] = original_temperature_rgb[1] / intended_temperature_rgb[1];
         tmp[2] = original_temperature_rgb[2] / intended_temperature_rgb[2];
         
		 
		 if(tmp[2] / tmp[0] < cam_mul_rgb[2] / cam_mul_rgb[0]) // Red/blue > Red/Blue means if approximation is bigger than the actuall Temperatur
		    tmax = originalTemprange;
		  else
		    tmin = originalTemprange;					//increases either tmax or tmin depending if
		}
			originalTint =  (cam_mul_rgb[1] / cam_mul_rgb[0]) / (tmp[1] / tmp[0])+0.06; //Calculation of tint
			if(originalTint < 0.1f) originalTint = 0.1f;
			if(originalTint > 2.5f) originalTint = 2.5f;
}


/*
void MyRAW::convert_rgb_to_t(int* temperatur,int* tint, float* rgb){

        float tmin, tmax, tmp[3];
        for(int k = 0; k < 3; k++)
            tmp[k] = rgb[k];
                                //rgb values are saved in temp for approximation

        tmin = 1500;			//lowest Temperatur of the Slider in the GUI
        tmax = 15000;			//highest Temperatur of the Slider in the GUI

        for(*temperatur = (tmax + tmin) / 2; tmax - tmin > 1; *temperatur = (tmax + tmin) / 2) //
        {
         convert_t_to_rgb(*temperatur, tmp);	//converts the temperatur and puts the output into temp
         if(tmp[2] / tmp[0] > rgb[2] / rgb[0]) // Red/blue > Red/Blue means if approximation is bigger than the actuall Temperatur
           tmax = *temperatur;
         else
           tmin = *temperatur;					//increases either tmax or tmin depending if
        }
            *tint = (tmp[1] / tmp[0]) / (rgb[1] / rgb[0]); //Calculation of tint
            if(*tint < 0.2f) *tint = 0.2f;
            if(*tint > 2.5f) *tint = 2.5f;
}
*/

void MyRAW::setoriginalTint_Temprange(){
	for(int i = 0; i < 4;i++){
		this->cam_mul_rgb[i] = this->imgdata.color.cam_mul[i];
	}
        convert_rgb_to_t();
}


float MyRAW::getoriginalTint(){
    return originalTint;

}
int MyRAW::getoriginalTemprange(){
    return originalTemprange;

}

void MyRAW::setgamma(){
 original_gamma=1./this->imgdata.params.gamm[0];
}

float MyRAW::getoriginalgamma(){
 return original_gamma;
}

void MyRAW::setoriginalgammaslope(){
	original_gamma_slope=this->imgdata.params.gamm[1];
}

float MyRAW::getoriginalgammaslope(){
	return original_gamma_slope;
}