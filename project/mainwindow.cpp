#include "mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <clickablelabel.h>
#include <QString.h>
#include <QLabel.h>
#include <QCursor.h>
#include <QPixmap.h>
#include <libraw.h>
#include <stdlib.h>
#include <ctime>
#include <libraw_types.h>
#include <libraw_internal.h>
#include <libraw_datastream.h>
#include <QDial.h>
#include <QComboBox.h>
#include <QScrollBar.h>
#include <QLabel.h>
#include "MyRAW.h"
#include "QDoubleValidator_StandardNotation.h"
#include <QTime>
#include <QTimer.h>


#include "About_RAWShop.h"


int my_progress_callback(void *data,enum LibRaw_progress p,int iteration, int expected);

int my_progress_callback(void *data,enum LibRaw_progress p,int iteration, int expected)
{

    mainwindow *passed_string = (mainwindow *)data;														// Typisierung des Übergabezeigers
    passed_string->L_tester->setText(passed_string->L_tester->text() + QString("\nCallback:\t\t"  +	// Eingabe von Callbacks in Qt
                        QString(libraw_strprogress(p)) ));
                        //+ "\t\tStep\t" + QString::number(iteration + 1) +
                        //"\tof\t" + QString::number(expected)));

    passed_string->progressBar->setValue(passed_string->progressBar->value() + 3);						// Ladebalkenanimation
    return 0;
}



