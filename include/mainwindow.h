#ifndef	MAINWINDOW_H
#define MAINWINDOW_H

#include "ui_mainwindow.h"
#include <libraw.h>
#include "MyRAW.h"
#include "myQPixmap.h"

class mainwindow : public QMainWindow, public Ui::mainwindow{
        Q_OBJECT

        public:
                mainwindow (QMainWindow *parent = 0);
                ~mainwindow();

                void resizeEvent ( QResizeEvent * event );
                void closeEvent(QCloseEvent *event);
                void startopen(char * openpath);
                myQPixmap * data;
                myQPixmap * lastpic;
                MyRAW * rawdata;


        private slots:
                void opendataquestion();
                void savedata();

                void SBzoom();

                void updatedata();
                void interpolation_D2CB();
                void interpolation_CB2D();

                void zoom();
                void drag();
                void drop();
                void SB_Change();
                void moveDisplayPicture();

                void zoom_2();
                void drag_2();
                void drop_2();
                void SB_Change_2();
                void moveDisplayPicture_2();


                void save_u_RAW();
                void showaboutus();

                void brightness_SB2LE();
                void gamma_SB2LE();
                void saturtation_SB2LE();
                void temperaturRange_SB2LE();
                void tint_SB2LE();
                void threshold_SB2LE();
                void Black_SB2LE0();
                void Black_SB2LE1();
                void Black_SB2LE2();
                void Black_SB2LE3();
                void Black_SB2LE4();
                void adj_max_SB2LE();
                void banding_noise_SB2LE();
                void gamma_slope_SB2LE();

                void brightness_LE2SB();
                void gamma_LE2SB();
                void saturtation_LE2SB();
                void temperaturRange_LE2SB();
                void tint_LE2SB();
                void black_LE2SB0();
                void black_LE2SB1();
                void black_LE2SB2();
                void black_LE2SB3();
                void black_LE2SB4();
                void maxVal_LE2SB();
                void gamma_slope_LE2SB();
                void banding_noise_LE2SB();

                void threshold_LE2SB();

                void zoomin();
                void zoomout();

                void reset_brightness();
                void reset_gamma();
                void reset_gamma_slope();
                void reset_saturation();
                void reset_temperaturrange();
                void reset_tint();
                void reset_rotation();
                void resize_sidemenu();
                void WhiteBalance_choose();
                void reset_banding();

                void reset_threshold();
                void reset_adj_max();
                void reset_black0();
                void reset_black1();
                void reset_black2();
                void reset_black3();
                void reset_black4();
                void init_slot();
                void closePic2();
                void orderchange();
        private:
                wchar_t filepath_forlibraw[250];
                QString direction;


                bool preisright;
                bool usecompic;
                bool issaved;							// True == Datei ist gespeichert
                bool iszoomed;							// True == Darstellung ist gezoomt
                bool isdraged;							// True == Maus ist gedrückt
                bool isopen;							// True == Eine Datei ist geöffnet
                bool sidemenuisopen;					// True == Sidemenu ist geöffnet
                int startx,starty;						// Für die MouseEvents


                void showQPM();
                void showMetadata();
                bool usedcraw();
                void loaddata();

                bool closeQuestion();									// "Schon gespeichert?" ja/nein
                bool error(int errorcode, QString words);				// Funktion zur Fehlerausgabe

                void init();

                void opendata();
};
#endif //MAINWINDOW_H
