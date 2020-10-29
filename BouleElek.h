#ifndef BOULEELEK_H
#define BOULEELEK_H

#include "Capacite.h"

class BouleElek : public Capacite
{
protected:
	int degat = 80;
	int PP = 10;

public:
	int getDegat() const;
	void setDegat(int degat);
	int getPP() const;
	void setPP(int PP);
	string exporter();
};
#endif

