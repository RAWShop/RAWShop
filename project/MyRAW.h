#ifndef MYRAW_H_
#define	MYRAW_H_

#include <libraw.h>
#include <Windows.h>
#include <QString.h>

#define TOFF(ptr) ((char *)(&(ptr)) - (char *)th)


class MyRAW:public LibRaw{
    public:
        MyRAW(unsigned int flags = LIBRAW_OPTIONS_NONE);
        virtual ~MyRAW();
        int write_raw_2_tiff(const char* path_to_save);
        int getoriginalflip();
        void setoriginalflip(int);
        QString get_temp_path();
        int write_raw_2_tiff_cropped(const char* path_to_save);
        int gcd(int a, int b);
        void setoriginalblack(int,int);
        unsigned int getoriginalblack(int);
        void convert_t_to_rgb(int, float*);
        void convert_rgb_to_t();
        float getoriginalTint();
        int getoriginalTemprange();
        void setoriginalTint_Temprange();
        void setgamma();
        float getoriginalgamma();
        void setoriginalgammaslope();
        float getoriginalgammaslope();

    private:

        int write_tiff(int width, int height, ushort *bitmap, const char *fn);
        void tiff_head (int width, int height, struct tiff_hdr *th);
        void tiff_set (ushort *ntag,ushort tag, ushort type, int count, int val);
        int	originalflip;
        unsigned int black_orig[5];				// Um original Blacklevel wiederherstellen zu können
        int originalTemprange;
        float cam_mul_rgb[4];
        float originalTint;
        float original_gamma;
        float original_gamma_slope;

};




#endif
