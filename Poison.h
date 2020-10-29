#ifndef POISON_H
#define POISON_H

#include "Pokemon.h"

class Poison : public Pokemon
{
protected:

	bool poisoned;
	int degatp = 25;

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

	int getDegatPoison() const;
	void setDegatPoison(int degatp);

	virtual string exporter();
	virtual string exporterT();

};
#endif

