#ifndef POISON_H
#define POISON_H

#include "Pokemon.h"

class Poison : public Pokemon
{
protected:

	bool poisoned;

public:
	Poison();
	virtual ~Poison();

	void activePoisoned()
	{
		this->poisoned = true;
	}

	void unactivePoisoned()
	{
		this->poisoned = false;
	}

	bool isPoisoned() const
	{
		return poisoned;
	}

	virtual string exporter();

};
#endif

