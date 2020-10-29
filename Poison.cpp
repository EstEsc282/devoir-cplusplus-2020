#include "Poison.h"

Poison::Poison() {
	this->poisoned = false;
	this->degatp = 25;
}

int Poison::getDegatPoison() const
{
	return degatp;
}
void Poison::setDegatPoison(int degatp)
{
	this->degatp = degatp;
}

Poison::~Poison() {
}

string Poison::exporter()
{
	stringstream xml;

	xml << "<Poison>";
	xml << "<poisoned>";
	if (this->isPoisoned() == 1) {
		xml << "est empoisonne";
	}
	else { xml << "n'est pas empoisonne"; }
	xml << "</poisoned>";
	xml << "</Poison>" << endl;

	return xml.str();
}

string Poison::exporterT()
{
	stringstream xml;

	if (this->isPoisoned() == 1) { 
		xml << "est empoisonne";
	}
	else { xml << "n'est pas empoisonne"; }

	return xml.str();
}
