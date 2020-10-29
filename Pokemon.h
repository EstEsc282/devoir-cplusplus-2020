#ifndef POKEMON_H
#define POKEMON_H

#include <iostream>
#include <sstream>
using namespace std;

class Pokemon{
protected:
	string nom;
	bool capture;
	int vie;
	string type = "";
	string capacite = "";
	float puissance;
	float vitesse;
public:
	Pokemon();
	virtual ~Pokemon();

	const string& getNom() const;
	void setNom(const string& nom);


	void Capture()
	{
		this->capture = true;
	}

	void unCapture()
	{
		this->capture = false;
	}

	bool isCapture() const
	{
		return capture;
	}

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
	virtual string exporterT();
};

#endif