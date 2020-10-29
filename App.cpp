#include <iostream>
using namespace std;

#include "Pokemon.h";
#include "Capacite.h";

#include "Poison.h";
#include "Electrique.h";

#include "PoisonCroix.h";
#include "BouleElek.h";

#include <vector>
#include <fstream>

int main(){

	Capacite CPC;
	CPC.setCNom("Poison Croix");
	PoisonCroix PC;
	CPC.setPP(PC.getPP());
	//cout << CPC.exporter() << endl;
	//cout << PC.exporter() << endl;

	Capacite CBE;
	CBE.setCNom("Boule Elek");
	BouleElek BE;
	CBE.setPP(BE.getPP());
	//cout << CBE.exporter() << endl;
	//cout << BE.exporter() << endl;

	Pokemon * grotadmorv = new Poison;
	grotadmorv->setNom("grotadmorv");
	grotadmorv->unCapture();
	grotadmorv->setVie(165);
	grotadmorv->setType("Poison");
	grotadmorv->setCapacite("Poison Croix");
	grotadmorv->setPuissance(1);
	grotadmorv->setVitesse(50);
	//cout << grotadmorv->exporter() << endl;

	Pokemon * pikachu = new Electrique;
	pikachu->setNom("pikachu");
	pikachu->unCapture();
	pikachu->setVie(90);
	pikachu->setType("Electrique");
	pikachu->setCapacite("Boule Elek");
	pikachu->setPuissance(1);
	pikachu->setVitesse(90);
	//cout << pikachu->exporter() << endl;

	Poison pikachuP;
	//cout << pikachu->exporter();
	//cout << pikachuP.exporter() << endl;

	vector<Pokemon*> pokemon;
	pokemon.push_back(new Pokemon());
	pokemon.push_back(new Poison());
	pokemon.push_back(new Electrique());

	Poison* nostenfer = new Poison();
	nostenfer->setNom("nostenfer");
	nostenfer->unCapture();
	nostenfer->setVie(165);
	nostenfer->setType("Poison");
	nostenfer->setCapacite("Poison Croix");
	nostenfer->setPuissance(2);
	nostenfer->setVitesse(130);
	nostenfer->activePoisoned();

	Poison* metamorph = new Poison();
	metamorph->setNom("metamorph");
	metamorph->unCapture();
	metamorph->setVie(165);
	metamorph->setType("Poison");
	metamorph->setCapacite("Poison Croix");
	metamorph->setPuissance(1);
	metamorph->setVitesse(48);

	Electrique* crabagarre= new Electrique();
	crabagarre->setNom("crabagarre");
	crabagarre->unCapture();
	crabagarre->setVie(160);
	crabagarre->setType("Poison");
	crabagarre->setCapacite("Poison Croix");
	crabagarre->setPuissance(0.5);
	crabagarre->setVitesse(63);

	pokemon.push_back(nostenfer);
	pokemon.push_back(grotadmorv);
	pokemon.push_back(pikachu);
	pokemon.push_back(metamorph);
	pokemon.push_back(crabagarre);

	bool partie = true;
	int tour = 0;
	char touche;
	string cheminFichier = "sortie.txt";
	ofstream fichierSortie;

	vector<Pokemon*>::iterator visiteur;

	while(partie) {
		tour++;
		cout << "Choisir un Pokemon ou une option :" << endl;
		cout << "Nostenfer : Tapez 1" << endl;
		cout << "Pikachu : Tapez 2" << endl;
		//cout << "Grotadmorv : Tapez 3" << endl;
		cout << "Voir toutes les captures: Tapez c" << endl;
		cout << "Pour quitter tapez q" << endl;

		cin >> touche;
		cin.ignore();

		switch (touche) {
		case '1':
			nostenfer->Capture();
			cout << "Votre pokemon est Nostenfer" << endl; 
			cout << "Ce pokemon est de type " << nostenfer->getType() << endl;
			cout << "Ce pokemon peut utiliser la capacite " << nostenfer->getCapacite() << endl;
			cout << "Ce pokemon a " << nostenfer->getVie() << " points de vie" << endl;
			cout << "Ce pokemon a une puissance de " << nostenfer->getPuissance()*PC.getDegat()<< endl;
			cout << "Ce pokemon a une vitesse de " << nostenfer->getVitesse() << endl;

			cout << endl << "Vous rencontrez un Metamorph sauvage" << endl;

			cout << endl << "Que faites vous?" << endl;

			cout << endl << "Pour attaquer : Tapez 1" << endl;
			cout << "Pour fuir : Tapez 2" << endl;
			cout << "Pour revenir au début : Tapez q" << endl << endl;

			cin >> touche;

			switch (touche)
			{
			case '1':
				nostenfer->Capture();
				cout << endl << "Nostenfer utilise Poison Croix" << endl;
				cout << endl << "Metamorph a perdu " << nostenfer->getPuissance() * PC.getDegat() << " points de vie" << endl;
				metamorph->setVie(metamorph->getVie() - (nostenfer->getPuissance() * PC.getDegat()));
				cout << endl << "Metamorph a " << metamorph->getVie() << " points de vie" << endl;

				cout << endl << "Metamorph utilise Poison Croix" << endl;
				cout << endl << "Nostenfer a perdu " <<metamorph->getPuissance() * PC.getDegat() << " points de vie" << endl;
				nostenfer->setVie(nostenfer->getVie() - (metamorph->getPuissance() * PC.getDegat()));
				cout << endl << "Nostenfer a " << nostenfer->getVie() << " points de vie" << endl;

				cout << endl << endl << "Que voulez vous faire? " << endl;

				cout << endl << "Pour attaquer : Tapez 1" << endl;
				cout << "Pour fuir : Tapez 2" << endl;
				cout << "Pour capturer : Tapez 3" << endl;
				cout << "Pour revenir au début : Tapez q" << endl << endl;

				cin >> touche;

				switch (touche)
				{
				case '1':
					nostenfer->Capture();
					cout << endl << "Nostenfer utilise Poison Croix" << endl;
					cout << endl << "Metamorph a perdu " << nostenfer->getPuissance() * PC.getDegat() << " points de vie" << endl;
					metamorph->setVie(metamorph->getVie() - (nostenfer->getPuissance() * PC.getDegat()));
					if (metamorph->getVie() <= 0) metamorph->setVie(0);
					cout << endl << "Metamorph a " << metamorph->getVie() << " points de vie" << endl;
					cout << endl << "Metamorph est vaincu. Bien joue! " << endl;
					break;
				case '2':
					cout << endl << "Vous avez fuit." << endl << endl;
					break;
				case '3':
					cout << endl << "Vous lancez une Pokeball" << endl;
					cout << endl << "Metamorph est capture" << endl << endl;
					metamorph->Capture();
					break;
				case 'q':
					nostenfer->unCapture();
					break;

				}
				cout << endl;
				break;

			case '2':
				cout << endl << "Vous avez fuit." << endl << endl;
				break;
			case 'Q' : case 'q':
				nostenfer->unCapture();
				break;
			}
			cout << endl;
			break;
		case '2':
			pikachu->Capture();
			cout << "Votre pokemon est Pikachu" << endl;
			cout << "Ce pokemon est de type " << pikachu->getType() << endl;
			cout << "Ce pokemon peut utiliser la capacite " << pikachu->getCapacite() << endl;
			cout << "Ce pokemon a " << pikachu->getVie() << " points de vie" << endl;
			cout << "Ce pokemon a une puissance de " << pikachu->getPuissance() * PC.getDegat() << endl;
			cout << "Ce pokemon a une vitesse de " << pikachu->getVitesse() << endl;

			cout << endl << "Vous rencontrez un crabagarre sauvage" << endl;

			cout << endl << "Que faites vous?" << endl;

			cout << endl << "Pour attaquer : Tapez 1" << endl;
			cout << "Pour fuir : Tapez 2" << endl;
			cout << "Pour revenir au début : Tapez q" << endl << endl;

			cin >> touche;

			switch (touche)
			{
			case '1':
				pikachu->Capture();
				cout << endl << "Pikachu utilise Boule Elek" << endl;
				cout << endl << "Crabagarre a perdu " << pikachu->getPuissance() * PC.getDegat() << " points de vie" << endl;
				crabagarre->setVie(crabagarre->getVie() - (pikachu->getPuissance() * PC.getDegat()));
				cout << endl << "Crabagarre a " << crabagarre->getVie() << " points de vie" << endl;
				crabagarre->activeParalised();
				cout << endl << "Crabagarre " << crabagarre->exporterT() << " mais il arrive a attaquer" << endl;

				cout << endl << "Crabagarre utilise Poison Croix" << endl;
				cout << endl << "Pikachu a perdu " << crabagarre->getPuissance() * PC.getDegat() << " points de vie" << endl;
				pikachu->setVie(pikachu->getVie() - (crabagarre->getPuissance() * PC.getDegat()));
				cout << endl << "Pikachu a " << pikachu->getVie() << " points de vie" << endl;
				pikachuP.activePoisoned();
				cout << endl << "Pikachu " << pikachuP.exporterT() << endl;
				cout << endl << "Pikachu perd " << pikachuP.getDegatPoison() << " points de vie a cause du poison" << endl;
				pikachu->setVie(pikachu->getVie() - pikachuP.getDegatPoison());
				cout << endl << "Pikachu a " << pikachu->getVie() << " points de vie" << endl;

				cout << endl << endl << "Que voulez vous faire? " << endl;

				cout << endl << "Pour attaquer : Tapez 1" << endl;
				cout << "Pour fuir : Tapez 2" << endl;
				cout << "Pour capturer : Tapez 3" << endl;
				cout << "Pour revenir au début : Tapez q" << endl << endl;

				cin >> touche;

				switch (touche)
				{
				case '1':
					pikachu->Capture();
					cout << endl << "Pikachu utilise Boule Elek" << endl;
					cout << endl << "Crabagarre a perdu " << pikachu->getPuissance() * PC.getDegat() << " points de vie" << endl;
					crabagarre->setVie(crabagarre->getVie() - (pikachu->getPuissance() * PC.getDegat()));
					if (crabagarre->getVie() <= 0) crabagarre->setVie(0);
					cout << endl << "Crabagarre a " << crabagarre->getVie() << " points de vie" << endl;
					cout << endl << "Crabagarre est vaincu. Bien joue! " << endl;
					break;
				case '2':
					cout << endl << "Vous avez fuit." << endl << endl;
					break;
				case '3':
					cout << endl << "Vous lancez une Pokeball" << endl;
					cout << endl << "Crabagarre est capture" << endl << endl;
					crabagarre->Capture();
					break;
				case 'Q': case 'q':
					nostenfer->unCapture();
					break;

				}
				cout << endl;
				break;

			case '2':
				cout << endl << "Vous avez fuit." << endl << endl;
				break;
			case 'Q': case 'q':
				nostenfer->unCapture();
				break;
			}
		case 'C': case 'c':
			for (visiteur = pokemon.begin(); visiteur != pokemon.end(); visiteur++) {
				Pokemon* pointePokemon = *visiteur;
					if (pointePokemon->getNom() != "" && pointePokemon->isCapture()==1) {
						cout << endl << "Ce pokemon s'appelle " << pointePokemon->getNom() << endl;
						cout << "Ce pokemon a " << pointePokemon->getVie() << " de points de vie" << endl;
						cout << "Ce pokemon est de type " << pointePokemon->getType() << endl;
						if (pointePokemon->getCapacite() == CPC.getCNom() && pointePokemon->getType() == "Poison") {
							cout << "Ce pokemon utilise " << pointePokemon->getCapacite() << endl;
						}
						else if (pointePokemon->getCapacite() == CBE.getCNom() && pointePokemon->getType() == "Electrique") {
							cout << "Ce pokemon utilise " << pointePokemon->getCapacite() << endl;
						}
						else if (pointePokemon->getCapacite() == "") {
							cout << "Ce pokemon n'utilise pas de capacite" << endl;
						}
						else {
							cout << "Ce pokemon ne peut pas utiliser " << pointePokemon->getCapacite() << " car il est de type " << pointePokemon->getType() << endl;
						}
						if (pointePokemon->getType() == "Poison") {
							pointePokemon->setPuissance(pointePokemon->getPuissance() * PC.getDegat());
						}
						else if (pointePokemon->getType() == "Electrique") {
							pointePokemon->setPuissance(pointePokemon->getPuissance() * BE.getDegat());
						}
						else { pointePokemon->setPuissance(50); }
						cout << "Cette attaque a une puissance de " << pointePokemon->getPuissance() << endl;
						cout << "Ce pokemon a une vitesse de " << pointePokemon->getVitesse() << endl;
						cout << pointePokemon->exporterT() << endl << endl;
					}
			}
			break;

		case 'Q': case 'q':
			fichierSortie.open(cheminFichier, ofstream::out | ofstream::app); 
			for (visiteur = pokemon.begin(); visiteur < pokemon.end(); visiteur++) {
				fichierSortie << (*visiteur)->exporter() << endl;
			}
			fichierSortie.close();
			partie = false;
			break;
		}

	}

	/*for(visiteur = pokemon.begin(); visiteur != pokemon.end(); visiteur++){
		Pokemon* pointePokemon = *visiteur;
		if (pointePokemon->getNom() != "") {
			cout << "Ce pokemon s'appelle " << pointePokemon->getNom() << endl;

			cout << "Ce pokemon est ";
			if (pointePokemon->isCapture() == 1) {
				cout << "capture" << endl;
			}
			else {
				cout << "sauvage" << endl;
			}
			cout << "Ce pokemon a " << pointePokemon->getVie() << " de points de vie" << endl;
			cout << "Ce pokemon est de type " << pointePokemon->getType() << endl;
			if (pointePokemon->getCapacite() == CPC.getCNom() && pointePokemon->getType() == "Poison") {
				cout << "Ce pokemon utilise " << pointePokemon->getCapacite() << endl;
			}
			else if (pointePokemon->getCapacite() == CBE.getCNom() && pointePokemon->getType() == "Electrique") {
				cout << "Ce pokemon utilise " << pointePokemon->getCapacite() << endl;
			}
			else if (pointePokemon->getCapacite() == "") {
				cout << "Ce pokemon n'utilise pas de capacite" << endl;
			}
			else {
				cout << "Ce pokemon ne peut pas utiliser " << pointePokemon->getCapacite() << " car il est de type " << pointePokemon->getType() << endl;
			}
			if (pointePokemon->getType() == "Poison") {
				pointePokemon->setPuissance(pointePokemon->getPuissance() * PC.getDegat());
			}
			else if (pointePokemon->getType() == "Electrique") {
				pointePokemon->setPuissance(pointePokemon->getPuissance() * BE.getDegat());
			}
			else { pointePokemon->setPuissance(50); }
			cout << "Cette attaque a une puissance de " << pointePokemon->getPuissance() << endl;
			cout << "Ce pokemon a une vitesse de " << pointePokemon->getVitesse() << endl;
			cout << pointePokemon->exporterT() << endl;
		}
	}*/

return 0;
}