#include "GObjects.h"

#include "Creature.h"
#include "Plant.h"
#include "Position.h"

using namespace std;

class Grass: public Plant{

public:
    Grass(){
        timePassedFromLastGrow = 0.;
        growInterval = 1.; //3s
        deltaSize = 3.;
        
        timePassedFromLastReproduce = 0.;
        reproduceInterval = 6.;
        numChildren = 2;
        
        age = 0.;
        lifespan = 10.;
        alive = true;
        
        size = 10.; // initial size
        object = new GOval(size,size);
        
        position = Position();
    }
    
    Grass(Position pt):Grass(){
        position = pt;
    }

    void display(GWindow& gw){
        if( isDead()) return;
        
        object->setSize(size,size);
        object->setLocation(position.x, position.y);
        object->setFilled(true);
        object->setColor("green");
        object->setFillColor("green");
        gw.draw(object);
    }

    Creature* born(){
        return new Grass();
    }

    string getKind(){
        return "Grass";
    }

protected:

    GOval* object;
};

