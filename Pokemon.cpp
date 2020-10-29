#include "Pokemon.h"

Pokemon::Pokemon() { // constructeur

}

Pokemon::~Pokemon() { // destructeur
	//this->detruirePouvoirs();
}

const string& Pokemon::getNom() const
{
	return nom;
}
void Pokemon::setNom(const string& nom)
{
	this->nom = nom;
}

int Pokemon::getVie() const
{
	return vie;
}
void Pokemon::setVie(int vie)
{
	this->vie = vie;
}

const string& Pokemon::getType() const
{
	return type;
}
void Pokemon::setType(const string& type)
{
	this->type = type;
}

const string& Pokemon::getCapacite() const
{
	return capacite;
}
void Pokemon::setCapacite(const string& capacite)
{
	this->capacite = capacite;
}

float Pokemon::getPuissance() const
{
	return puissance;
}
void Pokemon::setPuissance(float puissance)
{
	this->puissance = puissance;
}

float Pokemon::getVitesse() const
{
	return vitesse;
}
void Pokemon::setVitesse(float vitesse)
{
	this->vitesse = vitesse;
}

string Pokemon::exporter()
{
	stringstream xml;

	xml << "<Pokemon>" << endl;

	xml << "<nom>" << this->nom << "</nom>" << endl;
	xml << "<capture>";
		if (this->isCapture() == 1) {
			xml << "est capture";
		}
		else { xml << "n'est pas capture"; }
	xml << "</capture>" << endl;
	xml << "<vie>" << this->vie << "</vie>" << endl;
	xml << "<type>" << this->type << "</type>" << endl;
	xml << "<capacite>" << this->capacite << "</capacite>" << endl;
	xml << "<puissance>" << this->puissance << "</puissance>" << endl;
	xml << "<vitesse>" << this->vitesse << "</vitesse>" << endl;
	
	xml << "</Pokemon>" << endl;
	return xml.str();
} 

string Pokemon::exporterT()
{
	stringstream xml;

	xml << "";
	return xml.str();
}