#include "Poison.h"

Poison::Poison() {
	this->poisoned = false;
}

Poison::~Poison() {
}

string Poison::exporter()
{
	stringstream xml;
	xml << "<Poison>";
	xml << "<poisoned>" << this->poisoned << "</poisoned>";
	xml << "</Poison>";
	return xml.str();
}