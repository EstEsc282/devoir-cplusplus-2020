#include <iostream>
using namespace std;

#include "Pokemon.h";
#include "Capacite.h";

#include "Poison.h";
#include "Electrique.h";

int main(){

	Pokemon nostenfer;
	nostenfer.setNom("nostenfer");
	nostenfer.isCapture();
	nostenfer.setVie(165);
	nostenfer.setType("poison");
	nostenfer.setCapacite("poison-croix");
	nostenfer.setPuissance(50);
	nostenfer.setVitesse(75);
	cout << nostenfer.exporter() << endl;

	Poison nostenferd;
	nostenferd.activePoisoned();
	cout << nostenferd.exporter() << endl;

	Pokemon * grotadmorv = new Poison;
	grotadmorv->setNom("grotadmorv");
	grotadmorv->isCapture();
	grotadmorv->setVie(165);
	grotadmorv->setType("poison");
	grotadmorv->setCapacite("poison-croix");
	grotadmorv->setPuissance(50);
	grotadmorv->setVitesse(75);
	cout << grotadmorv->exporter() << endl;

	Pokemon pikachu;
	pikachu.setNom("pikachu");
	//pikachu.isCapture();
	pikachu.setVie(55);
	pikachu.setType("electrique");
	pikachu.setCapacite("Boule elec");
	pikachu.setPuissance(10);
	pikachu.setVitesse(65);
	cout << pikachu.exporter();

return 0;
}