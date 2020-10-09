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
	xml << "<paralised>";
	if (this->isParalised() == 1) { xml << this->paralised; }
	xml << "</paralised>";
	xml << "</Electrique>";
	return xml.str();
}