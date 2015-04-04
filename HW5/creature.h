#include <iostream>
using namespace std;

class Creature{
public:
	virtual void display();
	Creature(string n, int num);
protected:
	string name;
	int number;
};

class Mushroom : public Creature {//Creature that grows in size/number spontaneously
public:
	virtual void display();
	Mushroom(string n, int num);
private:
	string name;
	int number;
}; 

class Mario : public Creature {//Eat mushroom, can be strocked by electric shocks emitted by Pikachu, has 3 lives, dies after 3 shocks
public:
	virtual void display();
	Mario(string n, int num);
private:
	string name;
	int number;
};

class Pikachu : public Creature {//Eat mushroom, 
public:
	virtual void display();
	Pikachu(string n, int num);
private:
	string name;
	int number;
};

class CreatureUnkown1 : public Creature {
public:
	virtual void display();
	CreatureUnkown1(string n, int num);
private:
	string name;
	int number;
};

class CreatureUnkown2 : public Creature {
public:
	virtual void display();
	CreatureUnkown2(string n, int num);
private:
	string name;
	int number;
};