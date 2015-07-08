/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDial>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <clickablelabel.h>

QT_BEGIN_NAMESPACE

class Ui_mainwindow
{
public:
    QAction *M_Open;
    QAction *M_saveProcessedData;
    QAction *M_saveUnprocessedData;
    QAction *M_tester;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_14;
    QHBoxLayout *Buttonmenu;
    QPushButton *B_Open;
    QPushButton *B_Save;
    QPushButton *B_ZoomIn;
    QPushButton *B_ZoomOut;
    QPushButton *B_Zoom1to1;
    QPushButton *B_Update2;
    QPushButton *B_AllOriginal;
    QPushButton *B_Sidemenu2;
    QPushButton *B_saveRaw;
    QPushButton *B_Quit;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *mainarea;
    QFrame *Displayzone;
    QVBoxLayout *Displayarea;
    QHBoxLayout *horizontalLayout_14;
    ClickableLabel *L_Display;
    ClickableLabel *L_Display_2;
    ClickableLabel *L_Display_exc;
    QFrame *Frame_Pic2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *B_ClosePic2;
    QSpacerItem *verticalSpacer_3;
    QPushButton *B_Orderchange;
    QSpacerItem *verticalSpacer_2;
    QPushButton *B_Sidemenu;
    QWidget *Sidemenu;
    QVBoxLayout *verticalLayout_12;
    QTabWidget *TabMenu;
    QWidget *tab;
    QVBoxLayout *verticalLayout;
    QFrame *line;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QRadioButton *RB_0;
    QRadioButton *RB_90;
    QRadioButton *RB_180;
    QRadioButton *RB_270;
    QSpacerItem *horizontalSpacer_15;
    QPushButton *B_RotationOrig;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_3;
    QLineEdit *LE_Brightness;
    QSpacerItem *horizontalSpacer;
    QPushButton *B_BrightnessOrig;
    QSlider *SD_Brightness;
    QSlider *SD_Saturtation;
    QHBoxLayout *horizontalLayout_11;
    QLabel *L_Saturtation;
    QLineEdit *LE_Saturtation;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *B_SaturtationOrig;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_2;
    QLineEdit *LE_Gamma;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *B_GammaOrig;
    QSlider *SD_Gamma;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_5;
    QLineEdit *LE_Gamma_slope;
    QSpacerItem *horizontalSpacer_18;
    QPushButton *B_orig_Gamma_slope;
    QSlider *SD_Gamma_slope;
    QGroupBox *groupBox_12;
    QVBoxLayout *verticalLayout_17;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_24;
    QHBoxLayout *horizontalLayout_25;
    QLabel *label_14;
    QLineEdit *LE_Black_0;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *B_BlackOrig_0;
    QSlider *SD_Black_0;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_27;
    QHBoxLayout *horizontalLayout_23;
    QLabel *L_Black1;
    QLineEdit *LE_Black_1;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *B_BlackOrig_1;
    QSlider *SD_Black_1;
    QWidget *tab_6;
    QVBoxLayout *verticalLayout_26;
    QHBoxLayout *horizontalLayout_24;
    QLabel *L_Black2;
    QLineEdit *LE_Black_2;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *B_BlackOrig_2;
    QSlider *SD_Black_2;
    QWidget *tab_7;
    QVBoxLayout *verticalLayout_25;
    QHBoxLayout *horizontalLayout_18;
    QLabel *L_Black3;
    QLineEdit *LE_Black_3;
    QSpacerItem *horizontalSpacer_13;
    QPushButton *B_BlackOrig_3;
    QSlider *SD_Black_3;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_23;
    QHBoxLayout *horizontalLayout_22;
    QLabel *L_Black4;
    QLineEdit *LE_Black_4;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *B_BlackOrig_4;
    QSlider *SD_Black_4;
    QGroupBox *groupBox_7;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_10;
    QComboBox *CB_WhiteBalance;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_9;
    QLabel *L_TemperaturRange;
    QLineEdit *LE_TemperaturRange;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *B_TemperaturRangeOrig;
    QSlider *SD_TemperaturRange;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label;
    QLineEdit *LE_tint;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *B_tintOrig;
    QSlider *SD_tint;
    QGroupBox *groupBox_8;
    QVBoxLayout *verticalLayout_15;
    QHBoxLayout *horizontalLayout_16;
    QLabel *L_threshold;
    QLineEdit *LE_Threshold;
    QSpacerItem *horizontalSpacer_14;
    QPushButton *B_ThresholdOrig;
    QSlider *SD_Threshold;
    QLabel *label_17;
    QHBoxLayout *horizontalLayout_26;
    QLabel *label_10;
    QLabel *label_15;
    QLabel *label_16;
    QHBoxLayout *horizontalLayout_27;
    QSpacerItem *horizontalSpacer_5;
    QSlider *SD_FDBB_noisereduction;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_8;
    QLineEdit *LE_Banding_Noise;
    QSpacerItem *horizontalSpacer_17;
    QPushButton *B_Reset_Banding;
    QHBoxLayout *horizontalLayout_20;
    QSlider *SD_Banding_Noise;
    QGroupBox *groupBox_11;
    QVBoxLayout *verticalLayout_22;
    QHBoxLayout *horizontalLayout_17;
    QLabel *L_threshold_2;
    QLineEdit *LE_MaximumValue;
    QSpacerItem *horizontalSpacer_16;
    QPushButton *B_MaximumValueorig;
    QSlider *SD_Adj_Max;
    QGroupBox *groupBox_10;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_7;
    QComboBox *CB_Color_Space;
    QLabel *label_11;
    QComboBox *CB_Median;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QDial *D_Interpolation;
    QComboBox *CB_Interpolation;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout;
    QRadioButton *RB_PreYes;
    QRadioButton *RB_PreNo;
    QPushButton *B_Update;
    QWidget *tab_2;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_6;
    QLabel *L_camera_model;
    QLabel *L_date_of_shooting;
    QLabel *L_focal_length;
    QLabel *L_ISO_sensitivity;
    QLabel *L_aperture;
    QLabel *L_shutter;
    QLabel *L_flip;
    QLabel *L_raw_pixel;
    QLabel *L_image_pixel;
    QLabel *L_number_of_colors;
    QLabel *L_color_description;
    QLabel *L_artist;
    QLabel *L_image_description;
    QLabel *L_GPS_data;
    QLabel *L_top_margin;
    QLabel *L_raw_pitch;
    QLabel *L_flash_used;
    QLabel *L_serial_nummer_of_image;
    QWidget *Progress;
    QVBoxLayout *verticalLayout_4;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *L_tester;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *L_processlabel;
    QProgressBar *progressBar;
    QHBoxLayout *bottom;
    QHBoxLayout *horizontalLayout_6;
    QLabel *L_Zoom;
    QScrollBar *SB_Zoom;
    QLabel *L_FileDirection;
    QVBoxLayout *bottom2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *L_MousePosition;
    QLabel *L_MouseMove;
    QMenuBar *menuBar;
    QMenu *menuRawShop;
    QMenu *menuSave_as;
    QMenu *menuHelp;

    void setupUi(QMainWindow *mainwindow)
    {
        if (mainwindow->objectName().isEmpty())
            mainwindow->setObjectName(QStringLiteral("mainwindow"));
        mainwindow->resize(1200, 874);
        mainwindow->setMinimumSize(QSize(1200, 600));
        mainwindow->setFocusPolicy(Qt::NoFocus);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Icons/rawshop_ico.ico"), QSize(), QIcon::Normal, QIcon::Off);
        mainwindow->setWindowIcon(icon);
        mainwindow->setStyleSheet(QLatin1String("QToolTip\n"
"{\n"
"     border: 1px solid black;\n"
"     background-color: #ffa02f;\n"
"     padding: 1px;\n"
"     border-radius: 3px;\n"
"     opacity: 1000;\n"
"}\n"
"\n"
"QWidget\n"
"{\n"
"    color: #b1b1b1;\n"
"    background-color: #323232;\n"
"}\n"
"\n"
"\n"
"QWidget:item:hover\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #ca0619);\n"
"    color: #000000;\n"
"}\n"
"\n"
"\n"
"QWidget:item:selected\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QMenuBar::item\n"
"{\n"
"    background: transparent;\n"
"}\n"
"\n"
"QMenuBar::item:selected\n"
"{\n"
"    background: transparent;\n"
"    border: 1px solid #ffaa00;\n"
"}\n"
"\n"
"QMenuBar::item:pressed\n"
"{\n"
"    background: #444;\n"
"    border: 1px solid #000;\n"
"    background-color: QLinearGradient(\n"
"        x1:0, y1:0,\n"
"        x2:0, y2:1,\n"
"        stop:1 #212121,\n"
"        stop:0.4 #343434/*,\n"
"        "
                        "stop:0.2 #343434,\n"
"        stop:0.1 #ffaa00*/\n"
"    );\n"
"    margin-bottom:-1px;\n"
"    padding-bottom:1px;\n"
"}\n"
"\n"
"QMenu\n"
"{\n"
"    border: 1px solid #000;\n"
"}\n"
"\n"
"\n"
"QMenu::item\n"
"{\n"
"    padding: 2px 20px 2px 20px;\n"
"}\n"
"\n"
"QMenu::item:selected\n"
"{\n"
"    color: #000000;\n"
"}\n"
"\n"
"QWidget:disabled\n"
"{\n"
"    color: #404040;\n"
"    background-color: #323232;\n"
"}\n"
"\n"
"QAbstractItemView\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #4d4d4d, stop: 0.1 #646464, stop: 1 #5d5d5d);\n"
"}\n"
"\n"
"QWidget:focus\n"
"{\n"
"    /*border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);*/\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #4d4d4d, stop: 0 #646464, stop: 1 #5d5d5d);\n"
"    padding: 1px;\n"
"    border-style: solid;\n"
"    border: 1px solid #1e1e1e;\n"
"    border-radius: 5;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
" "
                        "   color: #b1b1b1;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656, stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);\n"
"    border-width: 1px;\n"
"    border-color: #1e1e1e;\n"
"    border-style: solid;\n"
"    border-radius: 6;\n"
"    padding: 3px;\n"
"    font-size: 12px;\n"
"    padding-left: 5px;\n"
"    padding-right: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}\n"
"\n"
"QComboBox\n"
"{\n"
"    selection-background-color: #ffaa00;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656, stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);\n"
"    border-style: solid;\n"
"    border: 1px solid #1e1e1e;\n"
"    border-radius: 5;\n"
"}\n"
"\n"
"QComboBox:hover,QPushButton:hover\n"
"{\n"
"    border: 2px solid QLinearGradien"
                        "t( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"\n"
"QComboBox:on\n"
"{\n"
"    padding-top: 3px;\n"
"    padding-left: 4px;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"    selection-background-color: #ffaa00;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView\n"
"{\n"
"    border: 2px solid darkgray;\n"
"    selection-background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QComboBox::drop-down\n"
"{\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: top right;\n"
"     width: 15px;\n"
"\n"
"     border-left-width: 0px;\n"
"     border-left-color: darkgray;\n"
"     border-left-style: solid; /* just a single line */\n"
"     border-top-right-radius: 3px; /* same radius as the QComboBox */\n"
"     border-bottom-right-radius: 3px;\n"
" }\n"
"\n"
"QGroupBox:focus\n"
"{\n"
"border: 2px solid QLin"
                        "earGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QTextEdit:focus\n"
"{\n"
"    border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QScrollBar:horizontal {\n"
"     border: 1px solid #222222;\n"
"     background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0.0 #121212, stop: 0.2 #282828, stop: 1 #484848);\n"
"     height: 7px;\n"
"     margin: 0px 16px 0 16px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #ffa02f, stop: 0.5 #d7801a, stop: 1 #ffa02f);\n"
"      min-height: 20px;\n"
"      border-radius: 2px;\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal {\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"      width: 14px;\n"
"      subcontrol-position: right;\n"
"      subcontrol-origin: margin;\n"
"}\n"
""
                        "\n"
"QScrollBar::sub-line:horizontal {\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"      width: 14px;\n"
"     subcontrol-position: left;\n"
"     subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::right-arrow:horizontal, QScrollBar::left-arrow:horizontal\n"
"{\n"
"      border: 1px solid black;\n"
"      width: 1px;\n"
"      height: 1px;\n"
"      background: white;\n"
"}\n"
"\n"
"QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal\n"
"{\n"
"      background: none;\n"
"}\n"
"\n"
"QScrollBar:vertical\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0.0 #121212, stop: 0.2 #282828, stop: 1 #484848);\n"
"      width: 7px;\n"
"      margin: 16px 0 16px 0;\n"
"      border: 1px solid #222222;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 0.5 #d7801a, "
                        "stop: 1 #ffa02f);\n"
"      min-height: 20px;\n"
"      border-radius: 2px;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical\n"
"{\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"      height: 14px;\n"
"      subcontrol-position: bottom;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical\n"
"{\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #d7801a, stop: 1 #ffa02f);\n"
"      height: 14px;\n"
"      subcontrol-position: top;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::up-arrow:vertical, QScrollBar::down-arrow:vertical\n"
"{\n"
"      border: 1px solid black;\n"
"      width: 1px;\n"
"      height: 1px;\n"
"      background: white;\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical\n"
"{\n"
"      background: none;\n"
""
                        "}\n"
"\n"
"QTextEdit\n"
"{\n"
"    background-color: #242424;\n"
"}\n"
"\n"
"QPlainTextEdit\n"
"{\n"
"    background-color: #242424;\n"
"}\n"
"\n"
"QHeaderView::section\n"
"{\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #616161, stop: 0.5 #505050, stop: 0.6 #434343, stop:1 #656565);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #6c6c6c;\n"
"}\n"
"\n"
"QCheckBox:disabled\n"
"{\n"
"color: #414141;\n"
"}\n"
"\n"
"QCheckBox:enabled\n"
"{\n"
"color: rgb(233, 142, 35);\n"
"}\n"
"\n"
"\n"
"\n"
"QDockWidget::title\n"
"{\n"
"    text-align: center;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"}\n"
"\n"
"QDockWidget::close-button, QDockWidget::float-button\n"
"{\n"
"    text-align: center;\n"
"    spacing: 1px; /* spacing between items in the tool bar */\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop"
                        ":0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"}\n"
"\n"
"QDockWidget::close-button:hover, QDockWidget::float-button:hover\n"
"{\n"
"    background: #242424;\n"
"}\n"
"\n"
"QDockWidget::close-button:pressed, QDockWidget::float-button:pressed\n"
"{\n"
"    padding: 1px -1px -1px 1px;\n"
"}\n"
"\n"
"QMainWindow::separator\n"
"{\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #161616, stop: 0.5 #151515, stop: 0.6 #212121, stop:1 #343434);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #4c4c4c;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"}\n"
"\n"
"QMainWindow::separator:hover\n"
"{\n"
"\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #d7801a, stop:0.5 #b56c17 stop:1 #ffa02f);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #6c6c6c;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"}\n"
"\n"
"QMenu::separator\n"
"{\n"
"    height: 2px;\n"
"    background-color:"
                        " QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #161616, stop: 0.5 #151515, stop: 0.6 #212121, stop:1 #343434);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    margin-left: 10px;\n"