mainwindow::mainwindow(QMainWindow *parent) : QMainWindow(parent){

        // Laden von Qt
        setupUi(this);

        this->menuHelp;

        // Initialisierung
        iszoomed=false;
        isdraged=false;
        issaved=true;
        isopen=false;
        sidemenuisopen=true;
        preisright=true;

        // Deaktivieren von Buttons, welche zu Beginn nicht funktionieren
        B_Save->setEnabled(false);
        B_Update->setEnabled(false);
        M_saveProcessedData->setEnabled(false);
        M_saveUnprocessedData->setEnabled(false);
        B_saveRaw->setEnabled(false);
        B_Update2->setEnabled(false);
        B_AllOriginal->setEnabled(false);



        // Labels initalisieren
        L_FileDirection->setText(QString("Please open a file"));


        connect(menuHelp,				SIGNAL(aboutToShow()),				this, SLOT(showaboutus()));
        // Buttonverknüpfungen
        connect(B_Open,					SIGNAL(clicked()),					this, SLOT(opendataquestion()));
        connect(B_Quit,					SIGNAL(clicked()),					this, SLOT(close()));
        connect(B_Save,					SIGNAL(clicked()),					this, SLOT(savedata()));
        connect(B_Update,				SIGNAL(clicked()),					this, SLOT(updatedata()));
        connect(B_saveRaw,				SIGNAL(clicked()),					this, SLOT(save_u_RAW()));
        connect(B_Sidemenu,				SIGNAL(clicked()),					this, SLOT(resize_sidemenu()));
        connect(B_Zoom1to1,				SIGNAL(clicked()),					this, SLOT(zoom()));
        connect(B_ZoomIn,				SIGNAL(clicked()),					this, SLOT(zoomin()));
        connect(B_ZoomOut,				SIGNAL(clicked()),					this, SLOT(zoomout()));
        connect(B_AllOriginal,			SIGNAL(clicked()),					this, SLOT(init_slot()));
        connect(B_Update2,				SIGNAL(clicked()),					this, SLOT(updatedata()));
        connect(B_ClosePic2,			SIGNAL(clicked()),					this, SLOT(closePic2()));
        connect(B_Orderchange,			SIGNAL(clicked()),					this, SLOT(orderchange()));
        connect(B_Sidemenu2,			SIGNAL(clicked()),					this, SLOT(resize_sidemenu()));

        // Screenverknüpfungen
        connect(L_Display,				SIGNAL(doubleclicked()),			this, SLOT(zoom()));
        connect(L_Display,				SIGNAL(MousePressed()),				this, SLOT(drag()));
        connect(L_Display,				SIGNAL(MouseReleased()),			this, SLOT(drop()));
        connect(L_Display,				SIGNAL(Zoomed()),					this, SLOT(SB_Change()));
        connect(L_Display,				SIGNAL(MouseMoved()),				this, SLOT(moveDisplayPicture()));

        connect(L_Display_2,				SIGNAL(doubleclicked()),			this, SLOT(zoom_2()));
        connect(L_Display_2,				SIGNAL(MousePressed()),				this, SLOT(drag_2()));
        connect(L_Display_2,				SIGNAL(MouseReleased()),			this, SLOT(drop_2()));
        connect(L_Display_2,				SIGNAL(Zoomed()),					this, SLOT(SB_Change_2()));
        connect(L_Display_2,				SIGNAL(MouseMoved()),				this, SLOT(moveDisplayPicture_2()));

        connect(L_Display_exc,				SIGNAL(doubleclicked()),			this, SLOT(zoom_2()));
        connect(L_Display_exc,				SIGNAL(MousePressed()),				this, SLOT(drag_2()));
        connect(L_Display_exc,				SIGNAL(MouseReleased()),			this, SLOT(drop_2()));
        connect(L_Display_exc,				SIGNAL(Zoomed()),					this, SLOT(SB_Change_2()));
        connect(L_Display_exc,				SIGNAL(MouseMoved()),				this, SLOT(moveDisplayPicture_2()));


        // Einstellungen
        connect(D_Interpolation,		SIGNAL(valueChanged(int)),			this, SLOT(interpolation_D2CB()));
        connect(CB_Interpolation,		SIGNAL(currentIndexChanged(int)),	this, SLOT(interpolation_CB2D()));
        connect(SB_Zoom,				SIGNAL(valueChanged(int)),			this, SLOT(SBzoom()));
        connect(CB_WhiteBalance,		SIGNAL(currentIndexChanged(int)),	this, SLOT(WhiteBalance_choose()));



        //	Menuverknüpfungen
        connect(M_Open,					SIGNAL(triggered()),				this, SLOT(opendataquestion()));
        connect(M_saveProcessedData,	SIGNAL(triggered()),				this, SLOT(savedata()));
        connect(M_saveUnprocessedData,	SIGNAL(triggered()),				this, SLOT(save_u_RAW()));



        // Slider-Verknüpfungen
        connect(SD_Brightness,			SIGNAL(valueChanged(int)),			this, SLOT(brightness_SB2LE()));
        connect(SD_Gamma,				SIGNAL(valueChanged(int)),			this, SLOT(gamma_SB2LE()));
        connect(SD_Saturtation,			SIGNAL(valueChanged(int)),			this, SLOT(saturtation_SB2LE()));
        connect(SD_TemperaturRange,		SIGNAL(valueChanged(int)),			this, SLOT(temperaturRange_SB2LE()));
        connect(SD_tint,				SIGNAL(valueChanged(int)),			this, SLOT(tint_SB2LE()));
        connect(SD_Threshold,			SIGNAL(valueChanged(int)),			this, SLOT(threshold_SB2LE()));
        connect(SD_Adj_Max,				SIGNAL(valueChanged(int)),			this, SLOT(adj_max_SB2LE()));
        connect(SD_Black_0,				SIGNAL(valueChanged(int)),			this, SLOT(Black_SB2LE0()));
        connect(SD_Black_1,				SIGNAL(valueChanged(int)),			this, SLOT(Black_SB2LE1()));
        connect(SD_Black_2,				SIGNAL(valueChanged(int)),			this, SLOT(Black_SB2LE2()));
        connect(SD_Black_3,				SIGNAL(valueChanged(int)),			this, SLOT(Black_SB2LE3()));
        connect(SD_Black_4,				SIGNAL(valueChanged(int)),			this, SLOT(Black_SB2LE4()));
        connect(SD_Gamma_slope,			SIGNAL(valueChanged(int)),			this, SLOT(gamma_slope_SB2LE()));
        connect(SD_Banding_Noise,		SIGNAL(valueChanged(int)),			this, SLOT(banding_noise_SB2LE()));

        connect(LE_Brightness,			SIGNAL(editingFinished()),			this, SLOT(brightness_LE2SB()));
        connect(LE_Gamma,				SIGNAL(editingFinished()),			this, SLOT(gamma_LE2SB()));
        connect(LE_Saturtation,			SIGNAL(editingFinished()),			this, SLOT(saturtation_LE2SB()));
        connect(LE_TemperaturRange,		SIGNAL(editingFinished()),			this, SLOT(temperaturRange_LE2SB()));
        connect(LE_tint,				SIGNAL(editingFinished()),			this, SLOT(tint_LE2SB()));
        connect(LE_Threshold,			SIGNAL(editingFinished()),			this, SLOT(threshold_LE2SB()));
        connect(LE_Black_0,				SIGNAL(editingFinished()),			this, SLOT(black_LE2SB0()));
        connect(LE_Black_1,				SIGNAL(editingFinished()),			this, SLOT(black_LE2SB1()));
        connect(LE_Black_2,				SIGNAL(editingFinished()),			this, SLOT(black_LE2SB2()));
        connect(LE_Black_3,				SIGNAL(editingFinished()),			this, SLOT(black_LE2SB3()));
        connect(LE_Black_4,				SIGNAL(editingFinished()),			this, SLOT(black_LE2SB4()));
        connect(LE_MaximumValue,		SIGNAL(editingFinished()),			this, SLOT(maxVal_LE2SB()));
        connect(LE_Gamma_slope,			SIGNAL(editingFinished()),          this, SLOT(gamma_slope_LE2SB()));
        connect(LE_Banding_Noise,		SIGNAL(editingFinished()),          this, SLOT(banding_noise_LE2SB()));

        // Rücksetz-Buttons

        connect(B_BrightnessOrig,		SIGNAL(clicked()),					this, SLOT(reset_brightness()));
        connect(B_GammaOrig,			SIGNAL(clicked()),					this, SLOT(reset_gamma()));
        connect(B_SaturtationOrig,		SIGNAL(clicked()),					this, SLOT(reset_saturation()));
        connect(B_TemperaturRangeOrig,	SIGNAL(clicked()),					this, SLOT(reset_temperaturrange()));
        connect(B_tintOrig,				SIGNAL(clicked()),					this, SLOT(reset_tint()));
        connect(B_RotationOrig,			SIGNAL(clicked()),					this, SLOT(reset_rotation()));
        connect(B_ThresholdOrig, 		SIGNAL(clicked()),					this, SLOT(reset_threshold()));
        connect(B_MaximumValueorig,		SIGNAL(clicked()),					this, SLOT(reset_adj_max()));
        connect(B_BlackOrig_0,			SIGNAL(clicked()),					this, SLOT(reset_black0()));
        connect(B_BlackOrig_1,			SIGNAL(clicked()),					this, SLOT(reset_black1()));
        connect(B_BlackOrig_2,			SIGNAL(clicked()),					this, SLOT(reset_black2()));
        connect(B_BlackOrig_3,			SIGNAL(clicked()),					this, SLOT(reset_black3()));
        connect(B_BlackOrig_4,			SIGNAL(clicked()),					this, SLOT(reset_black4()));
        connect(B_orig_Gamma_slope,		SIGNAL(clicked()),					this, SLOT(reset_gamma_slope()));
        connect(B_Reset_Banding,		SIGNAL(clicked()),					this, SLOT(reset_banding()));




        //Künstliches Auslösen von Signalen für Initialisierung
        brightness_SB2LE();
        gamma_SB2LE();
        gamma_slope_SB2LE();
        saturtation_SB2LE();
        temperaturRange_SB2LE();
        tint_SB2LE();
        WhiteBalance_choose();
        threshold_SB2LE();
        adj_max_SB2LE();
        Black_SB2LE0();
        Black_SB2LE1();
        Black_SB2LE2();
        Black_SB2LE3();
        Black_SB2LE4();
        banding_noise_SB2LE();


        //Eingabebereiche setzen
        LE_Brightness->		setValidator(new QDoubleValidator_StandardNotation(0.01,10.0,2,this));
        LE_Gamma->			setValidator(new QDoubleValidator_StandardNotation(0.01, 5.0,2,this));
        LE_Gamma_slope->	setValidator(new QDoubleValidator_StandardNotation(0.0, 20.0,2,this));
        LE_tint->			setValidator(new QDoubleValidator_StandardNotation(0.1,	3.0, 2,	this));
        LE_TemperaturRange->setValidator(new QIntValidator(1500,					15000,	this));

        LE_Saturtation->	setValidator(new QIntValidator(0,						65535,	this));
        LE_Threshold->		setValidator(new QDoubleValidator_StandardNotation(0.0,	1000.0, 1,	this));
        LE_Black_0->		setValidator(new QIntValidator(0,32000,this));
        LE_Black_1->		setValidator(new QIntValidator(0,32000,this));
        LE_Black_2->		setValidator(new QIntValidator(0,32000,this));
        LE_Black_3->		setValidator(new QIntValidator(0,32000,this));
        LE_Black_4->		setValidator(new QIntValidator(0,32000,this));
        LE_MaximumValue->	setValidator(new QDoubleValidator_StandardNotation(0.00001,0.99999,5,this));
        LE_Banding_Noise->	setValidator(new QDoubleValidator_StandardNotation(0.001,0.020,3,this));


         L_Display_2->setHidden(true);
        Frame_Pic2->setHidden(true);
        L_Display_exc->setHidden(true);




}

