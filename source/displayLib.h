#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#include <GL/freeglut.h>
#include <GL/gl.h>

using namespace std;
void initDisplay(int* argc, char** argv);
void displayCB();
void keyCB(unsigned char key, int x, int y);
void animateColor(float var);