/*---------------------------------------------*/

#include <iostream>
#include <GL/glut.h>

// This creates a blank window
void display()
{
glutSwapBuffers();
}

int main(int argc, char **argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE);
glutInitWindowSize(899,600);
glutCreateWindow("");
glutDisplayFunc(display);
glutMainLoop();
return 0;

}