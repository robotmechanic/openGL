#include <iostream>
#include <GL/glut.h>

using namespace std;

// This creates a cube

void CreateCube()
{
    glColor3f(1,1,1);
    glutSolidCube(0.4);
}

void display()
{
    glRotatef(40,1,1,0);
    CreateCube();
    glutSwapBuffers();
}

// remember to include this
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
    init();
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE);
    glutInitWindowSize(899,600);
    glutCreateWindow("");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
