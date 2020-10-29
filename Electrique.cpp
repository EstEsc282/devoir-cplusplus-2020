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
	if (this->isParalised() == 1) {
		xml << "est paralise";
	}
	else { xml << "n'est pas paralise"; }
	xml << "</paralised>";
	xml << "</Electrique>" << endl;
	return xml.str();
}

string Electrique::exporterT()
{
	stringstream xml;
	if (this->isParalised() == 1) {
		xml << "est paralise";
	}
	else { xml << "n'est pas paralise"; }
	return xml.str();
}