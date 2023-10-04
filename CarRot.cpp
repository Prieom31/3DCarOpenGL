#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
#include <math.h>

float angle = 0.0f;      // Rotation angle for the car frame
float wheelAngle = 0.0f; // Rotation angle for the wheel

void init()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-800, 800, -800, 800, -800, 800);
    glMatrixMode(GL_MODELVIEW);

    // Enable double buffering
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
}

void left()
{
    glColor3f(0, 0, 1);
    glPushMatrix();
    glTranslatef(0, -200, 200);
    glScalef(1.5, 0.3, 0.01);
    glutSolidCube(600);
    glColor3f(1,1,1);
    glutWireCube(600);
    glPopMatrix();

//mirror
    glColor3f(0.447, 0.04, 0.01);
    glPushMatrix();
    glTranslatef(-240, -130, 250);
    glRotatef(15,0,1,0);
    glScalef(0.025, 0.08, 0.1);
    glutSolidCube(600);
    glPopMatrix();

    glColor3f(0.447, 0.04, 0.01);
    glPushMatrix();
    glTranslatef(-241.5, -133, 220);
    glScalef(0.02, 0.03, 0.05);
    glutSolidCube(600);
    glPopMatrix();

    glColor3f(0.447, 0.04, 0.01);
    glPushMatrix();
    glTranslatef(-240, -130, -250);
    glRotatef(-15,0,1,0);
    glScalef(0.025, 0.08, 0.1);
    glutSolidCube(600);
    glPopMatrix();

    glColor3f(0.447, 0.04, 0.01);
    glPushMatrix();
    glTranslatef(-241.5, -133, -220);
    glScalef(0.02, 0.03, 0.05);
    glutSolidCube(600);
    glPopMatrix();
}

void right()
{
    glColor3f(0, 0, 1);
    glPushMatrix();
    glTranslatef(0, -200, -200);
    glScalef(1.5, 0.3, 0.01);

    glutSolidCube(600);
    glColor3f(1,1,1);
    glutWireCube(600);
    glPopMatrix();


}

void top()
{
    glColor3f(0, 0, 1);
    glPushMatrix();
    glTranslatef(115, 60, 0);
    glScalef(0.7, 0.01, 0.666667);
    glutSolidCube(600);
    glColor3f(1,1,1);
    glutWireCube(600);
    glPopMatrix();

    // middle of bend and front
    glColor3f(0, 0, 1);
    glPushMatrix();
    glTranslatef(-360, -110, 0);
    glScalef(0.3, 0.01, 0.666667);
    glutSolidCube(600);
    glColor3f(1,1,1);
    glutWireCube(600);
    glPopMatrix();

//side door
    glColor3f(1, 1, 1);
    glPushMatrix();
    glTranslatef(115, -200, 200);
    glScalef(0.01, 0.3, 0.01);
    glutWireCube(600);
    glPopMatrix();

    glColor3f(1, 1, 1);
    glPushMatrix();
    glTranslatef(115, -200, -200);
    glScalef(0.01, 0.3, 0.01);
    glutWireCube(600);
    glPopMatrix();

   //Door wield
    glColor3f(0, 0.25, 0.75);
    glPushMatrix();
    glTranslatef(115, -30, 200);
    glScalef(0.02, 0.3, 0.01);
    glutSolidCube(600);
    glPopMatrix();

    glColor3f(0, 0.25, 0.75);
    glPushMatrix();
    glTranslatef(115, -30, -200);
    glScalef(0.02, 0.3, 0.01);
    glutSolidCube(600);
    glPopMatrix();

//
    glColor3f(0.75, 0.75, 0.75);
    glPushMatrix();
    glTranslatef(320, -29, 200);
    glScalef(0.01, 0.28, 0.01);
    glutSolidCube(600);
    glPopMatrix();

    glColor3f(0.75, 0.75, 0.75);
    glPushMatrix();
    glTranslatef(320, -29, -200);
    glScalef(0.01, 0.28, 0.01);
    glutSolidCube(600);
    glPopMatrix();
}

void bottom()
{
    glColor3f(0, 0, 1);
    glPushMatrix();
    glTranslatef(0, -290, 0);
    glScalef(1.5, 0.01, 0.666667);
    glutSolidCube(600);
    glColor3f(1,1,1);
    glutWireCube(600);
    glPopMatrix();
}

void front()
{
    glColor3f(0, 0, 1);
    glPushMatrix();
    glTranslatef(-450, -200, 0);
    glScalef(0.01, 0.3, 0.666667);
    glutSolidCube(600);
    glColor3f(1,1,1);
    glutWireCube(600);
    glPopMatrix();

    // Bend
    glColor3f(1, 1, 1);
    glPushMatrix();
    glTranslatef(-180, -25, 0);
    glRotatef(-45, 0, 0, 1);
    glScalef(0.002, 0.4, 0.666667);
    glutWireCube(600);
    glPopMatrix();

    //front door
    glColor3f(1, 1, 1);
    glPushMatrix();
    glTranslatef(-260, -200, -200);
    glScalef(0.01, 0.3, 0.01);
    glutWireCube(600);
    glPopMatrix();

    glColor3f(1, 1, 1);
    glPushMatrix();
    glTranslatef(-260, -200, 200);
    glScalef(0.01, 0.3, 0.01);
    glutWireCube(600);
    glPopMatrix();
}

void back()
{
    glColor3f(0, 0, 1);
    glPushMatrix();
    glTranslatef(450, -200, 0);
    glScalef(0.01, 0.3, 0.666667);
    glutSolidCube(600);
    glColor3f(1,1,1);
    glutWireCube(600);
    glPopMatrix();

    //backglass
    glColor3f(1, 1, 1);
    glPushMatrix();
    glTranslatef(387.5, -25, 0);
    glRotatef(36, 0, 0, 1);
    glScalef(0.01, 0.35, 0.666667);
    glutWireCube(600);
    glPopMatrix();
}

void wheel(int x, int y, int z)
{
    float th;
    glColor3f(1, 1, 0.8);
    for(int j= 0 ; j< 50; j+=10)
{
    glPushMatrix();

    //glRotatef(wheelAngle, 0, 0, 1); // Rotate the wheel based on wheelAngle
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++)
    {
        th = i * 3.142 / 180;
        glVertex3f(x+80 * cos(th),y+ 80 * sin(th), z+j);
    }
    glEnd();
    glPopMatrix();
}
}

void border()
{

}
void MYCar()
{
    front();
    back();
    top();
    bottom();
    left();
    right();
    wheel(-330,-330,140);
    wheel(330,-330,140);
    wheel(-330,-330,-180);
    wheel(330,-330,-180);
}

void display()
{
    angle += 0.02;
    //wheelAngle += 2.0; // Adjust the wheel rotation speed

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glRotatef(angle, 1, 1, 0);
    MYCar();
    glutSwapBuffers();
    glutPostRedisplay();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(800, 800);
    glutCreateWindow("Rotating Car");

    init();
    glutDisplayFunc(display);
    glEnable(GL_DEPTH_TEST);

    glutMainLoop();

    return 0;
}
