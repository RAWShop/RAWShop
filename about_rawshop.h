#ifndef ABOUT_RAWSHOP_H
#define ABOUT_RAWSHOP_H

#include <QWidget>
#include "ui_about_rawshop.h"

class About_RAWShop : public QWidget
{
	Q_OBJECT

public:
	About_RAWShop(QWidget *parent = 0);
	~About_RAWShop();

private:
	Ui::About_RAWShop ui;
};

#endif // ABOUT_RAWSHOP_H
