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
	xml << "<poisoned>";
	if (this->isPoisoned() == 1) { xml << "est empoisonne"; }
	else { xml << "n'est pas empoisonne"; }
	xml << "</poisoned>";
	xml << "</Poison>";

	xml << "<Pokemon>" << endl;

	xml << "<nom>" << this->nom << "</nom>" << endl;
	xml << "<capture>" << this->capture << "</capture>" << endl;
	xml << "<vie>" << this->vie << "</vie>" << endl;
	xml << "<type>" << this->type << "</type>" << endl;
	xml << "<capacite>" << this->capacite << "</capacite>" << endl;
	xml << "<puissance>" << this->puissance << "</puissance>" << endl;
	xml << "<vitesse>" << this->vitesse << "</vitesse>" << endl;

	xml << "</Pokemon>" << endl;
	return xml.str();
}