mainwindow::~mainwindow(){


}

void mainwindow::opendataquestion(){
    if(!closeQuestion()){												//  Wurde ein bereits bearbeitetes File gespeichert?
        return;
    }




    direction=QFileDialog::getOpenFileName(								//  "Wählen Sie ein RAW File" Fenster
                this,
                tr("Open Raw-File"),
                "C://",
                "Raw-Files (*.3fr *.awr *.cr2 *.crw *.dcr *.dng *.erf *.kdc *.mdc *.mef *.mrw *.nef *.nrw *.orf *.pef  *.tif *.raf *.raw *.rw2 *.rwl *.sr2 *.srw *.tif *.x3f)"		// ERWEITERUNG FÜR ALLE GÄNGIGEN FORMATE ! *eip funktioniert nicht...
                );


                                                                        // filepath_forlibraw sollte allokiert werden (nicht statisch)!

    filepath_forlibraw[direction.toWCharArray(filepath_forlibraw)]='\0';					// WChar_t gibt es scheinbar nur für WIN32 ?!
                                                                        // open_file benötigt WChar_t
    opendata();
}
void mainwindow::opendata(){


    if(error(rawdata->open_file(filepath_forlibraw), QString::QString("Failed to open %1").arg(direction)))
    {																	// Fehler beim Öffnen?
        return;
    }
    L_tester->setText(L_tester->text() + QString("\n\nOpen Raw-File at \t") + QTime::currentTime().toString() + QString("\n") );



    rawdata->verbose=1;											// wahrscheinlich nicht nötig



    L_FileDirection->setText(direction);						// Nur zum Anzeigen des Dateiverzeichnisses



    rawdata->set_progress_handler(& my_progress_callback, this);	// Verknüpfung von Callbackfunktion des dcraw-progesses

    if(error(rawdata->unpack(), QString::QString("Failed to unpack %1").arg(direction)))
    {																	// Fehler beim Entpacken?
        return;
    }


    // Aktivieren von Buttons, welche zu Beginn nicht funktionieren
        B_Save->setEnabled(true);
        B_Update->setEnabled(true);
        M_saveProcessedData->setEnabled(true);
        M_saveUnprocessedData->setEnabled(true);
        B_saveRaw->setEnabled(true);
        B_Update2->setEnabled(true);
        B_AllOriginal->setEnabled(true);

    // Meta Daten anzeigen
    showMetadata();

    // Originaldaten speichern
    rawdata->setoriginalflip(rawdata->imgdata.sizes.flip);
    rawdata->setoriginalTint_Temprange();

    rawdata->setgamma();
    rawdata->setoriginalgammaslope();
    //this->L_artist->setText(QString::number(rawdata->getoriginalgamma()));

    for (int c=0; c<5; c++){
        if (c==0){
            rawdata->setoriginalblack(0,rawdata->imgdata.color.black);
        }
        if (c>0){
            rawdata->setoriginalblack(c,rawdata->imgdata.color.cblack[c-1]);
        }
    }

    init();														// Original Einstellungen setzen



    loaddata();

}


void mainwindow::SB_Change(){
    SB_Zoom->setValue(SB_Zoom->value()+L_Display->getdelta());
};

void mainwindow::zoom(){
    if(!isopen)
        return;								// wenn kein File geöffnet

    if (iszoomed){
        iszoomed=false;						// Wechsel zu notzoomed
        SB_Zoom->setValue(14);

    }
    else{

        iszoomed=true;						// Wechsel zu zoomed

        float wi=L_Display->width();		// to float
        float hi=L_Display->height();		// to float
        startx=	L_Display->getMouseX() /  wi * data->width() - wi /2.;
        starty= L_Display->getMouseY() / hi * data->height() - hi /2.;

        SB_Zoom->setValue(100);
    }

}

