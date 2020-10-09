#include "Electrique.h"

Electrique::Electrique() {
	this->paralised = false;
}

Electrique::~Electrique() {
}

string Electrique::exporter()
{
	stringstream xml;
	xml << "<Electrique>";
	xml << "<paralised>" << this->paralised << "</paralised>";
	xml << "</Electrique>";
	return xml.str();
}