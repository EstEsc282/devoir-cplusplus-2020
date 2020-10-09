#ifndef ELECTRIQUE_H
#define ELECTRIQUE_H

#include "Pokemon.h"

class Electrique : public Pokemon
{
protected:

	bool paralised;

public:
	Electrique();
	virtual ~Electrique();

	void activeParalised()
	{
		this->paralised = true;
	}

	void unactiveParalised()
	{
		this->paralised = false;
	}

	bool isParalised() const
	{
		return paralised;
	}

	string exporter();

};
#endif

