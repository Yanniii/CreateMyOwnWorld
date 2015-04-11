#pragma once

#include "Creature.h"

class Animal : public Creature
{
public:
	Animal();
	~Animal();

	virtual void eat() = 0;
	virtual void move() = 0;

protected:
	int starvation_time;
};

