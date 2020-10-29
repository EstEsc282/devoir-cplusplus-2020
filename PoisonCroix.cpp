#include "PoisonCroix.h"

int PoisonCroix::getDegat() const
{
	return degat;
}
void PoisonCroix::setDegat(int degat)
{
	this->degat = degat;
}

int PoisonCroix::getPP() const
{
	return PP;
}
void PoisonCroix::setPP(int PP)
{
	this->PP = PP;
}

string PoisonCroix::exporter()
{
	stringstream xml;

	xml << "<PoisonCroix>" << endl;
	xml << "<pp>" << this->PP << "</pp>" << endl;
	xml << "<degat>" << this->degat << "</degat>" << endl;
	xml << "</PoisonCroix>" << endl;

	return xml.str();
}
