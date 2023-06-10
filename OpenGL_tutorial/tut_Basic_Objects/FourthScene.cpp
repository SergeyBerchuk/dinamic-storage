#include "FourthScene.hpp"
#include "GL/freeglut.h"
#include "Figure.h"
#include "DrawLib.hpp"
void FourthBackground() {
	glBegin(GL_QUADS);
	glColor3ub(139, 0, 0);
	glVertex2f(-2, 1);
	glVertex2f(2, 1);
    glColor3ub(0, 0, 0);
	glVertex2f(2, -2);
	glVertex2f(-2, -2);

}
void Mars() {
    glPushMatrix();
    glBegin(GL_QUADS);//Îãîíü ìèí
    glColor3ub(139, 0, 0);
    glVertex2d(1, 1);
    glColor3ub(178, 34, 34);
    glVertex2d(1, 0);
    glColor3ub(255, 127, 80);
    glVertex2d(-1, 0);
    glColor3ub(139, 0, 0);
    glVertex2d(-1, 1);

    glColor3ub(255, 127, 80);
    glVertex2d(-0.9, 0.0);
    glVertex2d(-0.7, 0.0);
    glVertex2d(-0.7, 0.2);
    glVertex2d(-0.9, 0.2);

    glColor3ub(178, 34, 34);
    glVertex2d(-0.88, 0.02);
    glVertex2d(-0.72, 0.02);
    glVertex2d(-0.72, 0.18);
    glVertex2d(-0.88, 0.18);

    glColor3ub(255, 127, 80);
    glVertex2d(-0.6, 0.4);
    glVertex2d(-0.4, 0.4);
    glVertex2d(-0.4, 0.6);
    glVertex2d(-0.6, 0.6);

    glColor3ub(178, 34, 34);
    glVertex2d(-0.58, 0.42);
    glVertex2d(-0.42, 0.42);
    glVertex2d(-0.42, 0.58);
    glVertex2d(-0.58, 0.58);

    glColor3ub(255, 127, 80);
    glVertex2d(0.2, 0.0);
    glVertex2d(0.4, 0.0);
    glVertex2d(0.4, 0.2);
    glVertex2d(0.2, 0.2);

    glColor3ub(178, 34, 34);
    glVertex2d(0.22, 0.02);
    glVertex2d(0.38, 0.02);
    glVertex2d(0.38, 0.18);
    glVertex2d(0.22, 0.18);

    glColor3ub(255, 127, 80);
    glVertex2d(0.9, 0.0);
    glVertex2d(0.7, 0.0);
    glVertex2d(0.7, 0.2);
    glVertex2d(0.9, 0.2);

    glColor3ub(178, 34, 34);
    glVertex2d(0.88, 0.02);
    glVertex2d(0.72, 0.02);
    glVertex2d(0.72, 0.18);
    glVertex2d(0.88, 0.18);

    glColor3ub(255, 127, 80);
    glVertex2d(0.9, 0.9);
    glVertex2d(0.7, 0.9);
    glVertex2d(0.7, 0.7);
    glVertex2d(0.9, 0.7);

    glColor3ub(178, 34, 34);
    glVertex2d(0.88, 0.88);
    glVertex2d(0.72, 0.88);
    glVertex2d(0.72, 0.72);
    glVertex2d(0.88, 0.72);

    glColor3ub(255, 127, 80);
    glVertex2d(0.8, 0.5);
    glVertex2d(0.6, 0.5);
    glVertex2d(0.6, 0.7);
    glVertex2d(0.8, 0.7);

    glColor3ub(178, 34, 34);
    glVertex2d(0.78, 0.52);
    glVertex2d(0.62, 0.52);
    glVertex2d(0.62, 0.68);
    glVertex2d(0.78, 0.68);


    glColor3ub(255, 127, 80);
    glVertex2d(-0.9, 0.9);
    glVertex2d(-0.7, 0.9);
    glVertex2d(-0.7, 0.7);
    glVertex2d(-0.9, 0.7);

    glColor3ub(178, 34, 34);
    glVertex2d(-0.88, 0.88);
    glVertex2d(-0.72, 0.88);
    glVertex2d(-0.72, 0.72);
    glVertex2d(-0.88, 0.72);

    glColor3ub(255, 127, 80);
    glVertex2d(0.2, 0.8);
    glVertex2d(0.2, 0.6);
    glVertex2d(0.0, 0.6);
    glVertex2d(0.0, 0.8);

    glColor3ub(178, 34, 34);
    glVertex2d(0.18, 0.78);
    glVertex2d(0.18, 0.62);
    glVertex2d(0.02, 0.62);
    glVertex2d(0.02, 0.78);

    glColor3ub(255, 127, 80);
    glVertex2d(-0.2, 0.2);
    glVertex2d(-0.2, -0.0);
    glVertex2d(-0.0, -0.0);
    glVertex2d(-0.0, 0.2);

    glColor3ub(178, 34, 34);
    glVertex2d(-0.18, 0.18);
    glVertex2d(-0.18, 0.02);
    glVertex2d(-0.02, 0.02);
    glVertex2d(-0.02, 0.18);

  
  

    glEnd();
    glPopMatrix();
}