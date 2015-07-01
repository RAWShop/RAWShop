#include "myQPixmap.h"





QPixmap myQPixmap::getScaled(bool iszoomed, int SB_Z_value, int & startx, int & starty, float D_w, float D_h){
	if (iszoomed){

        float wi2=D_w/SB_Z_value*100;
        float hi2=D_h/SB_Z_value*100;
	
		if (startx<0){											// Über linken Rand hinaus
			startx=0;
		}
		else if ((startx+wi2)>(width())){					// Über rechten Rand hinaus
			startx=width()-wi2;
		}

		if (starty<0){											// Über oberen Rand hinaus
			starty=0;
		}
		else if ((starty+hi2)>(height())){					// Über unteren Rand hinaus
			starty=height()-hi2;
		}
		
		
		return copy(startx , starty , wi2 , hi2).scaled(D_w,D_h,Qt::AspectRatioMode::KeepAspectRatio);
	}				
	else
	{
		return scaled(D_w,D_h,Qt::AspectRatioMode::KeepAspectRatio);
	}

}