"    margin-right: 5px;\n"
"}\n"
"\n"
"QProgressBar\n"
"{\n"
"    border: 2px solid grey;\n"
"    border-radius: 5px;\n"
"    text-align: center;\n"
"}\n"
"\n"
"QProgressBar::chunk\n"
"{\n"
"    background-color: #d7801a;\n"
"    width: 2.15px;\n"
"    margin: 0.5px;\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"    color: #b1b1b1;\n"
"    border: 1px solid #444;\n"
"    border-bottom-style: none;\n"
"    background-color: #323232;\n"
"    padding-left: 10px;\n"
"    padding-right: 10px;\n"
"    padding-top: 3px;\n"
"    padding-bottom: 2px;\n"
"    margin-right: -1px;\n"
"}\n"
"\n"
"QTabWidget::pane {\n"
"    border: 1px solid #444;\n"
"    top: 1px;\n"
"}\n"
"\n"
"QTabBar::tab:last\n"
"{\n"
"    margin-right: 0; /* the last selected tab has nothing to overlap with on the right */\n"
"    border-top-right-radius: 3px;\n"
"}\n"
"\n"
""
                        "QTabBar::tab:first:!selected\n"
"{\n"
" margin-left: 0px; /* the last selected tab has nothing to overlap with on the right */\n"
"\n"
"\n"
"    border-top-left-radius: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:!selected\n"
"{\n"
"    color: #b1b1b1;\n"
"    border-bottom-style: solid;\n"
"    margin-top: 3px;\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:1 #212121, stop:.4 #343434);\n"
"}\n"
"\n"
"QTabBar::tab:selected\n"
"{\n"
"    border-top-left-radius: 3px;\n"
"    border-top-right-radius: 3px;\n"
"    margin-bottom: 0px;\n"
"}\n"
"\n"
"QTabBar::tab:!selected:hover\n"
"{\n"
"    /*border-top: 2px solid #ffaa00;\n"
"    padding-bottom: 3px;*/\n"
"    border-top-left-radius: 3px;\n"
"    border-top-right-radius: 3px;\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:1 #212121, stop:0.4 #343434, stop:0.2 #343434, stop:0.1 #ffaa00);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked, QRadioButton::indicator:unchecked{\n"
"    color: #b1b1b1;\n"
"    background-color: #323232;\n"
""
                        "    border: 1px solid #b1b1b1;\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked\n"
"{\n"
"    background-color: qradialgradient(\n"
"        cx: 0.5, cy: 0.5,\n"
"        fx: 0.5, fy: 0.5,\n"
"        radius: 1.0,\n"
"        stop: 0.25 #ffaa00,\n"
"        stop: 0.3 #323232\n"
"    );\n"
"}\n"
"\n"
"QCheckBox::indicator{\n"
"    color: #b1b1b1;\n"
"    background-color: #323232;\n"
"    border: 1px solid #b1b1b1;\n"
"    width: 9px;\n"
"    height: 9px;\n"
"}\n"
"\n"
"QRadioButton::indicator\n"
"{\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QRadioButton::indicator:hover, QCheckBox::indicator:hover\n"
"{\n"
"    border: 1px solid #ffaa00;\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator:disabled, QRadioButton::indicator:disabled\n"
"{\n"
"    border: 1px solid #444;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal, QSlider::sub-page:horizontal\n"
"{\n"
"      background: none;\n"
"}\n"
"\n"
"QSlider:vertical\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0.0 #121212,"
                        " stop: 0.2 #282828, stop: 1 #484848);\n"
"      width: 7px;\n"
"      margin: 16px 0 16px 0;\n"
"      border: 1px solid #222222;\n"
"}\n"
"\n"
"QSlider::handle:vertical\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 0.5 #d7801a, stop: 1 #ffa02f);\n"
"      min-height: 20px;\n"
"      border-radius: 2px;\n"
"}\n"
"\n"
"QSlider::add-line:vertical\n"
"{\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"      height: 14px;\n"
"      subcontrol-position: bottom;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QSlider::sub-line:vertical\n"
"{\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #d7801a, stop: 1 #ffa02f);\n"
"      height: 14px;\n"
"      subcontrol-position: top;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QSlider::up-arrow:vertic"
                        "al, QSlider::down-arrow:vertical\n"
