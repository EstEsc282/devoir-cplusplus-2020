#include "BouleElek.h"

int BouleElek::getDegat() const
{
	return degat;
}
void BouleElek::setDegat(int degat)
{
	this->degat = degat;
}

int BouleElek::getPP() const
{
	return PP;
}
void BouleElek::setPP(int PP)
{
	this->PP = PP;
}

string BouleElek::exporter()
{
	stringstream xml;

	xml << "<BouleElek>" << endl;
	xml << "<pp>" << this->PP << "</pp>" << endl;
	xml << "<degat>" << this->degat << "</degat>" << endl;
	xml << "</BouleElek>" << endl;

	return xml.str();
}
