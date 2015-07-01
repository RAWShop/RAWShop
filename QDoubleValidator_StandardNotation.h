#ifndef QDOUBLEVALIDATOR_STANDARDNOTATION_H
#define QDOUBLEVALIDATOR_STANDARDNOTATION_H

#include <QDoubleValidator>

class QDoubleValidator_StandardNotation : public QDoubleValidator		// Abgeleitete Klasse von QDoubleValidator
{

Q_OBJECT

public:
    explicit QDoubleValidator_StandardNotation(double, double,int ,QObject * parent = 0 );
    ~QDoubleValidator_StandardNotation();
    QValidator::State validate(QString &s, int &i) const
    {
		
		if (s.isEmpty()) {
			s.setNum(bottom());
			return QValidator::Intermediate;
        }

		QChar h;
		

		int help=0;
		for(int h=0; h<i; h++){
			if(s[h].isLetter() || s[h].isSpace() || !(s[h].isPunct() || s[h].isNumber()))
				return QValidator::Invalid;

			if(s[h].isPunct()){
				help=help+1;
				s.replace(h,1,".");
			}
		}
		if (help >= 2)
			return QValidator::Invalid;


		if (s.toDouble() == 0 )
			return QValidator::Intermediate;

		if (s.toDouble() >= bottom() && s.toDouble() <= top()) {
            return QValidator::Acceptable;
        } else {
            return QValidator::Invalid;
        }
    }
};


#endif


