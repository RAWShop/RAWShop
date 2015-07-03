#ifndef CLICKABLELABEL_H
#define CLICKABLELABEL_H

#include <QLabel>
#include <QMouseEvent>

class ClickableLabel : public QLabel				// Abgeleitete Klasse von QLabel
{

Q_OBJECT

public:
    explicit ClickableLabel(QWidget * parent = 0 );
    ~ClickableLabel();
	float	getMouseX();							
	float	getMouseY();
	int		getMoveX();
	int		getMoveY();
	int		getdelta();

private:
	int MouseX,MouseY,MoveX,MoveY,WheelChange;

signals:
    void doubleclicked();
	void MousePressed();
	void MouseReleased();
	void Zoomed();
	void MouseMoved();

protected:
    void mouseDoubleClickEvent ( QMouseEvent * event );
	void mousePressEvent ( QMouseEvent * event);
	void mouseReleaseEvent ( QMouseEvent * event);
	void wheelEvent ( QWheelEvent * event);
	void mouseMoveEvent ( QMouseEvent * event);
};


#endif
