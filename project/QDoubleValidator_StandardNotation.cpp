#include "QDoubleValidator_StandardNotation.h"



QDoubleValidator_StandardNotation::QDoubleValidator_StandardNotation(double low, double top,int deci,QObject * parent ) :
    QDoubleValidator(low, top, deci, parent)
  {

      setNotation(QDoubleValidator::Notation::StandardNotation);
  }

    QDoubleValidator_StandardNotation::~QDoubleValidator_StandardNotation(){};
