#include "displayLib.h"

float val = 0;

void initDisplay(int* argc, char** argv)
{
    glutInit(argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("OpenGL - First window demo");
    glutDisplayFunc(displayCB);
    glutKeyboardFunc(keyCB);
    glutMainLoop();    
}

void displayCB()
{
    glClearColor(val, 0.0, 0.0, 0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0);
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
    glBegin(GL_POLYGON);
        glVertex2f(-0.5, -0.5);
        glVertex2f(-0.5, 0.5);
        glVertex2f(0.5, 0.5);
        glVertex2f(0.5, -0.5);
    glEnd();
    glFlush();
    glutSwapBuffers();
}

void keyCB(unsigned char key, int x, int y)
{
  if( key == 'q' || key == 'Q' ) exit(0);
  if( key == 'a') 
  {
    animateColor(0.5);
  }
}

void animateColor(float var)
{
    if (var + val <= 1) 
    {
        val += var;
        cout << "a pressed" << endl;
    }
    glutPostRedisplay();    
}