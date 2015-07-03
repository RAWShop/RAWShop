#ifndef MYQPIXMAP_H
#define	MYQPIXMAP_H

#include <QPixmap.h>


class myQPixmap :public QPixmap
{
	public:
		QPixmap getScaled(bool iszoomed, int SB_Z_value, int & startx, int & starty, float D_w, float D_h);


};



#endif
