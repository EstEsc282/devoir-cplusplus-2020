#ifndef CAPACITE_H
#define CAPACITE_H

#include <iostream>
#include <sstream>
using namespace std;

class Capacite
{
protected :
	string cnom;
	int ppcapacite;

public :
	const string& getCNom() const;
	void setCNom(const string& cnom);

	int getPP() const;
	void setPP(int ppcapacite);

	string exporter();
};
#endif
