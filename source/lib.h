#ifndef LIB_H
#define LIB_H
#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

class Billard
{
private:
    float length;
    float width;
    float* posXPockets;
    float* posYPockets;
    float pocketsRadius;
public:
    Billard();
    Billard(float length, float width, int pocketNb, float* posXPockets,float* posYPockets, float pocketsRadius);
    ~Billard();
};

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
    bool isInPocket(Billard billard);
    bool isTouching(Billard billard, Boule boules[]);
    void bounce(Billard billard, Boule boule);
    void setSpeed(float speedX, float speedY);
};






#endif