"{\n"
"      border: 1px solid black;\n"
"      width: 1px;\n"
"      height: 1px;\n"
"      background: white;\n"
"}\n"
"\n"
"\n"
"QSlider::add-page:vertical, QSlider::sub-page:vertical\n"
"{\n"
"      background: none;\n"
"}"));
        mainwindow->setIconSize(QSize(30, 30));
        mainwindow->setDocumentMode(false);
        mainwindow->setTabShape(QTabWidget::Rounded);
        M_Open = new QAction(mainwindow);
        M_Open->setObjectName(QStringLiteral("M_Open"));
        M_Open->setCheckable(false);
        M_Open->setMenuRole(QAction::NoRole);
        M_Open->setPriority(QAction::NormalPriority);
        M_saveProcessedData = new QAction(mainwindow);
        M_saveProcessedData->setObjectName(QStringLiteral("M_saveProcessedData"));
        M_saveUnprocessedData = new QAction(mainwindow);
        M_saveUnprocessedData->setObjectName(QStringLiteral("M_saveUnprocessedData"));
        M_tester = new QAction(mainwindow);
        M_tester->setObjectName(QStringLiteral("M_tester"));
        centralWidget = new QWidget(mainwindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_14 = new QVBoxLayout(centralWidget);
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setContentsMargins(11, 11, 11, 11);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        Buttonmenu = new QHBoxLayout();
        Buttonmenu->setSpacing(6);
        Buttonmenu->setObjectName(QStringLiteral("Buttonmenu"));
        B_Open = new QPushButton(centralWidget);
        B_Open->setObjectName(QStringLiteral("B_Open"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Icons/opened18.ico"), QSize(), QIcon::Normal, QIcon::Off);
        B_Open->setIcon(icon1);
        B_Open->setIconSize(QSize(30, 30));

        Buttonmenu->addWidget(B_Open);

        B_Save = new QPushButton(centralWidget);
        B_Save->setObjectName(QStringLiteral("B_Save"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Icons/Storage_diskette_512.ico"), QSize(), QIcon::Normal, QIcon::Off);
        B_Save->setIcon(icon2);
        B_Save->setIconSize(QSize(30, 30));

        Buttonmenu->addWidget(B_Save);

        B_ZoomIn = new QPushButton(centralWidget);
        B_ZoomIn->setObjectName(QStringLiteral("B_ZoomIn"));
        B_ZoomIn->setMinimumSize(QSize(48, 38));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Icons/Zoom_in_button_512.ico"), QSize(), QIcon::Normal, QIcon::Off);
        B_ZoomIn->setIcon(icon3);
        B_ZoomIn->setIconSize(QSize(30, 30));

        Buttonmenu->addWidget(B_ZoomIn);

        B_ZoomOut = new QPushButton(centralWidget);
        B_ZoomOut->setObjectName(QStringLiteral("B_ZoomOut"));
        B_ZoomOut->setMinimumSize(QSize(48, 38));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Icons/Zoom_out_512.ico"), QSize(), QIcon::Normal, QIcon::Off);
        B_ZoomOut->setIcon(icon4);
        B_ZoomOut->setIconSize(QSize(30, 30));

        Buttonmenu->addWidget(B_ZoomOut);

        B_Zoom1to1 = new QPushButton(centralWidget);
        B_Zoom1to1->setObjectName(QStringLiteral("B_Zoom1to1"));
        B_Zoom1to1->setMinimumSize(QSize(48, 38));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Icons/Zoom_1_1.ico"), QSize(), QIcon::Normal, QIcon::Off);
        B_Zoom1to1->setIcon(icon5);
        B_Zoom1to1->setIconSize(QSize(30, 30));

        Buttonmenu->addWidget(B_Zoom1to1);

        B_Update2 = new QPushButton(centralWidget);
        B_Update2->setObjectName(QStringLiteral("B_Update2"));
        B_Update2->setMinimumSize(QSize(48, 38));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/Icons/sync1.ico"), QSize(), QIcon::Normal, QIcon::Off);
        B_Update2->setIcon(icon6);
        B_Update2->setIconSize(QSize(30, 30));

        Buttonmenu->addWidget(B_Update2);

        B_AllOriginal = new QPushButton(centralWidget);
        B_AllOriginal->setObjectName(QStringLiteral("B_AllOriginal"));
        B_AllOriginal->setMinimumSize(QSize(48, 38));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/Icons/Back_arrow_to_first_track_512.ico"), QSize(), QIcon::Normal, QIcon::Off);
        B_AllOriginal->setIcon(icon7);
        B_AllOriginal->setIconSize(QSize(30, 30));

        Buttonmenu->addWidget(B_AllOriginal);

        B_Sidemenu2 = new QPushButton(centralWidget);
        B_Sidemenu2->setObjectName(QStringLiteral("B_Sidemenu2"));
        B_Sidemenu2->setEnabled(true);
        B_Sidemenu2->setMinimumSize(QSize(46, 38));
        B_Sidemenu2->setCursor(QCursor(Qt::ArrowCursor));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/Icons/lists8.ico"), QSize(), QIcon::Normal, QIcon::Off);
        B_Sidemenu2->setIcon(icon8);
        B_Sidemenu2->setIconSize(QSize(30, 30));

        Buttonmenu->addWidget(B_Sidemenu2);

        B_saveRaw = new QPushButton(centralWidget);
        B_saveRaw->setObjectName(QStringLiteral("B_saveRaw"));
        B_saveRaw->setMinimumSize(QSize(46, 38));
        B_saveRaw->setMaximumSize(QSize(46, 38));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/Icons/Raw_file_format_symbol_256.ico"), QSize(), QIcon::Normal, QIcon::Off);
        B_saveRaw->setIcon(icon9);
        B_saveRaw->setIconSize(QSize(30, 30));

        Buttonmenu->addWidget(B_saveRaw);

        B_Quit = new QPushButton(centralWidget);
        B_Quit->setObjectName(QStringLiteral("B_Quit"));
        B_Quit->setEnabled(true);
        B_Quit->setMinimumSize(QSize(46, 38));
        B_Quit->setCursor(QCursor(Qt::ArrowCursor));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/Icons/Close_button_512.ico"), QSize(), QIcon::Normal, QIcon::Off);
        B_Quit->setIcon(icon10);
        B_Quit->setIconSize(QSize(30, 30));

        Buttonmenu->addWidget(B_Quit);

        horizontalSpacer_3 = new QSpacerItem(10000, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Buttonmenu->addItem(horizontalSpacer_3);


        verticalLayout_14->addLayout(Buttonmenu);

        mainarea = new QHBoxLayout();
        mainarea->setSpacing(1);
        mainarea->setObjectName(QStringLiteral("mainarea"));
        Displayzone = new QFrame(centralWidget);
        Displayzone->setObjectName(QStringLiteral("Displayzone"));
        Displayarea = new QVBoxLayout(Displayzone);
        Displayarea->setSpacing(2);
        Displayarea->setContentsMargins(11, 11, 11, 11);
        Displayarea->setObjectName(QStringLiteral("Displayarea"));
        Displayarea->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(2);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        L_Display = new ClickableLabel(Displayzone);
        L_Display->setObjectName(QStringLiteral("L_Display"));
        L_Display->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(L_Display->sizePolicy().hasHeightForWidth());
        L_Display->setSizePolicy(sizePolicy);
        L_Display->setMinimumSize(QSize(300, 200));
        L_Display->setSizeIncrement(QSize(0, 0));
        QPalette palette;
        QBrush brush(QColor(177, 177, 177, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(127, 123, 123, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        QBrush brush3(QColor(127, 127, 127, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush3);
        QBrush brush4(QColor(170, 170, 170, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush5(QColor(0, 0, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush5);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush5);
        QBrush brush7(QColor(64, 64, 64, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush5);
        L_Display->setPalette(palette);
        L_Display->setFocusPolicy(Qt::NoFocus);
        L_Display->setAutoFillBackground(false);
        L_Display->setStyleSheet(QStringLiteral("background-color: rgb(127, 123, 123);"));
        L_Display->setFrameShadow(QFrame::Plain);
        L_Display->setLineWidth(0);
        L_Display->setMidLineWidth(0);
        L_Display->setScaledContents(false);
        L_Display->setAlignment(Qt::AlignCenter);

        horizontalLayout_14->addWidget(L_Display);

        L_Display_2 = new ClickableLabel(Displayzone);
        L_Display_2->setObjectName(QStringLiteral("L_Display_2"));
        L_Display_2->setEnabled(true);
        sizePolicy.setHeightForWidth(L_Display_2->sizePolicy().hasHeightForWidth());
        L_Display_2->setSizePolicy(sizePolicy);
        L_Display_2->setMinimumSize(QSize(0, 0));
        L_Display_2->setSizeIncrement(QSize(0, 0));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush5);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        QBrush brush8(QColor(50, 50, 50, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush5);
        L_Display_2->setPalette(palette1);
        L_Display_2->setFocusPolicy(Qt::NoFocus);
        L_Display_2->setToolTipDuration(-5);
        L_Display_2->setStyleSheet(QLatin1String("/*;*/\n"
"\n"
"\n"
"QWidget\n"
"{\n"
"background-color: rgb(127, 123, 123);\n"
"}\n"
"\n"
"QToolTip\n"
"{\n"
"     border: 1px solid black;\n"
"     background-color: #ffa02f;\n"
"     padding: 1px;\n"
"     border-radius: 3px;\n"
"     opacity: 1000;\n"
"}\n"
"\n"
"QWidget\n"
"{\n"
"    color: #b1b1b1;\n"
"   /* background-color: #323232;*/\n"
"}\n"
"\n"
"\n"
"QWidget:item:hover\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #ca0619);\n"
"    color: #000000;\n"
"}\n"
"\n"
"\n"
"QWidget:item:selected\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QMenuBar::item\n"
"{\n"
"    background: transparent;\n"
"}\n"
"\n"
"QMenuBar::item:selected\n"
"{\n"
"    background: transparent;\n"
"    border: 1px solid #ffaa00;\n"
"}\n"
"\n"
"QMenuBar::item:pressed\n"
"{\n"
"    background: #444;\n"
"    border: 1px solid #000;\n"
"    background-color: QLinearGradient(\n"
"        x1:0, y1:0,\n"
""
                        "        x2:0, y2:1,\n"
"        stop:1 #212121,\n"
"        stop:0.4 #343434/*,\n"
"        stop:0.2 #343434,\n"
"        stop:0.1 #ffaa00*/\n"
"    );\n"
"    margin-bottom:-1px;\n"
"    padding-bottom:1px;\n"
"}\n"
"\n"
"QMenu\n"
"{\n"
"    border: 1px solid #000;\n"
"}\n"
"\n"
"\n"
"QMenu::item\n"
"{\n"
"    padding: 2px 20px 2px 20px;\n"
"}\n"
"\n"
"QMenu::item:selected\n"
"{\n"
"    color: #000000;\n"
"}\n"
"\n"
"QWidget:disabled\n"
"{\n"
"    color: #404040;\n"
"    background-color: #323232;\n"
"}\n"
"\n"
"QAbstractItemView\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #4d4d4d, stop: 0.1 #646464, stop: 1 #5d5d5d);\n"
"}\n"
"\n"
"QWidget:focus\n"
"{\n"
"    /*border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);*/\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #4d4d4d, stop: 0 #646464, stop: 1 #5d5d5d);\n"
"    padding: 1px;\n"
"    border-style: solid;\n"
"   "
                        " border: 1px solid #1e1e1e;\n"
"    border-radius: 5;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"    color: #b1b1b1;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656, stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);\n"
"    border-width: 1px;\n"
"    border-color: #1e1e1e;\n"
"    border-style: solid;\n"
"    border-radius: 6;\n"
"    padding: 3px;\n"
"    font-size: 12px;\n"
"    padding-left: 5px;\n"
"    padding-right: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}\n"
"\n"
"QComboBox\n"
"{\n"
"    selection-background-color: #ffaa00;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656, stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);\n"
"    border-style: solid;\n"
"    border: 1px solid #1e1e1e;\n"
"    border-radius: 5;\n"
""
                        "}\n"
"\n"
"QComboBox:hover,QPushButton:hover\n"
"{\n"
"    border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"\n"
"QComboBox:on\n"
"{\n"
"    padding-top: 3px;\n"
"    padding-left: 4px;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"    selection-background-color: #ffaa00;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView\n"
"{\n"
"    border: 2px solid darkgray;\n"
"    selection-background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QComboBox::drop-down\n"
"{\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: top right;\n"
"     width: 15px;\n"
"\n"
"     border-left-width: 0px;\n"
"     border-left-color: darkgray;\n"
"     border-left-style: solid; /* just a single line */\n"
"     border-top-right-radius: 3px; /* same radius as the QComboBox */\n"
"     border"
                        "-bottom-right-radius: 3px;\n"
" }\n"
"\n"
"QGroupBox:focus\n"
"{\n"
"border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QTextEdit:focus\n"
"{\n"
"    border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QScrollBar:horizontal {\n"
"     border: 1px solid #222222;\n"
"     background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0.0 #121212, stop: 0.2 #282828, stop: 1 #484848);\n"
"     height: 7px;\n"
"     margin: 0px 16px 0 16px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #ffa02f, stop: 0.5 #d7801a, stop: 1 #ffa02f);\n"
"      min-height: 20px;\n"
"      border-radius: 2px;\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal {\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"      widt"
                        "h: 14px;\n"
"      subcontrol-position: right;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:horizontal {\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"      width: 14px;\n"
"     subcontrol-position: left;\n"
"     subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::right-arrow:horizontal, QScrollBar::left-arrow:horizontal\n"
"{\n"
"      border: 1px solid black;\n"
"      width: 1px;\n"
"      height: 1px;\n"
"      background: white;\n"
"}\n"
"\n"
"QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal\n"
"{\n"
"      background: none;\n"
"}\n"
"\n"
"QScrollBar:vertical\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0.0 #121212, stop: 0.2 #282828, stop: 1 #484848);\n"
"      width: 7px;\n"
"      margin: 16px 0 16px 0;\n"
"      border: 1px solid #222222;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical\n"
"{\n"
"     "
                        " background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 0.5 #d7801a, stop: 1 #ffa02f);\n"
"      min-height: 20px;\n"
"      border-radius: 2px;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical\n"
"{\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"      height: 14px;\n"
"      subcontrol-position: bottom;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical\n"
"{\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #d7801a, stop: 1 #ffa02f);\n"
"      height: 14px;\n"
"      subcontrol-position: top;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::up-arrow:vertical, QScrollBar::down-arrow:vertical\n"
"{\n"
"      border: 1px solid black;\n"
"      width: 1px;\n"
"      height: 1px;\n"
"      background: white;\n"
"}\n"
"\n"
"\n"
"QScro"
                        "llBar::add-page:vertical, QScrollBar::sub-page:vertical\n"
"{\n"
"      background: none;\n"
"}\n"
"\n"
"QTextEdit\n"
"{\n"
"    background-color: #242424;\n"
"}\n"
"\n"
"QPlainTextEdit\n"
"{\n"
"    background-color: #242424;\n"
"}\n"
"\n"
"QHeaderView::section\n"
"{\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #616161, stop: 0.5 #505050, stop: 0.6 #434343, stop:1 #656565);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #6c6c6c;\n"
"}\n"
"\n"
"QCheckBox:disabled\n"
"{\n"
"color: #414141;\n"
"}\n"
"\n"
"QCheckBox:enabled\n"
"{\n"
"color: rgb(233, 142, 35);\n"
"}\n"
"\n"
"\n"
"\n"
"QDockWidget::title\n"
"{\n"
"    text-align: center;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"}\n"
"\n"
"QDockWidget::close-button, QDockWidget::float-button\n"
"{\n"
"    text-align: center;\n"
"    spacing: 1px; /* spacing between i"
                        "tems in the tool bar */\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"}\n"
"\n"
"QDockWidget::close-button:hover, QDockWidget::float-button:hover\n"
"{\n"
"    background: #242424;\n"
"}\n"
"\n"
"QDockWidget::close-button:pressed, QDockWidget::float-button:pressed\n"
"{\n"
"    padding: 1px -1px -1px 1px;\n"
"}\n"
"\n"
"QMainWindow::separator\n"
"{\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #161616, stop: 0.5 #151515, stop: 0.6 #212121, stop:1 #343434);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #4c4c4c;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"}\n"
"\n"
"QMainWindow::separator:hover\n"
"{\n"
"\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #d7801a, stop:0.5 #b56c17 stop:1 #ffa02f);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #6c6c6c;\n"
"    spacing: 3px; /* spacing between items in the to"
                        "ol bar */\n"
"}\n"
"\n"
"QMenu::separator\n"
"{\n"
"    height: 2px;\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #161616, stop: 0.5 #151515, stop: 0.6 #212121, stop:1 #343434);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    margin-left: 10px;\n"
"    margin-right: 5px;\n"
"}\n"
"\n"
"QProgressBar\n"
"{\n"
"    border: 2px solid grey;\n"
"    border-radius: 5px;\n"
"    text-align: center;\n"
"}\n"
"\n"
"QProgressBar::chunk\n"
"{\n"
"    background-color: #d7801a;\n"
"    width: 2.15px;\n"
"    margin: 0.5px;\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"    color: #b1b1b1;\n"
"    border: 1px solid #444;\n"
"    border-bottom-style: none;\n"
"    background-color: #323232;\n"
"    padding-left: 10px;\n"
"    padding-right: 10px;\n"
"    padding-top: 3px;\n"
"    padding-bottom: 2px;\n"
"    margin-right: -1px;\n"
"}\n"
"\n"
"QTabWidget::pane {\n"
"    border: 1px solid #444;\n"
"    top: 1px;\n"
"}\n"
"\n"
"QTabBar::tab:last\n"
"{\n"
"    margin-right: 0; /* the last selected tab has"
                        " nothing to overlap with on the right */\n"
"    border-top-right-radius: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:first:!selected\n"
"{\n"
" margin-left: 0px; /* the last selected tab has nothing to overlap with on the right */\n"
"\n"
"\n"
"    border-top-left-radius: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:!selected\n"
"{\n"
"    color: #b1b1b1;\n"
"    border-bottom-style: solid;\n"
"    margin-top: 3px;\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:1 #212121, stop:.4 #343434);\n"
"}\n"
"\n"
"QTabBar::tab:selected\n"
"{\n"
"    border-top-left-radius: 3px;\n"
"    border-top-right-radius: 3px;\n"
"    margin-bottom: 0px;\n"
"}\n"
"\n"
"QTabBar::tab:!selected:hover\n"
"{\n"
"    /*border-top: 2px solid #ffaa00;\n"
"    padding-bottom: 3px;*/\n"
"    border-top-left-radius: 3px;\n"
"    border-top-right-radius: 3px;\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:1 #212121, stop:0.4 #343434, stop:0.2 #343434, stop:0.1 #ffaa00);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked, "
                        "QRadioButton::indicator:unchecked{\n"
"    color: #b1b1b1;\n"
"    background-color: #323232;\n"
"    border: 1px solid #b1b1b1;\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked\n"
"{\n"
"    background-color: qradialgradient(\n"
"        cx: 0.5, cy: 0.5,\n"
"        fx: 0.5, fy: 0.5,\n"
"        radius: 1.0,\n"
"        stop: 0.25 #ffaa00,\n"
"        stop: 0.3 #323232\n"
"    );\n"
"}\n"
"\n"
"QCheckBox::indicator{\n"
"    color: #b1b1b1;\n"
"    background-color: #323232;\n"
"    border: 1px solid #b1b1b1;\n"
"    width: 9px;\n"
"    height: 9px;\n"
"}\n"
"\n"
"QRadioButton::indicator\n"
"{\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QRadioButton::indicator:hover, QCheckBox::indicator:hover\n"
"{\n"
"    border: 1px solid #ffaa00;\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator:disabled, QRadioButton::indicator:disabled\n"
"{\n"
"    border: 1px solid #444;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal, QSlider::sub-page:horizontal\n"
"{\n"
"      background: none;\n"
"}\n"
"\n"
"QSlider:ve"
                        "rtical\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0.0 #121212, stop: 0.2 #282828, stop: 1 #484848);\n"
"      width: 7px;\n"
"      margin: 16px 0 16px 0;\n"
"      border: 1px solid #222222;\n"
"}\n"
"\n"
"QSlider::handle:vertical\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 0.5 #d7801a, stop: 1 #ffa02f);\n"
"      min-height: 20px;\n"
"      border-radius: 2px;\n"
"}\n"
"\n"
"QSlider::add-line:vertical\n"
"{\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"      height: 14px;\n"
"      subcontrol-position: bottom;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QSlider::sub-line:vertical\n"
"{\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #d7801a, stop: 1 #ffa02f);\n"
"      height: 14px;\n"
"      subc"
                        "ontrol-position: top;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QSlider::up-arrow:vertical, QSlider::down-arrow:vertical\n"
"{\n"
"      border: 1px solid black;\n"
"      width: 1px;\n"
"      height: 1px;\n"
"      background: white;\n"
"}\n"
"\n"
"\n"
"QSlider::add-page:vertical, QSlider::sub-page:vertical\n"
"{\n"
"      background: none;\n"
"}"));
        L_Display_2->setFrameShadow(QFrame::Plain);
        L_Display_2->setLineWidth(0);
        L_Display_2->setMidLineWidth(0);
        L_Display_2->setScaledContents(false);
        L_Display_2->setAlignment(Qt::AlignCenter);
        L_Display_2->setWordWrap(false);

        horizontalLayout_14->addWidget(L_Display_2);


        Displayarea->addLayout(horizontalLayout_14);

        L_Display_exc = new ClickableLabel(Displayzone);
        L_Display_exc->setObjectName(QStringLiteral("L_Display_exc"));
        L_Display_exc->setEnabled(true);
        sizePolicy.setHeightForWidth(L_Display_exc->sizePolicy().hasHeightForWidth());
        L_Display_exc->setSizePolicy(sizePolicy);
        L_Display_exc->setMinimumSize(QSize(0, 0));
        L_Display_exc->setSizeIncrement(QSize(0, 0));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush5);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush5);
        L_Display_exc->setPalette(palette2);
        L_Display_exc->setFocusPolicy(Qt::NoFocus);
        L_Display_exc->setToolTipDuration(-5);
        L_Display_exc->setStyleSheet(QLatin1String("/*;*/\n"
"\n"
"\n"
"QWidget\n"
"{\n"
"background-color: rgb(127, 123, 123);\n"
"}\n"
"\n"
"QToolTip\n"
"{\n"
"     border: 1px solid black;\n"
"     background-color: #ffa02f;\n"
"     padding: 1px;\n"
"     border-radius: 3px;\n"
"     opacity: 1000;\n"
"}\n"
"\n"
"QWidget\n"
"{\n"
"    color: #b1b1b1;\n"
"   /* background-color: #323232;*/\n"
"}\n"
"\n"
"\n"
"QWidget:item:hover\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #ca0619);\n"
"    color: #000000;\n"
"}\n"
"\n"
"\n"
"QWidget:item:selected\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QMenuBar::item\n"
"{\n"
"    background: transparent;\n"
"}\n"
"\n"
"QMenuBar::item:selected\n"
"{\n"
"    background: transparent;\n"
"    border: 1px solid #ffaa00;\n"
"}\n"
"\n"
"QMenuBar::item:pressed\n"
"{\n"
"    background: #444;\n"
"    border: 1px solid #000;\n"
"    background-color: QLinearGradient(\n"
"        x1:0, y1:0,\n"
""
                        "        x2:0, y2:1,\n"
"        stop:1 #212121,\n"
"        stop:0.4 #343434/*,\n"
"        stop:0.2 #343434,\n"
"        stop:0.1 #ffaa00*/\n"
"    );\n"
"    margin-bottom:-1px;\n"
"    padding-bottom:1px;\n"
"}\n"
"\n"
"QMenu\n"
"{\n"
"    border: 1px solid #000;\n"
"}\n"
"\n"
"\n"
"QMenu::item\n"
"{\n"
"    padding: 2px 20px 2px 20px;\n"
"}\n"
"\n"
"QMenu::item:selected\n"
"{\n"
"    color: #000000;\n"
"}\n"
"\n"
"QWidget:disabled\n"
"{\n"
"    color: #404040;\n"
"    background-color: #323232;\n"
"}\n"
"\n"
"QAbstractItemView\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #4d4d4d, stop: 0.1 #646464, stop: 1 #5d5d5d);\n"
"}\n"
"\n"
"QWidget:focus\n"
"{\n"
"    /*border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);*/\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #4d4d4d, stop: 0 #646464, stop: 1 #5d5d5d);\n"
"    padding: 1px;\n"
"    border-style: solid;\n"
"   "
                        " border: 1px solid #1e1e1e;\n"
"    border-radius: 5;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"    color: #b1b1b1;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656, stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);\n"
"    border-width: 1px;\n"
"    border-color: #1e1e1e;\n"
"    border-style: solid;\n"
"    border-radius: 6;\n"
"    padding: 3px;\n"
"    font-size: 12px;\n"
"    padding-left: 5px;\n"
"    padding-right: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}\n"
"\n"
"QComboBox\n"
"{\n"
"    selection-background-color: #ffaa00;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656, stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);\n"
"    border-style: solid;\n"
"    border: 1px solid #1e1e1e;\n"
"    border-radius: 5;\n"
""
                        "}\n"
"\n"
"QComboBox:hover,QPushButton:hover\n"
"{\n"
"    border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"\n"
"QComboBox:on\n"
"{\n"
"    padding-top: 3px;\n"
"    padding-left: 4px;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"    selection-background-color: #ffaa00;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView\n"
"{\n"
"    border: 2px solid darkgray;\n"
"    selection-background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QComboBox::drop-down\n"
"{\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: top right;\n"
"     width: 15px;\n"
"\n"
"     border-left-width: 0px;\n"
"     border-left-color: darkgray;\n"
"     border-left-style: solid; /* just a single line */\n"
"     border-top-right-radius: 3px; /* same radius as the QComboBox */\n"
"     border"
                        "-bottom-right-radius: 3px;\n"
" }\n"
"\n"
"QGroupBox:focus\n"
"{\n"
"border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QTextEdit:focus\n"
"{\n"
"    border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QScrollBar:horizontal {\n"
"     border: 1px solid #222222;\n"
"     background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0.0 #121212, stop: 0.2 #282828, stop: 1 #484848);\n"
"     height: 7px;\n"
"     margin: 0px 16px 0 16px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #ffa02f, stop: 0.5 #d7801a, stop: 1 #ffa02f);\n"
"      min-height: 20px;\n"
"      border-radius: 2px;\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal {\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"      widt"
                        "h: 14px;\n"
"      subcontrol-position: right;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:horizontal {\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"      width: 14px;\n"
"     subcontrol-position: left;\n"
"     subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::right-arrow:horizontal, QScrollBar::left-arrow:horizontal\n"
"{\n"
"      border: 1px solid black;\n"
"      width: 1px;\n"
"      height: 1px;\n"
"      background: white;\n"
"}\n"
"\n"
"QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal\n"
"{\n"
"      background: none;\n"
"}\n"
"\n"
"QScrollBar:vertical\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0.0 #121212, stop: 0.2 #282828, stop: 1 #484848);\n"
"      width: 7px;\n"
"      margin: 16px 0 16px 0;\n"
"      border: 1px solid #222222;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical\n"
"{\n"
"     "
                        " background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 0.5 #d7801a, stop: 1 #ffa02f);\n"
"      min-height: 20px;\n"
"      border-radius: 2px;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical\n"
"{\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"      height: 14px;\n"
"      subcontrol-position: bottom;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical\n"
"{\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #d7801a, stop: 1 #ffa02f);\n"
"      height: 14px;\n"
"      subcontrol-position: top;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::up-arrow:vertical, QScrollBar::down-arrow:vertical\n"
"{\n"
"      border: 1px solid black;\n"
"      width: 1px;\n"
"      height: 1px;\n"
"      background: white;\n"
"}\n"
"\n"
"\n"
"QScro"
                        "llBar::add-page:vertical, QScrollBar::sub-page:vertical\n"
"{\n"
"      background: none;\n"
"}\n"
"\n"
"QTextEdit\n"
"{\n"
"    background-color: #242424;\n"
"}\n"
"\n"
"QPlainTextEdit\n"
"{\n"
"    background-color: #242424;\n"
"}\n"
"\n"
"QHeaderView::section\n"
"{\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #616161, stop: 0.5 #505050, stop: 0.6 #434343, stop:1 #656565);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #6c6c6c;\n"
"}\n"
"\n"
"QCheckBox:disabled\n"
"{\n"
"color: #414141;\n"
"}\n"
"\n"
"QCheckBox:enabled\n"
"{\n"
"color: rgb(233, 142, 35);\n"
"}\n"
"\n"
"\n"
"\n"
"QDockWidget::title\n"
"{\n"
"    text-align: center;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"}\n"
"\n"
"QDockWidget::close-button, QDockWidget::float-button\n"
"{\n"
"    text-align: center;\n"
"    spacing: 1px; /* spacing between i"
                        "tems in the tool bar */\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"}\n"
"\n"
"QDockWidget::close-button:hover, QDockWidget::float-button:hover\n"
"{\n"
"    background: #242424;\n"
"}\n"
"\n"
"QDockWidget::close-button:pressed, QDockWidget::float-button:pressed\n"
"{\n"
"    padding: 1px -1px -1px 1px;\n"
"}\n"
"\n"
"QMainWindow::separator\n"
"{\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #161616, stop: 0.5 #151515, stop: 0.6 #212121, stop:1 #343434);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #4c4c4c;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"}\n"
"\n"
"QMainWindow::separator:hover\n"
"{\n"
"\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #d7801a, stop:0.5 #b56c17 stop:1 #ffa02f);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #6c6c6c;\n"
"    spacing: 3px; /* spacing between items in the to"
                        "ol bar */\n"
"}\n"
"\n"
"QMenu::separator\n"
"{\n"
"    height: 2px;\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #161616, stop: 0.5 #151515, stop: 0.6 #212121, stop:1 #343434);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    margin-left: 10px;\n"
"    margin-right: 5px;\n"
"}\n"
"\n"
"QProgressBar\n"
"{\n"
"    border: 2px solid grey;\n"
"    border-radius: 5px;\n"
"    text-align: center;\n"
"}\n"
"\n"
"QProgressBar::chunk\n"
"{\n"
"    background-color: #d7801a;\n"
"    width: 2.15px;\n"
"    margin: 0.5px;\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"    color: #b1b1b1;\n"
"    border: 1px solid #444;\n"
"    border-bottom-style: none;\n"
"    background-color: #323232;\n"
"    padding-left: 10px;\n"
"    padding-right: 10px;\n"
"    padding-top: 3px;\n"
"    padding-bottom: 2px;\n"
"    margin-right: -1px;\n"
"}\n"
"\n"
"QTabWidget::pane {\n"
"    border: 1px solid #444;\n"
"    top: 1px;\n"
"}\n"
"\n"
"QTabBar::tab:last\n"
"{\n"
"    margin-right: 0; /* the last selected tab has"
                        " nothing to overlap with on the right */\n"
"    border-top-right-radius: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:first:!selected\n"
"{\n"
" margin-left: 0px; /* the last selected tab has nothing to overlap with on the right */\n"
"\n"
"\n"
"    border-top-left-radius: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:!selected\n"
"{\n"
"    color: #b1b1b1;\n"
"    border-bottom-style: solid;\n"
"    margin-top: 3px;\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:1 #212121, stop:.4 #343434);\n"
"}\n"
"\n"
"QTabBar::tab:selected\n"
"{\n"
"    border-top-left-radius: 3px;\n"
"    border-top-right-radius: 3px;\n"
"    margin-bottom: 0px;\n"
"}\n"
"\n"
"QTabBar::tab:!selected:hover\n"
"{\n"
"    /*border-top: 2px solid #ffaa00;\n"
"    padding-bottom: 3px;*/\n"
"    border-top-left-radius: 3px;\n"
"    border-top-right-radius: 3px;\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:1 #212121, stop:0.4 #343434, stop:0.2 #343434, stop:0.1 #ffaa00);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked, "
                        "QRadioButton::indicator:unchecked{\n"
"    color: #b1b1b1;\n"
"    background-color: #323232;\n"
"    border: 1px solid #b1b1b1;\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked\n"
"{\n"
"    background-color: qradialgradient(\n"
"        cx: 0.5, cy: 0.5,\n"
"        fx: 0.5, fy: 0.5,\n"
"        radius: 1.0,\n"
"        stop: 0.25 #ffaa00,\n"
"        stop: 0.3 #323232\n"
"    );\n"
"}\n"
"\n"
"QCheckBox::indicator{\n"
"    color: #b1b1b1;\n"
"    background-color: #323232;\n"
"    border: 1px solid #b1b1b1;\n"
"    width: 9px;\n"
"    height: 9px;\n"
"}\n"
"\n"
"QRadioButton::indicator\n"
"{\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QRadioButton::indicator:hover, QCheckBox::indicator:hover\n"
"{\n"
"    border: 1px solid #ffaa00;\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator:disabled, QRadioButton::indicator:disabled\n"
"{\n"
"    border: 1px solid #444;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal, QSlider::sub-page:horizontal\n"
"{\n"
"      background: none;\n"
"}\n"
"\n"
"QSlider:ve"
                        "rtical\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0.0 #121212, stop: 0.2 #282828, stop: 1 #484848);\n"
"      width: 7px;\n"
"      margin: 16px 0 16px 0;\n"
"      border: 1px solid #222222;\n"
"}\n"
"\n"
"QSlider::handle:vertical\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 0.5 #d7801a, stop: 1 #ffa02f);\n"
"      min-height: 20px;\n"
"      border-radius: 2px;\n"
"}\n"
"\n"
"QSlider::add-line:vertical\n"
"{\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"      height: 14px;\n"
"      subcontrol-position: bottom;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QSlider::sub-line:vertical\n"
"{\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #d7801a, stop: 1 #ffa02f);\n"
"      height: 14px;\n"
"      subc"
                        "ontrol-position: top;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QSlider::up-arrow:vertical, QSlider::down-arrow:vertical\n"
"{\n"
"      border: 1px solid black;\n"
"      width: 1px;\n"
"      height: 1px;\n"
"      background: white;\n"
"}\n"
"\n"
"\n"
"QSlider::add-page:vertical, QSlider::sub-page:vertical\n"
"{\n"
"      background: none;\n"
"}"));
        L_Display_exc->setFrameShadow(QFrame::Plain);
        L_Display_exc->setLineWidth(0);
        L_Display_exc->setMidLineWidth(0);
        L_Display_exc->setScaledContents(false);
        L_Display_exc->setAlignment(Qt::AlignCenter);
        L_Display_exc->setWordWrap(false);

        Displayarea->addWidget(L_Display_exc);


        mainarea->addWidget(Displayzone);

        Frame_Pic2 = new QFrame(centralWidget);
        Frame_Pic2->setObjectName(QStringLiteral("Frame_Pic2"));
        sizePolicy.setHeightForWidth(Frame_Pic2->sizePolicy().hasHeightForWidth());
        Frame_Pic2->setSizePolicy(sizePolicy);
        Frame_Pic2->setMinimumSize(QSize(50, 0));
        Frame_Pic2->setMaximumSize(QSize(50, 16777215));
        Frame_Pic2->setLayoutDirection(Qt::LeftToRight);
        Frame_Pic2->setFrameShape(QFrame::NoFrame);
        verticalLayout_3 = new QVBoxLayout(Frame_Pic2);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout_3->setContentsMargins(0, 9, 0, -1);
        B_ClosePic2 = new QPushButton(Frame_Pic2);
        B_ClosePic2->setObjectName(QStringLiteral("B_ClosePic2"));
        B_ClosePic2->setEnabled(true);
        B_ClosePic2->setMinimumSize(QSize(46, 38));
        B_ClosePic2->setMaximumSize(QSize(46, 38));
        B_ClosePic2->setCursor(QCursor(Qt::ArrowCursor));
        B_ClosePic2->setIcon(icon10);
        B_ClosePic2->setIconSize(QSize(30, 30));

        verticalLayout_3->addWidget(B_ClosePic2);

        verticalSpacer_3 = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_3);

        B_Orderchange = new QPushButton(Frame_Pic2);
        B_Orderchange->setObjectName(QStringLiteral("B_Orderchange"));
        B_Orderchange->setEnabled(true);
        B_Orderchange->setMinimumSize(QSize(46, 38));
        B_Orderchange->setMaximumSize(QSize(46, 38));
        B_Orderchange->setCursor(QCursor(Qt::ArrowCursor));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/Icons/together.ico"), QSize(), QIcon::Normal, QIcon::Off);
        B_Orderchange->setIcon(icon11);
        B_Orderchange->setIconSize(QSize(30, 30));

        verticalLayout_3->addWidget(B_Orderchange);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        B_Orderchange->raise();
        B_ClosePic2->raise();

        mainarea->addWidget(Frame_Pic2);

        B_Sidemenu = new QPushButton(centralWidget);
        B_Sidemenu->setObjectName(QStringLiteral("B_Sidemenu"));
        B_Sidemenu->setMinimumSize(QSize(0, 300));
        B_Sidemenu->setMaximumSize(QSize(15, 999999));
        B_Sidemenu->setAutoFillBackground(false);
        B_Sidemenu->setStyleSheet(QLatin1String("QToolTip\n"
"{\n"
"     border: 1px solid black;\n"
"     background-color: #ffa02f;\n"
"     padding: 1px;\n"
"     border-radius: 3px;\n"
"     opacity: 1000;\n"
"}\n"
"\n"
"QWidget\n"
"{\n"
"    color: #b1b1b1;\n"
"    background-color: #323232;\n"
"}\n"
"\n"
"\n"
"QWidget:item:hover\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #ca0619);\n"
"    color: #000000;\n"
"}\n"
"\n"
"\n"
"QWidget:item:selected\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QMenuBar::item\n"
"{\n"
"    background: transparent;\n"
"}\n"
"\n"
"QMenuBar::item:selected\n"
"{\n"
"    background: transparent;\n"
"    border: 1px solid #ffaa00;\n"
"}\n"
"\n"
"QMenuBar::item:pressed\n"
"{\n"
"    background: #444;\n"
"    border: 1px solid #000;\n"
"    background-color: QLinearGradient(\n"
"        x1:0, y1:0,\n"
"        x2:0, y2:1,\n"
"        stop:1 #212121,\n"
"        stop:0.4 #343434/*,\n"
"        "
                        "stop:0.2 #343434,\n"
"        stop:0.1 #ffaa00*/\n"
"    );\n"
"    margin-bottom:-1px;\n"
"    padding-bottom:1px;\n"
"}\n"
"\n"
"QMenu\n"
"{\n"
"    border: 1px solid #000;\n"
"}\n"
"\n"
"\n"
"QMenu::item\n"
"{\n"
"    padding: 2px 20px 2px 20px;\n"
"}\n"
"\n"
"QMenu::item:selected\n"
"{\n"
"    color: #000000;\n"
"}\n"
"\n"
"QWidget:disabled\n"
"{\n"
"    color: #404040;\n"
"    background-color: #323232;\n"
"}\n"
"\n"
"QAbstractItemView\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #4d4d4d, stop: 0.1 #646464, stop: 1 #5d5d5d);\n"
"}\n"
"\n"
"QWidget:focus\n"
"{\n"
"    /*border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);*/\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #4d4d4d, stop: 0 #646464, stop: 1 #5d5d5d);\n"
"    padding: 1px;\n"
"    border-style: solid;\n"
"    border: 1px solid #1e1e1e;\n"
"    border-radius: 5;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
" "
                        "   color: #b1b1b1;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656, stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);\n"
"    border-width: 1px;\n"
"    border-color: #1e1e1e;\n"
"    border-style: solid;\n"
"    border-radius: 5;\n"
"    padding: 3px;\n"
"    font-size: 12px;\n"
"    padding-left: 5px;\n"
"    padding-right: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}\n"
"\n"
"QComboBox\n"
"{\n"
"    selection-background-color: #ffaa00;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656, stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);\n"
"    border-style: solid;\n"
"    border: 1px solid #1e1e1e;\n"
"    border-radius: 5;\n"
"}\n"
"\n"
"QComboBox:hover,QPushButton:hover\n"
"{\n"
"    border: 2px solid QLinearGradien"
                        "t( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"\n"
"QComboBox:on\n"
"{\n"
"    padding-top: 3px;\n"
"    padding-left: 4px;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"    selection-background-color: #ffaa00;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView\n"
"{\n"
"    border: 2px solid darkgray;\n"
"    selection-background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QComboBox::drop-down\n"
"{\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: top right;\n"
"     width: 15px;\n"
"\n"
"     border-left-width: 0px;\n"
"     border-left-color: darkgray;\n"
"     border-left-style: solid; /* just a single line */\n"
"     border-top-right-radius: 3px; /* same radius as the QComboBox */\n"
"     border-bottom-right-radius: 3px;\n"
" }\n"
"\n"
"QGroupBox:focus\n"
"{\n"
"border: 2px solid QLin"
                        "earGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QTextEdit:focus\n"
"{\n"
"    border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QScrollBar:horizontal {\n"
"     border: 1px solid #222222;\n"
"     background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0.0 #121212, stop: 0.2 #282828, stop: 1 #484848);\n"
"     height: 7px;\n"
"     margin: 0px 16px 0 16px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #ffa02f, stop: 0.5 #d7801a, stop: 1 #ffa02f);\n"
"      min-height: 20px;\n"
"      border-radius: 2px;\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal {\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"      width: 14px;\n"
"      subcontrol-position: right;\n"
"      subcontrol-origin: margin;\n"
"}\n"
""
                        "\n"
"QScrollBar::sub-line:horizontal {\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"      width: 14px;\n"
"     subcontrol-position: left;\n"
"     subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::right-arrow:horizontal, QScrollBar::left-arrow:horizontal\n"
"{\n"
"      border: 1px solid black;\n"
"      width: 1px;\n"
"      height: 1px;\n"
"      background: white;\n"
"}\n"
"\n"
"QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal\n"
"{\n"
"      background: none;\n"
"}\n"
"\n"
"QScrollBar:vertical\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0.0 #121212, stop: 0.2 #282828, stop: 1 #484848);\n"
"      width: 7px;\n"
"      margin: 16px 0 16px 0;\n"
"      border: 1px solid #222222;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 0.5 #d7801a, "
                        "stop: 1 #ffa02f);\n"
"      min-height: 20px;\n"
"      border-radius: 2px;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical\n"
"{\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"      height: 14px;\n"
"      subcontrol-position: bottom;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical\n"
"{\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #d7801a, stop: 1 #ffa02f);\n"
"      height: 14px;\n"
"      subcontrol-position: top;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::up-arrow:vertical, QScrollBar::down-arrow:vertical\n"
"{\n"
"      border: 1px solid black;\n"
"      width: 1px;\n"
"      height: 1px;\n"
"      background: white;\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical\n"
"{\n"
"      background: none;\n"
""
                        "}\n"
"\n"
"QTextEdit\n"
"{\n"
"    background-color: #242424;\n"
"}\n"
"\n"
"QPlainTextEdit\n"
"{\n"
"    background-color: #242424;\n"
"}\n"
"\n"
"QHeaderView::section\n"
"{\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #616161, stop: 0.5 #505050, stop: 0.6 #434343, stop:1 #656565);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #6c6c6c;\n"
"}\n"
"\n"
"QCheckBox:disabled\n"
"{\n"
"color: #414141;\n"
"}\n"
"\n"
"QCheckBox:enabled\n"
"{\n"
"color: rgb(233, 142, 35);\n"
"}\n"
"\n"
"\n"
"\n"
"QDockWidget::title\n"
"{\n"
"    text-align: center;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"}\n"
"\n"
"QDockWidget::close-button, QDockWidget::float-button\n"
"{\n"
"    text-align: center;\n"
"    spacing: 1px; /* spacing between items in the tool bar */\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop"
                        ":0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"}\n"
"\n"
"QDockWidget::close-button:hover, QDockWidget::float-button:hover\n"
"{\n"
"    background: #242424;\n"
"}\n"
"\n"
"QDockWidget::close-button:pressed, QDockWidget::float-button:pressed\n"
"{\n"
"    padding: 1px -1px -1px 1px;\n"
"}\n"
"\n"
"QMainWindow::separator\n"
"{\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #161616, stop: 0.5 #151515, stop: 0.6 #212121, stop:1 #343434);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #4c4c4c;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"}\n"
"\n"
"QMainWindow::separator:hover\n"
"{\n"
"\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #d7801a, stop:0.5 #b56c17 stop:1 #ffa02f);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #6c6c6c;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"}\n"
"\n"
"QMenu::separator\n"
"{\n"
"    height: 2px;\n"
"    background-color:"
                        " QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #161616, stop: 0.5 #151515, stop: 0.6 #212121, stop:1 #343434);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    margin-left: 10px;\n"
"    margin-right: 5px;\n"
"}\n"
"\n"
"QProgressBar\n"
"{\n"
"    border: 2px solid grey;\n"
"    border-radius: 5px;\n"
"    text-align: center;\n"
"}\n"
"\n"
"QProgressBar::chunk\n"
"{\n"
"    background-color: #d7801a;\n"
"    width: 2.15px;\n"
"    margin: 0.5px;\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"    color: #b1b1b1;\n"
"    border: 1px solid #444;\n"
"    border-bottom-style: none;\n"
"    background-color: #323232;\n"
"    padding-left: 10px;\n"
"    padding-right: 10px;\n"
"    padding-top: 3px;\n"
"    padding-bottom: 2px;\n"
"    margin-right: -1px;\n"
"}\n"
"\n"
"QTabWidget::pane {\n"
"    border: 1px solid #444;\n"
"    top: 1px;\n"
"}\n"
"\n"
"QTabBar::tab:last\n"
"{\n"
"    margin-right: 0; /* the last selected tab has nothing to overlap with on the right */\n"
"    border-top-right-radius: 3px;\n"
"}\n"
"\n"
""
                        "QTabBar::tab:first:!selected\n"
"{\n"
" margin-left: 0px; /* the last selected tab has nothing to overlap with on the right */\n"
"\n"
"\n"
"    border-top-left-radius: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:!selected\n"
"{\n"
"    color: #b1b1b1;\n"
"    border-bottom-style: solid;\n"
"    margin-top: 3px;\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:1 #212121, stop:.4 #343434);\n"
"}\n"
"\n"
"QTabBar::tab:selected\n"
"{\n"
"    border-top-left-radius: 3px;\n"
"    border-top-right-radius: 3px;\n"
"    margin-bottom: 0px;\n"
"}\n"
"\n"
"QTabBar::tab:!selected:hover\n"
"{\n"
"    /*border-top: 2px solid #ffaa00;\n"
"    padding-bottom: 3px;*/\n"
"    border-top-left-radius: 3px;\n"
"    border-top-right-radius: 3px;\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:1 #212121, stop:0.4 #343434, stop:0.2 #343434, stop:0.1 #ffaa00);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked, QRadioButton::indicator:unchecked{\n"
"    color: #b1b1b1;\n"
"    background-color: #323232;\n"
""
                        "    border: 1px solid #b1b1b1;\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked\n"
"{\n"
"    background-color: qradialgradient(\n"
"        cx: 0.5, cy: 0.5,\n"
"        fx: 0.5, fy: 0.5,\n"
"        radius: 1.0,\n"
"        stop: 0.25 #ffaa00,\n"
"        stop: 0.3 #323232\n"
"    );\n"
"}\n"
"\n"
"QCheckBox::indicator{\n"
"    color: #b1b1b1;\n"
"    background-color: #323232;\n"
"    border: 1px solid #b1b1b1;\n"
"    width: 9px;\n"
"    height: 9px;\n"
"}\n"
"\n"
"QRadioButton::indicator\n"
"{\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QRadioButton::indicator:hover, QCheckBox::indicator:hover\n"
"{\n"
"    border: 1px solid #ffaa00;\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator:disabled, QRadioButton::indicator:disabled\n"
"{\n"
"    border: 1px solid #444;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal, QSlider::sub-page:horizontal\n"
"{\n"
"      background: none;\n"
"}\n"
"\n"
"QSlider:vertical\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0.0 #121212,"
                        " stop: 0.2 #282828, stop: 1 #484848);\n"
"      width: 7px;\n"
"      margin: 16px 0 16px 0;\n"
"      border: 1px solid #222222;\n"
"}\n"
"\n"
"QSlider::handle:vertical\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 0.5 #d7801a, stop: 1 #ffa02f);\n"
"      min-height: 20px;\n"
"      border-radius: 2px;\n"
"}\n"
"\n"
"QSlider::add-line:vertical\n"
"{\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"      height: 14px;\n"
"      subcontrol-position: bottom;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QSlider::sub-line:vertical\n"
"{\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #d7801a, stop: 1 #ffa02f);\n"
"      height: 14px;\n"
"      subcontrol-position: top;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QSlider::up-arrow:vertic"
                        "al, QSlider::down-arrow:vertical\n"
"{\n"
"      border: 1px solid black;\n"
"      width: 1px;\n"
"      height: 1px;\n"
"      background: white;\n"
"}\n"
"\n"
"\n"
"QSlider::add-page:vertical, QSlider::sub-page:vertical\n"
"{\n"
"      background: none;\n"
"}"));
        B_Sidemenu->setIconSize(QSize(10, 60));
        B_Sidemenu->setAutoRepeat(false);
        B_Sidemenu->setAutoExclusive(false);

        mainarea->addWidget(B_Sidemenu);

        Sidemenu = new QWidget(centralWidget);
        Sidemenu->setObjectName(QStringLiteral("Sidemenu"));
        Sidemenu->setMinimumSize(QSize(400, 400));
        Sidemenu->setMaximumSize(QSize(400, 16777215));
        verticalLayout_12 = new QVBoxLayout(Sidemenu);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        TabMenu = new QTabWidget(Sidemenu);
        TabMenu->setObjectName(QStringLiteral("TabMenu"));
        TabMenu->setMinimumSize(QSize(400, 250));
        TabMenu->setMaximumSize(QSize(400, 16777215));
        TabMenu->setSizeIncrement(QSize(0, 0));
        TabMenu->setBaseSize(QSize(0, 0));
        TabMenu->setUsesScrollButtons(false);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout = new QVBoxLayout(tab);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        line = new QFrame(tab);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        scrollArea = new QScrollArea(tab);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setEnabled(true);
        scrollArea->setMinimumSize(QSize(0, 0));
        scrollArea->setMaximumSize(QSize(16777215, 16777215));
        scrollArea->setSizeIncrement(QSize(1, 0));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI Semibold"));
        font.setPointSize(9);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        scrollArea->setFont(font);
        scrollArea->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        scrollArea->setContextMenuPolicy(Qt::DefaultContextMenu);
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 373, 1413));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox_3 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setMinimumSize(QSize(0, 200));
        groupBox_3->setMaximumSize(QSize(16777214, 200));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        RB_0 = new QRadioButton(groupBox_3);
        RB_0->setObjectName(QStringLiteral("RB_0"));

        horizontalLayout_2->addWidget(RB_0);

        RB_90 = new QRadioButton(groupBox_3);
        RB_90->setObjectName(QStringLiteral("RB_90"));

        horizontalLayout_2->addWidget(RB_90);

        RB_180 = new QRadioButton(groupBox_3);
        RB_180->setObjectName(QStringLiteral("RB_180"));

        horizontalLayout_2->addWidget(RB_180);

        RB_270 = new QRadioButton(groupBox_3);
        RB_270->setObjectName(QStringLiteral("RB_270"));

        horizontalLayout_2->addWidget(RB_270);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_15);

        B_RotationOrig = new QPushButton(groupBox_3);
        B_RotationOrig->setObjectName(QStringLiteral("B_RotationOrig"));
        B_RotationOrig->setMinimumSize(QSize(0, 0));
        B_RotationOrig->setMaximumSize(QSize(50, 16777215));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/Icons/curved.ico"), QSize(), QIcon::Normal, QIcon::Off);
        B_RotationOrig->setIcon(icon12);

        horizontalLayout_2->addWidget(B_RotationOrig);


        gridLayout_3->addLayout(horizontalLayout_2, 3, 0, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(120, 0));
        label_3->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_13->addWidget(label_3);

        LE_Brightness = new QLineEdit(groupBox_3);
        LE_Brightness->setObjectName(QStringLiteral("LE_Brightness"));
        LE_Brightness->setMinimumSize(QSize(100, 0));
        LE_Brightness->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_13->addWidget(LE_Brightness);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer);

        B_BrightnessOrig = new QPushButton(groupBox_3);
        B_BrightnessOrig->setObjectName(QStringLiteral("B_BrightnessOrig"));
        B_BrightnessOrig->setMaximumSize(QSize(50, 16777215));
        B_BrightnessOrig->setIcon(icon12);

        horizontalLayout_13->addWidget(B_BrightnessOrig);


        gridLayout_3->addLayout(horizontalLayout_13, 1, 0, 1, 1);

        SD_Brightness = new QSlider(groupBox_3);
        SD_Brightness->setObjectName(QStringLiteral("SD_Brightness"));
        SD_Brightness->setMinimumSize(QSize(0, 20));
        SD_Brightness->setMaximumSize(QSize(16777215, 20));
        SD_Brightness->setMinimum(1);
        SD_Brightness->setMaximum(1000);
        SD_Brightness->setValue(100);
        SD_Brightness->setSliderPosition(100);
        SD_Brightness->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(SD_Brightness, 2, 0, 1, 1);

        SD_Saturtation = new QSlider(groupBox_3);
        SD_Saturtation->setObjectName(QStringLiteral("SD_Saturtation"));
        SD_Saturtation->setMinimum(0);
        SD_Saturtation->setMaximum(65535);
        SD_Saturtation->setValue(0);
        SD_Saturtation->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(SD_Saturtation, 5, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        L_Saturtation = new QLabel(groupBox_3);
        L_Saturtation->setObjectName(QStringLiteral("L_Saturtation"));
        L_Saturtation->setMinimumSize(QSize(120, 0));
        L_Saturtation->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_11->addWidget(L_Saturtation);

        LE_Saturtation = new QLineEdit(groupBox_3);
        LE_Saturtation->setObjectName(QStringLiteral("LE_Saturtation"));
        LE_Saturtation->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_11->addWidget(LE_Saturtation);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_8);

        B_SaturtationOrig = new QPushButton(groupBox_3);
        B_SaturtationOrig->setObjectName(QStringLiteral("B_SaturtationOrig"));
        B_SaturtationOrig->setMinimumSize(QSize(0, 0));
        B_SaturtationOrig->setMaximumSize(QSize(50, 16777215));
        B_SaturtationOrig->setIcon(icon12);

        horizontalLayout_11->addWidget(B_SaturtationOrig);


        gridLayout_3->addLayout(horizontalLayout_11, 4, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox_3);

        groupBox_5 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setMinimumSize(QSize(0, 150));
        groupBox_5->setMaximumSize(QSize(16777215, 200));
        horizontalLayout_7 = new QHBoxLayout(groupBox_5);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_2 = new QLabel(groupBox_5);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(120, 0));
        label_2->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_12->addWidget(label_2);

        LE_Gamma = new QLineEdit(groupBox_5);
        LE_Gamma->setObjectName(QStringLiteral("LE_Gamma"));
        LE_Gamma->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_12->addWidget(LE_Gamma);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_2);

        B_GammaOrig = new QPushButton(groupBox_5);
        B_GammaOrig->setObjectName(QStringLiteral("B_GammaOrig"));
        B_GammaOrig->setMaximumSize(QSize(50, 16777215));
        B_GammaOrig->setIcon(icon12);

        horizontalLayout_12->addWidget(B_GammaOrig);


        verticalLayout_9->addLayout(horizontalLayout_12);

        SD_Gamma = new QSlider(groupBox_5);
        SD_Gamma->setObjectName(QStringLiteral("SD_Gamma"));
        SD_Gamma->setMinimum(1);
        SD_Gamma->setMaximum(500);
        SD_Gamma->setValue(100);
        SD_Gamma->setOrientation(Qt::Horizontal);

        verticalLayout_9->addWidget(SD_Gamma);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_5 = new QLabel(groupBox_5);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(120, 0));
        label_5->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_15->addWidget(label_5);

        LE_Gamma_slope = new QLineEdit(groupBox_5);
        LE_Gamma_slope->setObjectName(QStringLiteral("LE_Gamma_slope"));
        LE_Gamma_slope->setMinimumSize(QSize(0, 0));
        LE_Gamma_slope->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_15->addWidget(LE_Gamma_slope);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_18);

        B_orig_Gamma_slope = new QPushButton(groupBox_5);
        B_orig_Gamma_slope->setObjectName(QStringLiteral("B_orig_Gamma_slope"));
        B_orig_Gamma_slope->setMinimumSize(QSize(0, 0));
        B_orig_Gamma_slope->setMaximumSize(QSize(40, 16777215));
        B_orig_Gamma_slope->setIcon(icon12);

        horizontalLayout_15->addWidget(B_orig_Gamma_slope);


        verticalLayout_9->addLayout(horizontalLayout_15);

        SD_Gamma_slope = new QSlider(groupBox_5);
        SD_Gamma_slope->setObjectName(QStringLiteral("SD_Gamma_slope"));
        SD_Gamma_slope->setMaximum(2000);
        SD_Gamma_slope->setOrientation(Qt::Horizontal);

        verticalLayout_9->addWidget(SD_Gamma_slope);


        horizontalLayout_7->addLayout(verticalLayout_9);


        verticalLayout_2->addWidget(groupBox_5);

        groupBox_12 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_12->setObjectName(QStringLiteral("groupBox_12"));
        groupBox_12->setMinimumSize(QSize(0, 150));
        verticalLayout_17 = new QVBoxLayout(groupBox_12);
        verticalLayout_17->setSpacing(6);
        verticalLayout_17->setContentsMargins(11, 11, 11, 11);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        tabWidget = new QTabWidget(groupBox_12);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setAutoFillBackground(false);
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabBarAutoHide(false);
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_24 = new QVBoxLayout(tab_3);
        verticalLayout_24->setSpacing(6);
        verticalLayout_24->setContentsMargins(11, 11, 11, 11);
        verticalLayout_24->setObjectName(QStringLiteral("verticalLayout_24"));
        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setSpacing(6);
        horizontalLayout_25->setObjectName(QStringLiteral("horizontalLayout_25"));
        label_14 = new QLabel(tab_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setMinimumSize(QSize(130, 0));
        label_14->setMaximumSize(QSize(130, 16777215));

        horizontalLayout_25->addWidget(label_14);

        LE_Black_0 = new QLineEdit(tab_3);
        LE_Black_0->setObjectName(QStringLiteral("LE_Black_0"));
        LE_Black_0->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_25->addWidget(LE_Black_0);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_25->addItem(horizontalSpacer_10);

        B_BlackOrig_0 = new QPushButton(tab_3);
        B_BlackOrig_0->setObjectName(QStringLiteral("B_BlackOrig_0"));
        B_BlackOrig_0->setMinimumSize(QSize(0, 0));
        B_BlackOrig_0->setMaximumSize(QSize(100, 16777215));
        B_BlackOrig_0->setIcon(icon12);

        horizontalLayout_25->addWidget(B_BlackOrig_0);


        verticalLayout_24->addLayout(horizontalLayout_25);

        SD_Black_0 = new QSlider(tab_3);
        SD_Black_0->setObjectName(QStringLiteral("SD_Black_0"));
        SD_Black_0->setMinimum(0);
        SD_Black_0->setMaximum(32000);
        SD_Black_0->setValue(0);
        SD_Black_0->setSliderPosition(0);
        SD_Black_0->setOrientation(Qt::Horizontal);

        verticalLayout_24->addWidget(SD_Black_0);

        tabWidget->addTab(tab_3, QString());
        SD_Black_0->raise();
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        verticalLayout_27 = new QVBoxLayout(tab_5);
        verticalLayout_27->setSpacing(6);
        verticalLayout_27->setContentsMargins(11, 11, 11, 11);
        verticalLayout_27->setObjectName(QStringLiteral("verticalLayout_27"));
        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setSpacing(6);
        horizontalLayout_23->setObjectName(QStringLiteral("horizontalLayout_23"));
        L_Black1 = new QLabel(tab_5);
        L_Black1->setObjectName(QStringLiteral("L_Black1"));
        L_Black1->setMinimumSize(QSize(130, 0));
        L_Black1->setMaximumSize(QSize(130, 16777215));

        horizontalLayout_23->addWidget(L_Black1);

        LE_Black_1 = new QLineEdit(tab_5);
        LE_Black_1->setObjectName(QStringLiteral("LE_Black_1"));
        LE_Black_1->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_23->addWidget(LE_Black_1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_23->addItem(horizontalSpacer_11);

        B_BlackOrig_1 = new QPushButton(tab_5);
        B_BlackOrig_1->setObjectName(QStringLiteral("B_BlackOrig_1"));
        B_BlackOrig_1->setMinimumSize(QSize(0, 0));
        B_BlackOrig_1->setMaximumSize(QSize(100, 16777215));
        B_BlackOrig_1->setIcon(icon12);

        horizontalLayout_23->addWidget(B_BlackOrig_1);


        verticalLayout_27->addLayout(horizontalLayout_23);

        SD_Black_1 = new QSlider(tab_5);
        SD_Black_1->setObjectName(QStringLiteral("SD_Black_1"));
        SD_Black_1->setMinimum(0);
        SD_Black_1->setMaximum(32000);
        SD_Black_1->setValue(0);
        SD_Black_1->setSliderPosition(0);
        SD_Black_1->setOrientation(Qt::Horizontal);

        verticalLayout_27->addWidget(SD_Black_1);

        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        verticalLayout_26 = new QVBoxLayout(tab_6);
        verticalLayout_26->setSpacing(6);
        verticalLayout_26->setContentsMargins(11, 11, 11, 11);
        verticalLayout_26->setObjectName(QStringLiteral("verticalLayout_26"));
        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setSpacing(6);
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        L_Black2 = new QLabel(tab_6);
        L_Black2->setObjectName(QStringLiteral("L_Black2"));
        L_Black2->setMinimumSize(QSize(130, 0));
        L_Black2->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_24->addWidget(L_Black2);

        LE_Black_2 = new QLineEdit(tab_6);
        LE_Black_2->setObjectName(QStringLiteral("LE_Black_2"));
        LE_Black_2->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_24->addWidget(LE_Black_2);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_24->addItem(horizontalSpacer_12);

        B_BlackOrig_2 = new QPushButton(tab_6);
        B_BlackOrig_2->setObjectName(QStringLiteral("B_BlackOrig_2"));
        B_BlackOrig_2->setMinimumSize(QSize(32, 0));
        B_BlackOrig_2->setMaximumSize(QSize(32, 16777215));
        B_BlackOrig_2->setIcon(icon12);

        horizontalLayout_24->addWidget(B_BlackOrig_2);


        verticalLayout_26->addLayout(horizontalLayout_24);

        SD_Black_2 = new QSlider(tab_6);
        SD_Black_2->setObjectName(QStringLiteral("SD_Black_2"));
        SD_Black_2->setMinimum(0);
        SD_Black_2->setMaximum(32000);
        SD_Black_2->setValue(0);
        SD_Black_2->setSliderPosition(0);
        SD_Black_2->setOrientation(Qt::Horizontal);

        verticalLayout_26->addWidget(SD_Black_2);

        tabWidget->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        verticalLayout_25 = new QVBoxLayout(tab_7);
        verticalLayout_25->setSpacing(6);
        verticalLayout_25->setContentsMargins(11, 11, 11, 11);
        verticalLayout_25->setObjectName(QStringLiteral("verticalLayout_25"));
        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        L_Black3 = new QLabel(tab_7);
        L_Black3->setObjectName(QStringLiteral("L_Black3"));
        L_Black3->setMaximumSize(QSize(130, 120));

        horizontalLayout_18->addWidget(L_Black3);

        LE_Black_3 = new QLineEdit(tab_7);
        LE_Black_3->setObjectName(QStringLiteral("LE_Black_3"));
        LE_Black_3->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_18->addWidget(LE_Black_3);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_13);

        B_BlackOrig_3 = new QPushButton(tab_7);
        B_BlackOrig_3->setObjectName(QStringLiteral("B_BlackOrig_3"));
        B_BlackOrig_3->setMinimumSize(QSize(0, 0));
        B_BlackOrig_3->setIcon(icon12);

        horizontalLayout_18->addWidget(B_BlackOrig_3);


        verticalLayout_25->addLayout(horizontalLayout_18);

        SD_Black_3 = new QSlider(tab_7);
        SD_Black_3->setObjectName(QStringLiteral("SD_Black_3"));
        SD_Black_3->setMinimum(0);
        SD_Black_3->setMaximum(32000);
        SD_Black_3->setValue(0);
        SD_Black_3->setSliderPosition(0);
        SD_Black_3->setOrientation(Qt::Horizontal);

        verticalLayout_25->addWidget(SD_Black_3);

        tabWidget->addTab(tab_7, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        verticalLayout_23 = new QVBoxLayout(tab_4);
        verticalLayout_23->setSpacing(6);
        verticalLayout_23->setContentsMargins(11, 11, 11, 11);
        verticalLayout_23->setObjectName(QStringLiteral("verticalLayout_23"));
        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setSpacing(6);
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        L_Black4 = new QLabel(tab_4);
        L_Black4->setObjectName(QStringLiteral("L_Black4"));
        L_Black4->setMinimumSize(QSize(120, 0));
        L_Black4->setMaximumSize(QSize(130, 16777215));

        horizontalLayout_22->addWidget(L_Black4);

        LE_Black_4 = new QLineEdit(tab_4);
        LE_Black_4->setObjectName(QStringLiteral("LE_Black_4"));
        LE_Black_4->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_22->addWidget(LE_Black_4);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_22->addItem(horizontalSpacer_9);

        B_BlackOrig_4 = new QPushButton(tab_4);
        B_BlackOrig_4->setObjectName(QStringLiteral("B_BlackOrig_4"));
        B_BlackOrig_4->setMinimumSize(QSize(0, 0));
        B_BlackOrig_4->setMaximumSize(QSize(40, 16777215));
        B_BlackOrig_4->setIcon(icon12);

        horizontalLayout_22->addWidget(B_BlackOrig_4);


        verticalLayout_23->addLayout(horizontalLayout_22);

        SD_Black_4 = new QSlider(tab_4);
        SD_Black_4->setObjectName(QStringLiteral("SD_Black_4"));
        SD_Black_4->setMinimum(0);
        SD_Black_4->setMaximum(32000);
        SD_Black_4->setValue(0);
        SD_Black_4->setSliderPosition(0);
        SD_Black_4->setOrientation(Qt::Horizontal);

        verticalLayout_23->addWidget(SD_Black_4);

        tabWidget->addTab(tab_4, QString());
        SD_Black_4->raise();

        verticalLayout_17->addWidget(tabWidget);


        verticalLayout_2->addWidget(groupBox_12);

        groupBox_7 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setMinimumSize(QSize(0, 250));
        groupBox_7->setMaximumSize(QSize(16777215, 250));
        horizontalLayout_8 = new QHBoxLayout(groupBox_7);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        CB_WhiteBalance = new QComboBox(groupBox_7);
        CB_WhiteBalance->setObjectName(QStringLiteral("CB_WhiteBalance"));

        verticalLayout_10->addWidget(CB_WhiteBalance);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_10->addItem(verticalSpacer);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        L_TemperaturRange = new QLabel(groupBox_7);
        L_TemperaturRange->setObjectName(QStringLiteral("L_TemperaturRange"));
        L_TemperaturRange->setMinimumSize(QSize(120, 0));
        L_TemperaturRange->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_9->addWidget(L_TemperaturRange);

        LE_TemperaturRange = new QLineEdit(groupBox_7);
        LE_TemperaturRange->setObjectName(QStringLiteral("LE_TemperaturRange"));
        LE_TemperaturRange->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_9->addWidget(LE_TemperaturRange);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_6);

        B_TemperaturRangeOrig = new QPushButton(groupBox_7);
        B_TemperaturRangeOrig->setObjectName(QStringLiteral("B_TemperaturRangeOrig"));
        B_TemperaturRangeOrig->setMaximumSize(QSize(50, 16777215));
        B_TemperaturRangeOrig->setIcon(icon12);

        horizontalLayout_9->addWidget(B_TemperaturRangeOrig);


        verticalLayout_10->addLayout(horizontalLayout_9);

        SD_TemperaturRange = new QSlider(groupBox_7);
        SD_TemperaturRange->setObjectName(QStringLiteral("SD_TemperaturRange"));
        SD_TemperaturRange->setMinimum(1500);
        SD_TemperaturRange->setMaximum(15000);
        SD_TemperaturRange->setValue(5000);
        SD_TemperaturRange->setOrientation(Qt::Horizontal);

        verticalLayout_10->addWidget(SD_TemperaturRange);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label = new QLabel(groupBox_7);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(120, 0));
        label->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_10->addWidget(label);

        LE_tint = new QLineEdit(groupBox_7);
        LE_tint->setObjectName(QStringLiteral("LE_tint"));
        LE_tint->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_10->addWidget(LE_tint);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_7);

        B_tintOrig = new QPushButton(groupBox_7);
        B_tintOrig->setObjectName(QStringLiteral("B_tintOrig"));
        B_tintOrig->setMaximumSize(QSize(50, 16777215));
        B_tintOrig->setIcon(icon12);

        horizontalLayout_10->addWidget(B_tintOrig);


        verticalLayout_10->addLayout(horizontalLayout_10);

        SD_tint = new QSlider(groupBox_7);
        SD_tint->setObjectName(QStringLiteral("SD_tint"));
        SD_tint->setMinimum(10);
        SD_tint->setMaximum(300);
        SD_tint->setValue(100);
        SD_tint->setOrientation(Qt::Horizontal);

        verticalLayout_10->addWidget(SD_tint);


        horizontalLayout_8->addLayout(verticalLayout_10);


        verticalLayout_2->addWidget(groupBox_7);

        groupBox_8 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        groupBox_8->setMinimumSize(QSize(0, 250));
        verticalLayout_15 = new QVBoxLayout(groupBox_8);
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setContentsMargins(11, 11, 11, 11);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        L_threshold = new QLabel(groupBox_8);
        L_threshold->setObjectName(QStringLiteral("L_threshold"));
        L_threshold->setMinimumSize(QSize(120, 0));
        L_threshold->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_16->addWidget(L_threshold);

        LE_Threshold = new QLineEdit(groupBox_8);
        LE_Threshold->setObjectName(QStringLiteral("LE_Threshold"));
        LE_Threshold->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_16->addWidget(LE_Threshold);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_14);

        B_ThresholdOrig = new QPushButton(groupBox_8);
        B_ThresholdOrig->setObjectName(QStringLiteral("B_ThresholdOrig"));
        B_ThresholdOrig->setMinimumSize(QSize(0, 0));
        B_ThresholdOrig->setMaximumSize(QSize(50, 16777215));
        B_ThresholdOrig->setIcon(icon12);

        horizontalLayout_16->addWidget(B_ThresholdOrig);


        verticalLayout_15->addLayout(horizontalLayout_16);

        SD_Threshold = new QSlider(groupBox_8);
        SD_Threshold->setObjectName(QStringLiteral("SD_Threshold"));
        SD_Threshold->setMinimum(0);
        SD_Threshold->setMaximum(10000);
        SD_Threshold->setValue(0);
        SD_Threshold->setOrientation(Qt::Horizontal);

        verticalLayout_15->addWidget(SD_Threshold);

        label_17 = new QLabel(groupBox_8);
        label_17->setObjectName(QStringLiteral("label_17"));

        verticalLayout_15->addWidget(label_17);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setSpacing(6);
        horizontalLayout_26->setObjectName(QStringLiteral("horizontalLayout_26"));
        label_10 = new QLabel(groupBox_8);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_26->addWidget(label_10);

        label_15 = new QLabel(groupBox_8);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setAlignment(Qt::AlignCenter);

        horizontalLayout_26->addWidget(label_15);

        label_16 = new QLabel(groupBox_8);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_26->addWidget(label_16);


        verticalLayout_15->addLayout(horizontalLayout_26);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setSpacing(6);
        horizontalLayout_27->setObjectName(QStringLiteral("horizontalLayout_27"));
        horizontalSpacer_5 = new QSpacerItem(5, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_27->addItem(horizontalSpacer_5);

        SD_FDBB_noisereduction = new QSlider(groupBox_8);
        SD_FDBB_noisereduction->setObjectName(QStringLiteral("SD_FDBB_noisereduction"));
        SD_FDBB_noisereduction->setMaximum(2);
        SD_FDBB_noisereduction->setPageStep(1);
        SD_FDBB_noisereduction->setOrientation(Qt::Horizontal);

        horizontalLayout_27->addWidget(SD_FDBB_noisereduction);

        horizontalSpacer_4 = new QSpacerItem(5, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_27->addItem(horizontalSpacer_4);


        verticalLayout_15->addLayout(horizontalLayout_27);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        label_8 = new QLabel(groupBox_8);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(120, 0));
        label_8->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_19->addWidget(label_8);

        LE_Banding_Noise = new QLineEdit(groupBox_8);
        LE_Banding_Noise->setObjectName(QStringLiteral("LE_Banding_Noise"));
        LE_Banding_Noise->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_19->addWidget(LE_Banding_Noise);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_17);

        B_Reset_Banding = new QPushButton(groupBox_8);
        B_Reset_Banding->setObjectName(QStringLiteral("B_Reset_Banding"));
        B_Reset_Banding->setMinimumSize(QSize(0, 0));
        B_Reset_Banding->setMaximumSize(QSize(50, 16777215));
        B_Reset_Banding->setIcon(icon12);

        horizontalLayout_19->addWidget(B_Reset_Banding);


        verticalLayout_15->addLayout(horizontalLayout_19);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        SD_Banding_Noise = new QSlider(groupBox_8);
        SD_Banding_Noise->setObjectName(QStringLiteral("SD_Banding_Noise"));
        SD_Banding_Noise->setMinimumSize(QSize(0, 0));
        SD_Banding_Noise->setMaximum(2000);
        SD_Banding_Noise->setPageStep(10);
        SD_Banding_Noise->setOrientation(Qt::Horizontal);

        horizontalLayout_20->addWidget(SD_Banding_Noise);


        verticalLayout_15->addLayout(horizontalLayout_20);


        verticalLayout_2->addWidget(groupBox_8);

        groupBox_11 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_11->setObjectName(QStringLiteral("groupBox_11"));
        groupBox_11->setMinimumSize(QSize(0, 100));
        verticalLayout_22 = new QVBoxLayout(groupBox_11);
        verticalLayout_22->setSpacing(6);
        verticalLayout_22->setContentsMargins(11, 11, 11, 11);
        verticalLayout_22->setObjectName(QStringLiteral("verticalLayout_22"));
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        L_threshold_2 = new QLabel(groupBox_11);
        L_threshold_2->setObjectName(QStringLiteral("L_threshold_2"));
        L_threshold_2->setMinimumSize(QSize(120, 0));

        horizontalLayout_17->addWidget(L_threshold_2);

        LE_MaximumValue = new QLineEdit(groupBox_11);
        LE_MaximumValue->setObjectName(QStringLiteral("LE_MaximumValue"));
        LE_MaximumValue->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_17->addWidget(LE_MaximumValue);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_16);

        B_MaximumValueorig = new QPushButton(groupBox_11);
        B_MaximumValueorig->setObjectName(QStringLiteral("B_MaximumValueorig"));
        B_MaximumValueorig->setMinimumSize(QSize(0, 0));
        B_MaximumValueorig->setMaximumSize(QSize(50, 16777215));
        B_MaximumValueorig->setIcon(icon12);

        horizontalLayout_17->addWidget(B_MaximumValueorig);


        verticalLayout_22->addLayout(horizontalLayout_17);

        SD_Adj_Max = new QSlider(groupBox_11);
        SD_Adj_Max->setObjectName(QStringLiteral("SD_Adj_Max"));
        SD_Adj_Max->setMinimum(1);
        SD_Adj_Max->setMaximum(99999);
        SD_Adj_Max->setValue(75000);
        SD_Adj_Max->setOrientation(Qt::Horizontal);

        verticalLayout_22->addWidget(SD_Adj_Max);


        verticalLayout_2->addWidget(groupBox_11);

        groupBox_10 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        groupBox_10->setMinimumSize(QSize(0, 80));
        horizontalLayout_21 = new QHBoxLayout(groupBox_10);
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        label_7 = new QLabel(groupBox_10);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_21->addWidget(label_7);

        CB_Color_Space = new QComboBox(groupBox_10);
        CB_Color_Space->setObjectName(QStringLiteral("CB_Color_Space"));
        CB_Color_Space->setLayoutDirection(Qt::LeftToRight);
        CB_Color_Space->setMaxVisibleItems(6);

        horizontalLayout_21->addWidget(CB_Color_Space);

        label_11 = new QLabel(groupBox_10);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_21->addWidget(label_11);

        CB_Median = new QComboBox(groupBox_10);
        CB_Median->setObjectName(QStringLiteral("CB_Median"));
        CB_Median->setMaxVisibleItems(5);

        horizontalLayout_21->addWidget(CB_Median);


        verticalLayout_2->addWidget(groupBox_10);

        groupBox_2 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(0, 100));
        groupBox_2->setMaximumSize(QSize(16777215, 100));
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        D_Interpolation = new QDial(groupBox_2);
        D_Interpolation->setObjectName(QStringLiteral("D_Interpolation"));
        D_Interpolation->setMinimumSize(QSize(40, 40));
        D_Interpolation->setMaximumSize(QSize(50, 50));
        D_Interpolation->setMouseTracking(true);
        D_Interpolation->setMaximum(10);
        D_Interpolation->setPageStep(1);
        D_Interpolation->setWrapping(false);
        D_Interpolation->setNotchesVisible(true);

        gridLayout_4->addWidget(D_Interpolation, 1, 0, 1, 1);

        CB_Interpolation = new QComboBox(groupBox_2);
        CB_Interpolation->setObjectName(QStringLiteral("CB_Interpolation"));
        CB_Interpolation->setMaxVisibleItems(10);

        gridLayout_4->addWidget(CB_Interpolation, 1, 1, 1, 1);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMaximumSize(QSize(16777215, 100));
        verticalLayout_8 = new QVBoxLayout(groupBox);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_8->addWidget(label_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        RB_PreYes = new QRadioButton(groupBox);
        RB_PreYes->setObjectName(QStringLiteral("RB_PreYes"));
        RB_PreYes->setChecked(true);

        horizontalLayout->addWidget(RB_PreYes);

        RB_PreNo = new QRadioButton(groupBox);
        RB_PreNo->setObjectName(QStringLiteral("RB_PreNo"));

        horizontalLayout->addWidget(RB_PreNo);


        verticalLayout_8->addLayout(horizontalLayout);


        verticalLayout_2->addWidget(groupBox);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        B_Update = new QPushButton(tab);
        B_Update->setObjectName(QStringLiteral("B_Update"));
        B_Update->setIcon(icon6);

        verticalLayout->addWidget(B_Update);

        TabMenu->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_2 = new QGridLayout(tab_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        L_camera_model = new QLabel(tab_2);
        L_camera_model->setObjectName(QStringLiteral("L_camera_model"));

        verticalLayout_6->addWidget(L_camera_model);

        L_date_of_shooting = new QLabel(tab_2);
        L_date_of_shooting->setObjectName(QStringLiteral("L_date_of_shooting"));

        verticalLayout_6->addWidget(L_date_of_shooting);

        L_focal_length = new QLabel(tab_2);
        L_focal_length->setObjectName(QStringLiteral("L_focal_length"));

        verticalLayout_6->addWidget(L_focal_length);

        L_ISO_sensitivity = new QLabel(tab_2);
        L_ISO_sensitivity->setObjectName(QStringLiteral("L_ISO_sensitivity"));

        verticalLayout_6->addWidget(L_ISO_sensitivity);

        L_aperture = new QLabel(tab_2);
        L_aperture->setObjectName(QStringLiteral("L_aperture"));

        verticalLayout_6->addWidget(L_aperture);

        L_shutter = new QLabel(tab_2);
        L_shutter->setObjectName(QStringLiteral("L_shutter"));

        verticalLayout_6->addWidget(L_shutter);

        L_flip = new QLabel(tab_2);
        L_flip->setObjectName(QStringLiteral("L_flip"));

        verticalLayout_6->addWidget(L_flip);

        L_raw_pixel = new QLabel(tab_2);
        L_raw_pixel->setObjectName(QStringLiteral("L_raw_pixel"));

        verticalLayout_6->addWidget(L_raw_pixel);

        L_image_pixel = new QLabel(tab_2);
        L_image_pixel->setObjectName(QStringLiteral("L_image_pixel"));

        verticalLayout_6->addWidget(L_image_pixel);

        L_number_of_colors = new QLabel(tab_2);
        L_number_of_colors->setObjectName(QStringLiteral("L_number_of_colors"));

        verticalLayout_6->addWidget(L_number_of_colors);

        L_color_description = new QLabel(tab_2);
        L_color_description->setObjectName(QStringLiteral("L_color_description"));

        verticalLayout_6->addWidget(L_color_description);

        L_artist = new QLabel(tab_2);
        L_artist->setObjectName(QStringLiteral("L_artist"));

        verticalLayout_6->addWidget(L_artist);

        L_image_description = new QLabel(tab_2);
        L_image_description->setObjectName(QStringLiteral("L_image_description"));

        verticalLayout_6->addWidget(L_image_description);

        L_GPS_data = new QLabel(tab_2);
        L_GPS_data->setObjectName(QStringLiteral("L_GPS_data"));

        verticalLayout_6->addWidget(L_GPS_data);

        L_top_margin = new QLabel(tab_2);
        L_top_margin->setObjectName(QStringLiteral("L_top_margin"));

        verticalLayout_6->addWidget(L_top_margin);

        L_raw_pitch = new QLabel(tab_2);
        L_raw_pitch->setObjectName(QStringLiteral("L_raw_pitch"));

        verticalLayout_6->addWidget(L_raw_pitch);

        L_flash_used = new QLabel(tab_2);
        L_flash_used->setObjectName(QStringLiteral("L_flash_used"));

        verticalLayout_6->addWidget(L_flash_used);

        L_serial_nummer_of_image = new QLabel(tab_2);
        L_serial_nummer_of_image->setObjectName(QStringLiteral("L_serial_nummer_of_image"));

        verticalLayout_6->addWidget(L_serial_nummer_of_image);


        gridLayout_2->addLayout(verticalLayout_6, 0, 0, 1, 1);

        TabMenu->addTab(tab_2, QString());
        Progress = new QWidget();
        Progress->setObjectName(QStringLiteral("Progress"));
        verticalLayout_4 = new QVBoxLayout(Progress);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        scrollArea_2 = new QScrollArea(Progress);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setFrameShape(QFrame::NoFrame);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 380, 640));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        groupBox_4 = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_4);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        L_tester = new QLabel(groupBox_4);
        L_tester->setObjectName(QStringLiteral("L_tester"));
        L_tester->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_3->addWidget(L_tester);


        verticalLayout_5->addWidget(groupBox_4);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_4->addWidget(scrollArea_2);

        line_2 = new QFrame(Progress);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        L_processlabel = new QLabel(Progress);
        L_processlabel->setObjectName(QStringLiteral("L_processlabel"));
        L_processlabel->setMinimumSize(QSize(100, 0));
        L_processlabel->setMaximumSize(QSize(100, 30));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush8);
        QBrush brush9(QColor(255, 170, 127, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush9);
        QBrush brush10(QColor(255, 127, 63, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush10);
        QBrush brush11(QColor(127, 42, 0, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush11);
        QBrush brush12(QColor(170, 56, 0, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush12);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush5);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush9);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush9);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush9);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush10);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush11);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush12);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush7);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush5);
        QBrush brush13(QColor(255, 85, 0, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush13);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush5);
        L_processlabel->setPalette(palette3);
        QFont font1;
        font1.setPointSize(10);
        L_processlabel->setFont(font1);
        L_processlabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(L_processlabel);

        progressBar = new QProgressBar(Progress);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMaximumSize(QSize(400, 16777215));
        progressBar->setMaximum(30);
        progressBar->setValue(0);

        horizontalLayout_4->addWidget(progressBar);


        verticalLayout_4->addLayout(horizontalLayout_4);

        TabMenu->addTab(Progress, QString());

        verticalLayout_12->addWidget(TabMenu);


        mainarea->addWidget(Sidemenu);


        verticalLayout_14->addLayout(mainarea);

        bottom = new QHBoxLayout();
        bottom->setSpacing(6);
        bottom->setObjectName(QStringLiteral("bottom"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        L_Zoom = new QLabel(centralWidget);
        L_Zoom->setObjectName(QStringLiteral("L_Zoom"));
        L_Zoom->setMaximumSize(QSize(100, 40));

        horizontalLayout_6->addWidget(L_Zoom);

        SB_Zoom = new QScrollBar(centralWidget);
        SB_Zoom->setObjectName(QStringLiteral("SB_Zoom"));
        SB_Zoom->setMaximumSize(QSize(16777215, 7));
        SB_Zoom->setMinimum(14);
        SB_Zoom->setMaximum(400);
        SB_Zoom->setSingleStep(1);
        SB_Zoom->setTracking(true);
        SB_Zoom->setOrientation(Qt::Horizontal);
        SB_Zoom->setInvertedControls(false);

        horizontalLayout_6->addWidget(SB_Zoom);


        bottom->addLayout(horizontalLayout_6);

        L_FileDirection = new QLabel(centralWidget);
        L_FileDirection->setObjectName(QStringLiteral("L_FileDirection"));
        L_FileDirection->setMinimumSize(QSize(400, 0));
        L_FileDirection->setMaximumSize(QSize(500, 20));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush8);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush14(QColor(240, 240, 240, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush14);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush8);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush14);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush8);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush14);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush7);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        L_FileDirection->setPalette(palette4);

        bottom->addWidget(L_FileDirection);


        verticalLayout_14->addLayout(bottom);

        bottom2 = new QVBoxLayout();
        bottom2->setSpacing(6);
        bottom2->setObjectName(QStringLiteral("bottom2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        L_MousePosition = new QLabel(centralWidget);
        L_MousePosition->setObjectName(QStringLiteral("L_MousePosition"));
        L_MousePosition->setMaximumSize(QSize(200, 10));
        QFont font2;
        font2.setPointSize(6);
        L_MousePosition->setFont(font2);

        horizontalLayout_5->addWidget(L_MousePosition);

        L_MouseMove = new QLabel(centralWidget);
        L_MouseMove->setObjectName(QStringLiteral("L_MouseMove"));
        L_MouseMove->setMinimumSize(QSize(100, 0));
        L_MouseMove->setMaximumSize(QSize(16777215, 10));
        L_MouseMove->setFont(font2);

        horizontalLayout_5->addWidget(L_MouseMove);


        bottom2->addLayout(horizontalLayout_5);


        verticalLayout_14->addLayout(bottom2);

        mainwindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(mainwindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1200, 21));
        menuBar->setFont(font);
        menuRawShop = new QMenu(menuBar);
        menuRawShop->setObjectName(QStringLiteral("menuRawShop"));
        menuSave_as = new QMenu(menuRawShop);
        menuSave_as->setObjectName(QStringLiteral("menuSave_as"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        mainwindow->setMenuBar(menuBar);

        menuBar->addAction(menuRawShop->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuRawShop->addAction(M_Open);
        menuRawShop->addSeparator();
        menuRawShop->addAction(menuSave_as->menuAction());
        menuSave_as->addAction(M_saveProcessedData);
        menuSave_as->addAction(M_saveUnprocessedData);

        retranslateUi(mainwindow);

        TabMenu->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);
        CB_WhiteBalance->setCurrentIndex(2);
        CB_Color_Space->setCurrentIndex(1);
        CB_Interpolation->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(mainwindow);
    } // setupUi

    void retranslateUi(QMainWindow *mainwindow)
    {
        mainwindow->setWindowTitle(QApplication::translate("mainwindow", "RAWShop v1.0", 0));
        M_Open->setText(QApplication::translate("mainwindow", "Open...", 0));
        M_saveProcessedData->setText(QApplication::translate("mainwindow", "Processed Data", 0));
        M_saveUnprocessedData->setText(QApplication::translate("mainwindow", "Unprocessed Data", 0));
        M_tester->setText(QApplication::translate("mainwindow", "test", 0));
#ifndef QT_NO_TOOLTIP
        B_Open->setToolTip(QApplication::translate("mainwindow", "Open File", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        B_Open->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        B_Open->setText(QString());
#ifndef QT_NO_TOOLTIP
        B_Save->setToolTip(QApplication::translate("mainwindow", "Save", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        B_Save->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        B_Save->setText(QString());
#ifndef QT_NO_TOOLTIP
        B_ZoomIn->setToolTip(QApplication::translate("mainwindow", "Zoom in", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        B_ZoomIn->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        B_ZoomIn->setText(QString());
#ifndef QT_NO_TOOLTIP
        B_ZoomOut->setToolTip(QApplication::translate("mainwindow", "Zoom out", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        B_ZoomOut->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        B_ZoomOut->setText(QString());
#ifndef QT_NO_TOOLTIP
        B_Zoom1to1->setToolTip(QApplication::translate("mainwindow", "1 display pixel equals 1 picture pixel", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        B_Zoom1to1->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        B_Zoom1to1->setText(QString());
#ifndef QT_NO_TOOLTIP
        B_Update2->setToolTip(QApplication::translate("mainwindow", "Update Picture", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        B_Update2->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        B_Update2->setText(QString());
#ifndef QT_NO_TOOLTIP
        B_AllOriginal->setToolTip(QApplication::translate("mainwindow", "Reset Configuration", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        B_AllOriginal->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        B_AllOriginal->setText(QString());
#ifndef QT_NO_TOOLTIP
        B_Sidemenu2->setToolTip(QApplication::translate("mainwindow", "Close Sidemenu", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        B_Sidemenu2->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        B_Sidemenu2->setText(QString());
#ifndef QT_NO_TOOLTIP
        B_saveRaw->setToolTip(QApplication::translate("mainwindow", "Save Unprocessed RAW", 0));
#endif // QT_NO_TOOLTIP
        B_saveRaw->setText(QString());
#ifndef QT_NO_TOOLTIP
        B_Quit->setToolTip(QApplication::translate("mainwindow", "Quit", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        B_Quit->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        B_Quit->setText(QString());
#ifndef QT_NO_WHATSTHIS
        L_Display->setWhatsThis(QApplication::translate("mainwindow", "<html><head/><body><p><br/></p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        L_Display->setText(QString());
#ifndef QT_NO_TOOLTIP
        L_Display_2->setToolTip(QApplication::translate("mainwindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Previously</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        L_Display_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        L_Display_exc->setToolTip(QApplication::translate("mainwindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Previously</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        L_Display_exc->setText(QString());
#ifndef QT_NO_TOOLTIP
        B_ClosePic2->setToolTip(QApplication::translate("mainwindow", "Close last picture", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        B_ClosePic2->setWhatsThis(QApplication::translate("mainwindow", "Quit", 0));
#endif // QT_NO_WHATSTHIS
        B_ClosePic2->setText(QString());
#ifndef QT_NO_TOOLTIP
        B_Orderchange->setToolTip(QApplication::translate("mainwindow", "Switch order", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        B_Orderchange->setWhatsThis(QApplication::translate("mainwindow", "Quit", 0));
#endif // QT_NO_WHATSTHIS
        B_Orderchange->setText(QString());
        B_Sidemenu->setText(QString());
#ifndef QT_NO_TOOLTIP
        groupBox_3->setToolTip(QApplication::translate("mainwindow", "<html><head/><body><p>Clockwise</p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        groupBox_3->setTitle(QApplication::translate("mainwindow", "Image Processing", 0));
        label_4->setText(QApplication::translate("mainwindow", "Rotation:               ", 0));
        RB_0->setText(QApplication::translate("mainwindow", "0\302\260", 0));
        RB_90->setText(QApplication::translate("mainwindow", "90\302\260", 0));
        RB_180->setText(QApplication::translate("mainwindow", "180\302\260", 0));
        RB_270->setText(QApplication::translate("mainwindow", "270\302\260", 0));
        B_RotationOrig->setText(QString());
        label_3->setText(QApplication::translate("mainwindow", "Brightness:", 0));
        B_BrightnessOrig->setText(QString());
        L_Saturtation->setText(QApplication::translate("mainwindow", "Saturtation:", 0));
        B_SaturtationOrig->setText(QString());
        groupBox_5->setTitle(QApplication::translate("mainwindow", "Gamma-Curve", 0));
        label_2->setText(QApplication::translate("mainwindow", "Gamma Value:", 0));
        B_GammaOrig->setText(QString());
        label_5->setText(QApplication::translate("mainwindow", "Gamma Toe Slope: ", 0));
        B_orig_Gamma_slope->setText(QString());
        groupBox_12->setTitle(QApplication::translate("mainwindow", "Black Level", 0));
        label_14->setText(QApplication::translate("mainwindow", "Black Level All Channels:   ", 0));
        B_BlackOrig_0->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("mainwindow", "All Channels", 0));
        L_Black1->setText(QApplication::translate("mainwindow", "Black Level Ch1 (R orG):   ", 0));
        B_BlackOrig_1->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("mainwindow", "Ch. 1", 0));
        L_Black2->setText(QApplication::translate("mainwindow", "Black Level Ch2 (G1 or C):", 0));
        B_BlackOrig_2->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("mainwindow", "Ch. 2", 0));
        L_Black3->setText(QApplication::translate("mainwindow", "Black Level Ch3 (B or M):  ", 0));
        B_BlackOrig_3->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("mainwindow", "Ch. 3", 0));
        L_Black4->setText(QApplication::translate("mainwindow", "Black Level Ch4 (G2 or Y):", 0));
        B_BlackOrig_4->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("mainwindow", "Ch. 4", 0));
        groupBox_7->setTitle(QApplication::translate("mainwindow", "White Balance", 0));
        CB_WhiteBalance->clear();
        CB_WhiteBalance->insertItems(0, QStringList()
         << QApplication::translate("mainwindow", "Automatic", 0)
         << QApplication::translate("mainwindow", "Manually", 0)
         << QApplication::translate("mainwindow", "As Shot", 0)
        );
        L_TemperaturRange->setText(QApplication::translate("mainwindow", "Temperatur Range:", 0));
        B_TemperaturRangeOrig->setText(QString());
        label->setText(QApplication::translate("mainwindow", "Tint:", 0));
        B_tintOrig->setText(QString());
        groupBox_8->setTitle(QApplication::translate("mainwindow", "Noise Reduction", 0));
        L_threshold->setText(QApplication::translate("mainwindow", "<html><head/><body><p><span style=\" font-weight:600;\">Threshold:</span></p></body></html>", 0));
        B_ThresholdOrig->setText(QString());
        label_17->setText(QApplication::translate("mainwindow", "<html><head/><body><p><span style=\" font-weight:600;\">FBDD Noise Reduction before demosaicing</span></p></body></html>", 0));
        label_10->setText(QApplication::translate("mainwindow", "None", 0));
        label_15->setText(QApplication::translate("mainwindow", "Light", 0));
        label_16->setText(QApplication::translate("mainwindow", "Total", 0));
        label_8->setText(QApplication::translate("mainwindow", "Banding Noise:", 0));
        B_Reset_Banding->setText(QString());
        groupBox_11->setTitle(QApplication::translate("mainwindow", "Adjust Maximum Value", 0));
        L_threshold_2->setText(QApplication::translate("mainwindow", "Maximum Value:", 0));
        B_MaximumValueorig->setText(QString());
        groupBox_10->setTitle(QApplication::translate("mainwindow", "Color Space and Filters", 0));
        label_7->setText(QApplication::translate("mainwindow", "Color Space:", 0));
        CB_Color_Space->clear();
        CB_Color_Space->insertItems(0, QStringList()
         << QApplication::translate("mainwindow", "RAW", 0)
         << QApplication::translate("mainwindow", "sRGB", 0)
         << QApplication::translate("mainwindow", "Adobe", 0)
         << QApplication::translate("mainwindow", "Wide", 0)
         << QApplication::translate("mainwindow", "ProPhoto", 0)
         << QApplication::translate("mainwindow", "XYZ", 0)
        );
        CB_Color_Space->setCurrentText(QApplication::translate("mainwindow", "sRGB", 0));
        label_11->setText(QApplication::translate("mainwindow", "Median Filters Passed:", 0));
        CB_Median->clear();
        CB_Median->insertItems(0, QStringList()
         << QApplication::translate("mainwindow", "0", 0)
         << QApplication::translate("mainwindow", "1", 0)
         << QApplication::translate("mainwindow", "2", 0)
         << QApplication::translate("mainwindow", "3", 0)
         << QApplication::translate("mainwindow", "4", 0)
         << QApplication::translate("mainwindow", "5", 0)
         << QApplication::translate("mainwindow", "6", 0)
         << QApplication::translate("mainwindow", "7", 0)
         << QApplication::translate("mainwindow", "8", 0)
         << QApplication::translate("mainwindow", "9", 0)
         << QApplication::translate("mainwindow", "10", 0)
        );
        groupBox_2->setTitle(QApplication::translate("mainwindow", "Interpolation Quality", 0));
        CB_Interpolation->clear();
        CB_Interpolation->insertItems(0, QStringList()
         << QApplication::translate("mainwindow", "linear interpolation", 0)
         << QApplication::translate("mainwindow", "VNG interpolation", 0)
         << QApplication::translate("mainwindow", "PPG interpolation", 0)
         << QApplication::translate("mainwindow", "AHD interpolation", 0)
         << QApplication::translate("mainwindow", "DCB interpolation", 0)
         << QApplication::translate("mainwindow", "Modified AHD interpolation", 0)
         << QApplication::translate("mainwindow", "AFD interpolation (5-pass)", 0)
         << QApplication::translate("mainwindow", "VCD interpolation", 0)
         << QApplication::translate("mainwindow", "Mixed VCD/Modified AHD interpolation", 0)
         << QApplication::translate("mainwindow", "LMMSE interpolation", 0)
         << QApplication::translate("mainwindow", "AmaZE interpolation", 0)
        );
        groupBox->setTitle(QApplication::translate("mainwindow", "Preferences", 0));
        label_6->setText(QApplication::translate("mainwindow", "Do you want to compare the picture with the previous one?", 0));
        RB_PreYes->setText(QApplication::translate("mainwindow", "Yes", 0));
        RB_PreNo->setText(QApplication::translate("mainwindow", "No", 0));
        B_Update->setText(QApplication::translate("mainwindow", "Update", 0));
        TabMenu->setTabText(TabMenu->indexOf(tab), QApplication::translate("mainwindow", "Configuration", 0));
        L_camera_model->setText(QString());
        L_date_of_shooting->setText(QString());
        L_focal_length->setText(QString());
        L_ISO_sensitivity->setText(QString());
        L_aperture->setText(QString());
        L_shutter->setText(QString());
        L_flip->setText(QString());
        L_raw_pixel->setText(QString());
        L_image_pixel->setText(QString());
        L_number_of_colors->setText(QString());
        L_color_description->setText(QString());
        L_artist->setText(QString());
        L_image_description->setText(QString());
        L_GPS_data->setText(QString());
        L_top_margin->setText(QString());
        L_raw_pitch->setText(QString());
        L_flash_used->setText(QString());
        L_serial_nummer_of_image->setText(QString());
        TabMenu->setTabText(TabMenu->indexOf(tab_2), QApplication::translate("mainwindow", "Metadata", 0));
        groupBox_4->setTitle(QApplication::translate("mainwindow", "Progress", 0));
        L_tester->setText(QString());
        L_processlabel->setText(QString());
        TabMenu->setTabText(TabMenu->indexOf(Progress), QApplication::translate("mainwindow", "Progress", 0));
        L_Zoom->setText(QApplication::translate("mainwindow", "Zoom", 0));
        L_FileDirection->setText(QString());
        L_MousePosition->setText(QString());
        L_MouseMove->setText(QString());
        menuRawShop->setTitle(QApplication::translate("mainwindow", "File", 0));
        menuSave_as->setTitle(QApplication::translate("mainwindow", "Save as...", 0));
        menuHelp->setTitle(QApplication::translate("mainwindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class mainwindow: public Ui_mainwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
