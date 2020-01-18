#include "lib.h"
#define DEFAULT_RADIUS      1
#define DEFAULT_LENGTH      10
#define DEFAULT_WIDTH       7
#define DEFAULT_POCKET_NB   6


Billard::Billard()
{
    length = DEFAULT_LENGTH;
    width = DEFAULT_WIDTH;
    pocketsRadius = DEFAULT_RADIUS * 1.5;
    posXPockets = (float*)malloc(DEFAULT_POCKET_NB * sizeof(float));
    posYPockets = (float*)malloc(DEFAULT_POCKET_NB * sizeof(float));
    
}

Billard::Billard(float length, float width, int pocketNb, float* posXPockets,float* posYPockets, float pocketsRadius)
{
    Billard::length = length;
    Billard::width = width;
    Billard::pocketsRadius = pocketsRadius * 1.5;
    Billard::posXPockets = (float*)malloc(pocketNb * sizeof(float));
    Billard::posYPockets = (float*)malloc(pocketNb * sizeof(float));
}


Billard::~Billard()
{
}

Boule::Boule(float posX, float posY)
{
}

Boule::~Boule()
{
}