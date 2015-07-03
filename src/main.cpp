#include "mainwindow.h"
#include <QApplication>


#include <iostream>





int main( int argc, char* argv[])
{
        QApplication a(argc, argv);
        MyRAW h;
        myQPixmap d, d2;
        mainwindow w;


        w.rawdata= & h;
        w.data = & d;
        w.lastpic = & d2;
        w.showMaximized();


        if(argc>=2)
        {
            w.startopen(argv[argc-1]);
        }




        return a.exec();
}


