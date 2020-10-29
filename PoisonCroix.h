#ifndef POISONCROIX_H
#define POISONCROIX_H

#include "Capacite.h"

class PoisonCroix : public Capacite
{
protected :
	int degat = 80;
	int PP = 20;

public :
	int getDegat() const;
	void setDegat(int degat);
	int getPP() const;
	void setPP(int PP);
	string exporter();
};
#endif

