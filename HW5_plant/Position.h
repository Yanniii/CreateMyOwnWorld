#ifndef _POSITION_H
#define _POSITION_H

#include <cmath>     // abs
#include <cstdlib>   // rand
#include <algorithm> // max, min

using namespace std;

class Position{

public:
    Position(){
        x = 0.; y = 0.;
    }
    
    Position(double x, double y){
        this->x = x; this->y = y;
    }
    
    Position& operator=(const Position& other){
        this->x = other.x;
        this->y = other.y;
        return *this;
    }
    
    Position(const Position& other){
        *this = other;
    }
    
    double x;
    double y;

    void randomInRange(double width, double height){
        x = ( rand()/(double)RAND_MAX ) * width;
        y = ( rand()/(double)RAND_MAX ) * height;
    }
    
    double distance(const Position& other){
        return abs(x-other.x) + abs(y-other.y);
    }

    void moveTo(const Position& other, double shift){

        double XShift = other.x - this->x;
        double YShift = other.y - this->y;

        if( abs(XShift) < shift ){
            this->x = other.x;
            shift = shift - abs(XShift);
        }else{
            if( XShift < 0 ){
                this->x -= shift;
            }else{
                this->x += shift;
            }
            return;
        }

        if( abs(YShift) < shift){

            this->y = other.y;

        }else{

            if( YShift < 0 ){
                this->y -= shift;
            }else{
                this->y += shift;
            }
        }
        return;
    }
};

#endif
