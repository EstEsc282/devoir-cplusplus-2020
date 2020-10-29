#include "Capacite.h"

const string& Capacite::getCNom() const
{
	return cnom;
}
void Capacite::setCNom(const string& cnom)
{
	this->cnom = cnom;
}

int Capacite::getPP() const
{
	return ppcapacite;
}
void Capacite::setPP(int ppcapacite)
{
	this->ppcapacite = ppcapacite;
}

string Capacite::exporter()
{
	stringstream xml;

	xml << "<Capacite>" << endl;
	xml << "<cnom>" << this->cnom << "</cnom>" << endl;
	xml << "<pp>" << this->ppcapacite << "</pp>" << endl;
	xml << "</Capacite>" << endl;

	return xml.str();
}