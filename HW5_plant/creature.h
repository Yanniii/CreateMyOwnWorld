#pragma once

class Creature{
public:
	
	Creature();
	~Creature();

	virtual void display() = 0;
	virtual void reproduce() = 0;
	
protected:
	int life;
	int x;
	int y;
};