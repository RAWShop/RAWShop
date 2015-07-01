#include "clickablelabel.h"
#include <QMouseEvent>

ClickableLabel::ClickableLabel(QWidget * parent ) :
    QLabel(parent)
  {
	  MouseX=0;				// Initialiserung
	  MouseY=0;
	  MoveX=0;
	  MoveY=0;

  }

ClickableLabel::~ClickableLabel()
  {
  }

void ClickableLabel::mouseDoubleClickEvent ( QMouseEvent * event )
	// Diese Funktion erfasst die Koordinaten eines Doppelklicks auf dem ClickableLabel
	{	
	  MouseX=event->x();			// Übergabe der X-Koordinate
	  MouseY=event->y();			// Übergabe der y-Koordinate
      emit doubleclicked();			// Erzeugt das Signal eines Doppelklicks
	}

void ClickableLabel::mousePressEvent ( QMouseEvent * event )
	// Diese Funktion erfasst die Koordinaten eines Mausdrucks auf dem ClickableLabel
	{
	  MouseX=event->x();			// Übergabe der X-Koordinate
	  MouseY=event->y();			// Übergabe der y-Koordinate

	  emit MousePressed();			// Erzeugt das Signal einer positiven Mausdruckflanke
	 
	}

void ClickableLabel::mouseReleaseEvent ( QMouseEvent * event )
	{
	  emit MouseReleased();			// Erzeugt das Signal einer negativen Mausdruckflanke
	}

void ClickableLabel::wheelEvent ( QWheelEvent * event){
	WheelChange = event->delta()/20;
	emit Zoomed();
}


float ClickableLabel::getMouseX()
	// float für Rechnung bei Verwendung (siehe void mainwindow::zoom())
	{
	  return MouseX;
	}

float ClickableLabel::getMouseY()
	// float für Rechnung bei Verwendung (siehe void mainwindow::zoom())
	{
	  return MouseY;
	}

int ClickableLabel::getMoveX()
	{
	  return MoveX;
	}

int ClickableLabel::getMoveY()
	{
	  return MoveY;
	}

int ClickableLabel::getdelta(){

return WheelChange;
}


void ClickableLabel::mouseMoveEvent(QMouseEvent * event )
	// Diese Funktion erfasst die Veränderungen der Mauskoordinaten innerhalb eines Moves
	{
	  MoveX=MouseX-event->x();		// Errechnung der x-Koordinaten-Differenz
	  MoveY=MouseY-event->y();		// Errechnung der y-Koordinaten-Differenz 
	  MouseX=event->x();			// Übergabe der X-Koordinate
	  MouseY=event->y();			// Übergabe der y-Koordinate



	  emit MouseMoved();			// Erzeugt das Signal einer negativen Mausdruckflanke
	  
	  
	}