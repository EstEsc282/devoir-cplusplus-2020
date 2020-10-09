#ifndef POKEMON_H
#define POKEMON_H

#include "Capacite.h";

#include <iostream>
#include <sstream>
using namespace std;

class Pokemon{
protected:
	string nom;
	bool capture;
	int vie;
	string type;
	string capacite;
	float puissance;
	float vitesse;
public:
	Pokemon();
	virtual ~Pokemon();
	Pokemon(const Pokemon& other);

	const string& getNom() const;
	void setNom(const string& nom);

	bool isCapture() const;
	void setCapture(bool capture);

	int getVie() const;
	void setVie(int vie);

	const string& getType() const;
	void setType(const string& type);

	const string& getCapacite() const;
	void setCapacite(const string& capacite);

	float getPuissance() const;
	void setPuissance(float puissance);

	float getVitesse() const;
	void setVitesse(float vitesse);


	virtual string exporter();
};

#endif