void mainwindow::SBzoom(){
    if(!isopen)
        return;

    if (SB_Zoom->value()<=14){
        iszoomed=false;
        L_Display->setCursor(Qt::ArrowCursor);
    }
    else{
        iszoomed=true;
        L_Display->setCursor(Qt::OpenHandCursor);
    }
    L_Zoom->setText("Zoom: " + QString::number(SB_Zoom->value()));
    showQPM();
}

bool mainwindow::closeQuestion(){
    if (!issaved) {
        QMessageBox::StandardButton re;
        re = QMessageBox::warning(this, tr("Warning"),
                     tr("The file has been modified.\n"
                        "Do you want to save your changes?"),
                     QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
        if (re == QMessageBox::Save){
            savedata();
            return false;
        }
        else if (re == QMessageBox::Cancel)
            return false;
        else
            return true;
    }
    else
    return true;
}

void mainwindow::closeEvent(QCloseEvent *event)
{
    if(closeQuestion())												//	Wenn die Close-Bedingungen erfüllt sind: Beenden
        event->accept();
    else															//  sonst ignorieren
        event->ignore();
}

void mainwindow::drag(){
    if(iszoomed){
        isdraged=true;
        L_Display->setCursor(Qt::ClosedHandCursor);
    }
    L_MousePosition->setText(QString("Clickposition: X= %1, Y= %2").arg(L_Display -> getMouseX()).arg(L_Display -> getMouseY()));

}

void mainwindow::moveDisplayPicture(){
    if(iszoomed && isdraged){

        startx = startx + L_Display->getMoveX()*100./SB_Zoom->value();
        starty = starty + L_Display->getMoveY()*100./SB_Zoom->value();

        showQPM();
    }
    L_MouseMove->setText(QString("Move: X= %1, Y= %2").arg(L_Display -> getMoveX()).arg(L_Display -> getMoveY()));

}

void mainwindow::drop(){
        isdraged=false;
        L_Display->setCursor(Qt::OpenHandCursor );

}





void mainwindow::showQPM(){
    L_Display->setPixmap(data->getScaled(iszoomed,SB_Zoom->value(),startx,starty,L_Display->width(),L_Display->height()));


    if(usecompic)
    L_Display_2->setPixmap(lastpic->getScaled(iszoomed,SB_Zoom->value(),startx,starty,L_Display->width(),L_Display->height()));
}


void mainwindow::resizeEvent ( QResizeEvent * event )
{
     QMainWindow::resizeEvent(event);
     showQPM();
}


void mainwindow::savedata(){

    direction = QFileDialog::getSaveFileName(
                this,
                tr("Save File"),
                "C://",
                "only tiff (*.tiff)"
                );
    issaved=data->save(direction,(const char*)0,100);											// scheint über Pixmap an Qualität zu verlieren ! Verbesserung nötig? -> dritter Parameter ist quality

}





void mainwindow::showMetadata(){                                                    //Fkt zum Auslesen der Metadaten


    L_ISO_sensitivity->setText("ISO Sensitivity: \t" + QString::number(rawdata->imgdata.other.iso_speed ));

    //Shutter Speed
    //Convert decimal value from shutter information into a fraction
    //based in the euclidean alogrythm http://en.wikipedia.org/wiki/Euclidean_algorithm

    double integral = std::floor(rawdata->imgdata.other.shutter);            // round downwards
    double frac = rawdata->imgdata.other.shutter - integral;                 // if frac > 1

    const long precision = 10000;                                       // This is the accuracy.

    int gcd_ = rawdata->gcd(floor(frac * precision+0.5), precision);                 // rekursiv call to determ the greatest common divisor

    int denominator = precision / gcd_;                                     // denominator
    int numerator = floor(frac * precision + 0.5) / gcd_;                   // numerator

    if(integral >= 4)
        {
        L_shutter->setText("Shutter: \t\t"+ QString::number(integral) + ("s"));
        }
    else if (integral < 4 && integral > 0)
        {
        L_shutter->setText("Shutter: \t\t "+  QString::number(rawdata->imgdata.other.shutter, 'f', 1) + ("s"));
        }
    else
        {
        L_shutter->setText("Shutter: \t\t "+ QString::number(numerator) + ("/") + QString::number(denominator) + ("s"));
        }

    L_shutter->setText("Shutter: \t\t "+ QString::number(rawdata->imgdata.other.shutter));


    // Aperature
    if(rawdata->imgdata.other.aperture < 9.6)
        L_aperture->setText("Aperture: \t f/" + QString::number(rawdata->imgdata.other.aperture, 'f', 1));
    else
        L_aperture->setText("Aperture: \t f/" + QString::number(floor(rawdata->imgdata.other.aperture), 'f', 0));


    L_focal_length->setText("Focal length: \t"+ QString::number(rawdata->imgdata.other.focal_len) + ("mm"));                                      //  Brennweite

    L_date_of_shooting->setText("Date of Shooting: \t" + QString::QString(ctime(&rawdata->imgdata.other.timestamp)));                 //  Tag Datum Uhrzeit Jahr

    L_image_description->setText("Image Description: \t" + QString::QString(rawdata->imgdata.other.desc)) ;                               //  Bildbeschreibung (bisher kein Eintag vorhanden)

    L_artist->setText("Artist: \t\t" + QString::QString(rawdata->imgdata.other.artist)) ;                                             //  Künstler/Fotograf (bisher kein Eintrag vorhanden)

    L_camera_model->setText("Camera Model: \t" +  QString::QString(rawdata->imgdata.idata.make) + " "
                                               + QString::QString(rawdata->imgdata.idata.model));                                        // Kamerahersteller und Modell

    L_number_of_colors->setText("Number of Colors: \t" + QString::number(rawdata->imgdata.idata.colors));                             // Anzahl der Farben (Abhängig vom verwendeten Bayer-Pattern - bisher immer "3")

    L_color_description->setText("Color Description: \t" + QString::QString(rawdata->imgdata.idata.cdesc));                               // Farbbeschreibung (Canon arbeitet scheinbar mit RGB-pattern, andere Kameras verwenden u.a. RGBE/GMCY oder GBTB)

    //L_flip->setText("Flip: \t\t" + QString::number(rawdata->imgdata.sizes.flip));                                                       // Bildausrichtung (funktioniert -> Zahlencode noch in Text umwandeln!)

    switch(rawdata->imgdata.sizes.flip)
    {
    case 0:     L_flip->setText("Rotation: \t 0 deg");
                break;
    case 3:     L_flip->setText("Rotation: \t 180 deg");
                break;
    case 5:     L_flip->setText("Rotation: \t 90 deg counterclockwise");
                break;
    case 6:     L_flip->setText("Rotation: \t 90 deg clockwise");
                break;
    default:    L_flip->setText("Rotation: \t N/A");
    }

    L_GPS_data->setText("GPS Data: \t");                                                                                             // GPS Daten (waren bisher noch bei keiner Datei hinterlegt!)
    for(int i=0; i<32; i++){
    L_GPS_data->setText(L_GPS_data->text()+ QString::number(rawdata->imgdata.other.gpsdata[i],8 ));
    }

    L_raw_pixel->setText("RAW Pixel: \t" + QString::number(rawdata->imgdata.sizes.raw_width) + " x "
                                    + QString::number(rawdata->imgdata.sizes.raw_height) + ("px"));

    L_image_pixel->setText("Image Pixel: \t" + QString::number(rawdata->imgdata.sizes.iwidth) + " x "
                                + QString::number(rawdata->imgdata.sizes.iheight) + ("px"));

    //L_raw_pitch->setText("Size of RAW-File: \t" + QString::number(rawdata->imgdata.sizes.raw_pitch));                                   // "Full size of raw data row in bytes" -> muss das umgerechnet werden? wenn ja: wie?

    //L_flash_used->setText("Flash used: \t" + QString::number(rawdata->imgdata.color.flash_used));                                       // Blitz aktiv? (liefert bisher immer eine "0")

    //L_top_margin->setText("Frame Coordinate \t(" + QString::number(rawdata->imgdata.sizes.left_margin) + " | "
    //                                            + QString::number(rawdata->imgdata.sizes.top_margin) + ")");

    //L_pixel_aspect->setText("Ratio: \t\t" + QString::number(rawdata->imgdata.sizes.pixel_aspect));                                      //Verhältnis Höhe/Breite  (sagt offenbar nur aus ob es ein einheitliches Verhältnis ist)




    L_Black1->setText(QString::QString("Black Level Ch.1 (") + QString::QString(rawdata->imgdata.idata.cdesc[0]) + QString::QString(") :"));
    L_Black2->setText(QString::QString("Black Level Ch.2 (") + QString::QString(rawdata->imgdata.idata.cdesc[1]) + QString::QString(") :"));
    L_Black3->setText(QString::QString("Black Level Ch.3 (") + QString::QString(rawdata->imgdata.idata.cdesc[2]) + QString::QString(") :"));
    L_Black4->setText(QString::QString("Black Level Ch.4 (") + QString::QString(rawdata->imgdata.idata.cdesc[3]) + QString::QString(") :"));
}


bool mainwindow::usedcraw(){


    progressBar->setValue(0);
    TabMenu->setCurrentIndex(2);
    L_processlabel->setText("Working..");

    static int lastflip=rawdata->imgdata.params.user_flip;

    if(RB_0->isChecked())						// Wanna rotate?
    {
        rawdata->imgdata.params.user_flip=0;		// Nicht drehen
    }
    else if(RB_90->isChecked())
    {
        rawdata->imgdata.params.user_flip=6;		// um 90° im Uhrzeigersinn drehen
    }
    else if(RB_180->isChecked())
    {
        rawdata->imgdata.params.user_flip=3;		// um 180° drehen
    }
    else if(RB_270->isChecked()){
        rawdata->imgdata.params.user_flip=5;		// um 270° im Uhrzeigersinn drehen
    }



    // Vorschau?
    if(rawdata->imgdata.params.user_flip != lastflip || RB_PreNo->isChecked())
    {
        usecompic=false;
    }
    else
    {
        usecompic=true;
    }

    lastflip = rawdata->imgdata.params.user_flip;



    // Interpolation

    rawdata->imgdata.params.user_qual=D_Interpolation->value();

    // Gamma Kurve
    rawdata->imgdata.params.gamm[0] = 1/((float)SD_Gamma->value()/100);
    rawdata->imgdata.params.gamm[1] = (float)SD_Gamma_slope->value()/100.;



    // Brightness

    rawdata->imgdata.params.no_auto_bright=1;
    rawdata->imgdata.params.bright=SD_Brightness->value()*1./100.;

// White Balance

    // Combo Box
    //WB - Automatic
    if(CB_WhiteBalance->currentIndex() == 0){
        rawdata->imgdata.params.use_camera_wb = 0;
        rawdata->imgdata.params.use_auto_wb = 1;
        }
    //WB - Manualy
    else if(CB_WhiteBalance->currentIndex() == 1){
        rawdata->imgdata.params.use_auto_wb = 0;
        rawdata->imgdata.params.use_camera_wb = 0;

        float rgb[3];
        rawdata->convert_t_to_rgb(SD_TemperaturRange->value(), rgb);
        // Array user_mul is for each channel following the order RGBG
        rawdata->imgdata.params.user_mul[0] =  rgb[2]/rgb[1];				//Red
        rawdata->imgdata.params.user_mul[1] =  (float)SD_tint->value()/100;   //Green
        rawdata->imgdata.params.user_mul[2] =  rgb[0]/rgb[1];				//Blue
        rawdata->imgdata.params.user_mul[3] =  (float)SD_tint->value()/100;	//Green

        }
        //WB - As Shoot
    else if(CB_WhiteBalance->currentIndex() == 2){
        rawdata->imgdata.params.use_auto_wb = 0;
        rawdata->imgdata.params.use_camera_wb = 1;

        }

    // Saturation
    rawdata->imgdata.params.user_sat = SD_Saturtation->value();



        // Noise Reduction
    rawdata->imgdata.params.fbdd_noiserd=SD_FDBB_noisereduction->value();
    rawdata->imgdata.params.threshold=LE_Threshold->text().toFloat();
        //Line Noise Banding
    if (SD_Banding_Noise->value()>0){
        rawdata->imgdata.params.cfaline=1;											//on
        rawdata->imgdata.params.linenoise=(float)SD_Banding_Noise->value()/1000.;
    }
    else{
        rawdata->imgdata.params.cfaline=0;											//off
    }

        //output color space
    rawdata->imgdata.params.output_color=CB_Color_Space->currentIndex();			//0=raw
        //adjust maximum thresh
    rawdata->imgdata.params.adjust_maximum_thr=SD_Adj_Max->value()/100000.;

    // Black Level
    rawdata->imgdata.params.user_black=SD_Black_0->value();
    rawdata->imgdata.params.user_cblack[0]=SD_Black_1->value();
    rawdata->imgdata.params.user_cblack[1]=SD_Black_2->value();
    rawdata->imgdata.params.user_cblack[2]=SD_Black_3->value();
    rawdata->imgdata.params.user_cblack[3]=SD_Black_4->value();





    // Median Filters Passed

    rawdata->imgdata.params.med_passes=CB_Median->currentIndex();

    //rawdata->imgdata.rawdata->ioparams.zero_is_bad=1;

    rawdata->imgdata.params.output_tiff=1;


    L_tester->setText(L_tester->text() + QString("\n\nStarting Process at \t") + QTime::currentTime().toString() + QString("\n"));


    if(error(rawdata->dcraw_process(), QString::QString("Failed to use dcraw on %1").arg(direction)))
    {																	// Fehler beim dcraw?
        L_processlabel->setText("Unsuccessful");
        L_tester->setText(L_tester->text() + QString("\n\nFailed at \t\t") + QTime::currentTime().toString() + QString("\n"));
        return true;
    }

    if(error(rawdata->dcraw_ppm_tiff_writer(rawdata->get_temp_path().toStdString().c_str()), QString::QString("Failed to write tempfile %1 \n%2").arg(direction,rawdata->get_temp_path())))
    {																	// Fehler beim schreiben?
        L_processlabel->setText("Unsuccessful: ");
        L_tester->setText(L_tester->text() + QString("\n\nFailed at \t\t") + QTime::currentTime().toString() + QString("\n"));
        return true;
    }
    progressBar->setValue(30);
    L_processlabel->setText("Successful");
    L_tester->setText(L_tester->text() + QString("\n\nSuccessful at \t") + QTime::currentTime().toString() + QString("\n"));
    return false;






}


//Prototype:	error( auszuführende Funktion der Libraw mit Fehlercode, Erste Zeile der Fehlermeldung) true falls es zu Fehler kommt
bool mainwindow::error(int errorcode, QString words){
        if (errorcode) {									// Fehlermeldung bei fehlerhafter Dateiöffnung
        QString msg = tr("%1 \nERROR: %2")
                        .arg(words)
                        .arg(LibRaw::strerror(errorcode));	// Fehlercode-Darstellung

        QMessageBox::warning(this, tr("Error"), msg);
        return true;


        }
    return false;
}

void mainwindow::loaddata(){
    if(usedcraw())
        return;						// Abbrechen, falls dcraw Fehler ergibt

    data->load(rawdata->get_temp_path());		// Laden des neue bearbeiteten Files





    issaved=false;
    isopen=true;
    showQPM();						// Anzeigen
}


void mainwindow::updatedata(){

    this->lastpic->swap(* data);

    if(usedcraw())
        return;						// Abbrechen, falls dcraw Fehler ergibt

    data->load(rawdata->get_temp_path());		// Laden des neue bearbeiteten Files





    issaved=false;
    isopen=true;

    if(usecompic)
    {
    L_Display_2->setHidden(false);
    Frame_Pic2->setHidden(false);

        if(preisright){
            L_Display->resize(Displayzone->width()/2-2,Frame_Pic2->height());
        }
        else{
            L_Display->resize(Displayzone->width(),Frame_Pic2->height()/2-2);
        }


    }
    else
    {
    L_Display_2->setHidden(true);
    Frame_Pic2->setHidden(true);
    closePic2();

    }

    showQPM();						// Anzeigen

}


void mainwindow::interpolation_D2CB(){
    CB_Interpolation->setCurrentIndex(D_Interpolation->value());				// Verknüpfung der Auswahl mit dem Wahlrad
}
void mainwindow::interpolation_CB2D(){
    D_Interpolation->setValue(CB_Interpolation->currentIndex());			// Verknüpfung der Auswahl mit dem Wahlrad
}

void mainwindow::brightness_SB2LE(){
    LE_Brightness->setText(QString::number(SD_Brightness->value()/100.));			// Verknüpfung des Sliders mit Textlabel
}
void mainwindow::gamma_SB2LE(){
    LE_Gamma->setText(QString::number( SD_Gamma->value() /100.));						// Verknüpfung des Sliders mit Textlabel
}
void mainwindow::saturtation_SB2LE(){
    LE_Saturtation->setText(QString::number(SD_Saturtation->value()));			// Verknüpfung des Sliders mit Textlabel
}
void mainwindow::temperaturRange_SB2LE(){
    LE_TemperaturRange->setText(QString::number(SD_TemperaturRange->value()));	// Verknüpfung des Sliders mit Textlabel
}
void mainwindow::tint_SB2LE(){
    LE_tint->setText(QString::number(SD_tint->value()/100.));						// Verknüpfung des Sliders mit Textlabel
}
void mainwindow::threshold_SB2LE(){
    LE_Threshold->setText(QString::number(SD_Threshold->value()/10.));				// Verknüpfung des Sliders mit Textlabel
}


void mainwindow::brightness_LE2SB(){
    SD_Brightness->setValue(100.* LE_Brightness->text().toDouble());
}
void mainwindow::gamma_LE2SB(){
    SD_Gamma->setValue(100.* LE_Gamma->text().toDouble());
}
void mainwindow::saturtation_LE2SB(){
    SD_Saturtation->setValue(LE_Saturtation->text().toInt());
}
void mainwindow::temperaturRange_LE2SB(){
    SD_TemperaturRange->setValue(LE_TemperaturRange->text().toInt());

}
void mainwindow::tint_LE2SB(){

    SD_tint->setValue(100.* LE_tint->text().toDouble());

}

void mainwindow::threshold_LE2SB(){

    SD_Threshold->setValue(10.*LE_Threshold->text().toDouble());

}


void mainwindow::reset_brightness(){
    SD_Brightness->setValue(100);
}
void mainwindow::reset_gamma(){
    SD_Gamma->setValue(rawdata->getoriginalgamma()*100);
}

void mainwindow::reset_threshold(){
    SD_Threshold->setValue(0);
}


void mainwindow::reset_saturation(){
    SD_Saturtation->setValue(0);
}
void mainwindow::reset_temperaturrange(){
    SD_TemperaturRange->setValue(rawdata->getoriginalTemprange());
}
void mainwindow::reset_tint(){
    SD_tint->setValue(rawdata->getoriginalTint()*100.);
}
void mainwindow::reset_rotation(){

    switch (rawdata->getoriginalflip()){
        case 0:
            RB_0->setChecked(true);		// Nicht drehen
            break;
        case 6:
            RB_90->setChecked(true);		// um 90° im Uhrzeigersinn drehen
            break;
        case 3:
            RB_180->setChecked(true);		// um 180° drehen
            break;
        case 5:
            RB_270->setChecked(true);		// um 270° im Uhrzeigersinn drehen
            break;
    }

}





void mainwindow::WhiteBalance_choose(){
    if (this->CB_WhiteBalance->currentIndex() == 1)
    {
        B_TemperaturRangeOrig->setEnabled(true);
        LE_TemperaturRange->setEnabled(true);
        SD_TemperaturRange->setEnabled(true);
        B_tintOrig->setEnabled(true);
        LE_tint->setEnabled(true);
        SD_tint->setEnabled(true);


    }
    else
    {
        B_TemperaturRangeOrig->setEnabled(false);
        LE_TemperaturRange->setEnabled(false);
        SD_TemperaturRange->setEnabled(false);
        B_tintOrig->setEnabled(false);
        LE_tint->setEnabled(false);
        SD_tint->setEnabled(false);



    }



}





void mainwindow::save_u_RAW(){


    QMessageBox::Button re;
        re = QMessageBox::question(this, tr("Question"),
                     tr("A unprocessed raw file could have black edges.\n"
                        "Do you want to cut them off?"),
                        QMessageBox::Yes | QMessageBox::No);


    direction = QFileDialog::getSaveFileName(
                this,
                tr("Save File"),
                "C://",
                "only tiff (*.tiff)"
                );



    if(re==QMessageBox::Yes)
    {
    rawdata->write_raw_2_tiff_cropped(direction.toStdString().c_str());
    }
    else
    {
    rawdata->write_raw_2_tiff(direction.toStdString().c_str());
    }



}



void mainwindow::init(){
 SB_Zoom->setValue(14);
 reset_brightness();
 reset_gamma();
 reset_gamma_slope();
 reset_saturation();
 reset_temperaturrange();
 reset_tint();
 reset_rotation();
 reset_threshold();
 reset_adj_max();
 reset_black0();
 reset_black1();
 reset_black2();
 reset_black3();
 reset_black4();
 reset_banding();
 SD_FDBB_noisereduction->setValue(0);
 CB_WhiteBalance->setCurrentIndex(2);
 CB_Color_Space->setCurrentIndex(1);
 CB_Median->setCurrentIndex(0);
 CB_Interpolation->setCurrentIndex(0);


 L_Display_2->setHidden(true);
 Frame_Pic2->setHidden(true);
 L_Display_exc->setHidden(true);

}

void mainwindow::init_slot()
{
    init();
}


void mainwindow::startopen(char * openpath){

    direction=openpath;

    if(!direction.isNull()){
        filepath_forlibraw[direction.toWCharArray(filepath_forlibraw)]='\0';					// WChar_t gibt es scheinbar nur für WIN32 ?!
        opendata();
    }


}



void mainwindow::resize_sidemenu(){



    if(sidemenuisopen){
        Sidemenu->setFixedWidth(1);
        L_Display->resize(L_Display->width()+399,L_Display->height());
        sidemenuisopen=false;
    }
    else{
        Sidemenu->setFixedWidth(400);
        L_Display->resize(L_Display->width()-399,L_Display->height());
        sidemenuisopen=true;
    }
    showQPM();
}

void mainwindow::reset_adj_max(){
    SD_Adj_Max->setValue(75000);
    LE_MaximumValue->setText(QString::number(SD_Adj_Max->value()/100000.));
}

void mainwindow::adj_max_SB2LE(){
    LE_MaximumValue->setText(QString::number(SD_Adj_Max->value()/100000.));
}

void mainwindow::Black_SB2LE0(){
    LE_Black_0->setText(QString::number(SD_Black_0->value()));
}

void mainwindow::Black_SB2LE1(){
    LE_Black_1->setText(QString::number(SD_Black_1->value()));
}

void mainwindow::Black_SB2LE2(){
    LE_Black_2->setText(QString::number(SD_Black_2->value()));
}

void mainwindow::Black_SB2LE3(){
    LE_Black_3->setText(QString::number(SD_Black_3->value()));
}

void mainwindow::Black_SB2LE4(){
    LE_Black_4->setText(QString::number(SD_Black_4->value()));
}

void mainwindow::banding_noise_SB2LE(){
    LE_Banding_Noise->setText(QString::number((float)SD_Banding_Noise->value()/100000.));
}

void mainwindow::reset_black0(){
    SD_Black_0->setValue(rawdata->getoriginalblack(0));

}

void mainwindow::reset_black1(){
    SD_Black_1->setValue(rawdata->getoriginalblack(1));

}

void mainwindow::reset_black2(){
    SD_Black_2->setValue(rawdata->getoriginalblack(2));

}

void mainwindow::reset_black3(){
    SD_Black_3->setValue(rawdata->getoriginalblack(3));

}

void mainwindow::reset_black4(){
    SD_Black_4->setValue(rawdata->getoriginalblack(4));
}

void mainwindow::reset_gamma_slope(){
    SD_Gamma_slope->setValue(rawdata->getoriginalgammaslope()*100.);
}

void mainwindow::reset_banding(){
    SD_Banding_Noise->setValue(0);
}


void mainwindow::black_LE2SB0(){
    SD_Black_0->setValue(LE_Black_0->text().toUInt());
}

void mainwindow::black_LE2SB1(){
    SD_Black_1->setValue(LE_Black_1->text().toUInt());
}

void mainwindow::black_LE2SB2(){
    SD_Black_2->setValue(LE_Black_2->text().toUInt());
}

void mainwindow::black_LE2SB3(){
    SD_Black_3->setValue(LE_Black_3->text().toUInt());
}

void mainwindow::black_LE2SB4(){
    SD_Black_4->setValue(LE_Black_4->text().toUInt());
}

void mainwindow::maxVal_LE2SB(){
    SD_Adj_Max->setValue(LE_MaximumValue->text().toDouble()*100000.);
}

void mainwindow::gamma_slope_LE2SB(){
    SD_Gamma_slope->setValue(LE_Gamma_slope->text().toDouble()*100.);

}

void mainwindow::banding_noise_LE2SB(){
    SD_Banding_Noise->setValue(LE_Banding_Noise->text().toDouble()*100000.);
}

void mainwindow::gamma_slope_SB2LE(){
    LE_Gamma_slope->setText(QString::number(SD_Gamma_slope->value()/100.));
}



void mainwindow::zoomin(){
    SB_Zoom->setValue(SB_Zoom->value()+10);
}

void mainwindow::zoomout(){
    SB_Zoom->setValue(SB_Zoom->value()-10);
}

void mainwindow::showaboutus(){
    About_RAWShop  *win;

    win = new About_RAWShop;

    win->show();
}


void mainwindow::closePic2(){
    L_Display_2->setHidden(true);
    Frame_Pic2->setHidden(true);
    L_Display_exc->setHidden(true);

    //SB_Zoom->setValue(14);

    L_Display->resize(Displayzone->width()-2,Frame_Pic2->height());
    showQPM();
}


void mainwindow::orderchange(){

    ClickableLabel * q;

    L_Display_2->setHidden(!L_Display_2->isHidden());
    L_Display_exc->setHidden(!L_Display_exc->isHidden());

    SB_Zoom->setValue(14);

    if(preisright)
    {

        L_Display->resize(this->Displayzone->width()-2,this->Frame_Pic2->height()/2-2);

    }
    else
    {
        L_Display->resize(this->Displayzone->width()/2-2,Frame_Pic2->geometry().height());

    }
    preisright=!preisright;


    q =  L_Display_exc;
    L_Display_exc = L_Display_2;
    L_Display_2=q;



    showQPM();
}


void mainwindow::zoom_2(){
    if(!isopen)
        return;								// wenn kein File geöffnet

    if (iszoomed){
        iszoomed=false;						// Wechsel zu notzoomed
        SB_Zoom->setValue(14);

    }
    else{

        iszoomed=true;						// Wechsel zu zoomed

        float wi=L_Display->width();		// to float
        float hi=L_Display->height();		// to float
        startx=	L_Display_2->getMouseX() /  wi * data->width() - wi /2.;
        starty= L_Display_2->getMouseY() / hi * data->height() - hi /2.;

        SB_Zoom->setValue(100);
    }

}


void mainwindow::drag_2(){
    if(iszoomed){
        isdraged=true;
        L_Display_2->setCursor(Qt::ClosedHandCursor);
    }
    L_MousePosition->setText(QString("Clickposition: X= %1, Y= %2").arg(L_Display_2 -> getMouseX()).arg(L_Display_2 -> getMouseY()));

}

void mainwindow::moveDisplayPicture_2(){
    if(iszoomed && isdraged){

        startx = startx + L_Display_2->getMoveX()*100./SB_Zoom->value();
        starty = starty + L_Display_2->getMoveY()*100./SB_Zoom->value();

        showQPM();
    }
    L_MouseMove->setText(QString("Move: X= %1, Y= %2").arg(L_Display_2 -> getMoveX()).arg(L_Display_2 -> getMoveY()));

}

void mainwindow::drop_2(){
        isdraged=false;
        L_Display_2->setCursor(Qt::OpenHandCursor );

}

void mainwindow::SB_Change_2(){
    SB_Zoom->setValue(SB_Zoom->value()+L_Display_2->getdelta());
}


