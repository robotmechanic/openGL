#include <iostream>
#include <GL/glut.h>

using namespace std;

// This creates a grid and cube

void CreateCube()
{
    glColor3f(1,1,1);
    glutSolidCube(0.4);
}

void DrawGrid()
{
    int i;
    for(i=0; i<40; i++)
    {
        glPushMatrix();
        if(i<20){glTranslatef(0,0,i);}
        if(i>=20){glTranslatef(i-20,0,0); glRotatef(-90,0,1,0);}

        glBegin(GL_LINES);
        glColor3f(1,1,1); glLineWidth(1);
        glVertex3f(0,-0.1,0); glVertex3f(19,-0.1,0);
        glEnd();
        glPopMatrix();
    }

}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity(); //init the scene
    glTranslatef(-13,0,-45);
    glRotatef(40,1,1,0);
    DrawGrid();
    CreateCube();
    glutSwapBuffers();
}

void init()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(35,1.0f,0.1f,1000);
    glMatrixMode(GL_MODELVIEW);
    glEnable(GL_DEPTH_TEST);
    glClearColor(0.1,0.1,0.1,1);
}


int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE);
    glutInitWindowSize(899,600);
    glutCreateWindow("");
    glutDisplayFunc(display);
    init();   
    display();
    glutMainLoop();
    return 0;
}