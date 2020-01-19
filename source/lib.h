#ifndef LIB_H
#define LIB_H
#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

class Boule
{
private:
    float posX;
    float posY;
    float speedX;
    float speedY;
    float accelerationX;
    float accelerationY;
    float radius;
    int number;
    bool stripe;
    string color;
    

public:
    Boule(float posX, float posY);
    ~Boule();
    void move(float dirX, float dirY, float dist);
    Boule* isTouchingBoule(Boule* boules);
    void bounce(Boule* boule, int nbBoules);
    void setSpeed(float speedX, float speedY);
    void updateAccleration(float accelerationX, float accelerationY);

    //show();
};

class Billard
{
private:
    float length;
    float width;
    float* posXPockets;
    float* posYPockets;
    float pocketsRadius;
    Boule* boules;
public:
    Billard();
    Billard(float length, float width, int pocketNb, float* posXPockets,float* posYPockets, float pocketsRadius);
    ~Billard();
    bool isInPocket(Boule boule);
    bool isTouchingBillard(Boule boule);
    void bounce(Boule boule);
    //show();
};

#endif