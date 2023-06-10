#include "FifthScene.hpp"
#include "Figure.h"
#include "DrawLib.hpp"
#include "GL/freeglut.h"

void FifthBackground() {

	glBegin(GL_QUADS); // небо
    glColor3ub(0, 0, 0);
	glVertex2f(-2, 1);
	glVertex2f(2, 1);
    glColor3ub(139, 0, 0);
	glVertex2f(2, -2);
	glVertex2f(-2, -2);

    glBegin(GL_QUADS);//Îãîíü ìèí
    glColor3ub(139, 0, 0);
    glVertex2d(1, 0);
    glColor3ub(178, 34, 34);
    glVertex2d(1, -1);
    glColor3ub(255, 127, 80);
    glVertex2d(-1, -1);
    glColor3ub(139, 0, 0);
    glVertex2d(-1, 0);

    glColor3ub(255, 127, 80);
    glVertex2d(-0.9, -0.4);
    glVertex2d(-0.7, -0.4);
    glVertex2d(-0.7, -0.2);
    glVertex2d(-0.9, -0.2);

    glColor3ub(178, 34, 34);
    glVertex2d(-0.88, -0.38);
    glVertex2d(-0.72, -0.38);
    glVertex2d(-0.72, -0.22);
    glVertex2d(-0.88, -0.22);

    glColor3ub(255, 127, 80);
    glVertex2d(-0.6, -0.4);
    glVertex2d(-0.4, -0.4);
    glVertex2d(-0.4, -0.2);
    glVertex2d(-0.6, -0.2);

    glColor3ub(178, 34, 34);
    glVertex2d(-0.58, -0.38);
    glVertex2d(-0.42, -0.38);
    glVertex2d(-0.42, -0.22);
    glVertex2d(-0.58, -0.22);

    glColor3ub(255, 127, 80);
    glVertex2d(-0.6, -0.4);
    glVertex2d(-0.4, -0.4);
    glVertex2d(-0.4, -0.2);
    glVertex2d(-0.6, -0.2);

    glColor3ub(178, 34, 34);
    glVertex2d(-0.58, -0.38);
    glVertex2d(-0.42, -0.38);
    glVertex2d(-0.42, -0.22);
    glVertex2d(-0.58, -0.22);


    glColor3ub(178, 34, 34);
    glVertex2d(0.22, -0.22);
    glVertex2d(0.38, -0.22);
    glVertex2d(0.38, -0.38);
    glVertex2d(0.22, -0.38);

    glColor3ub(255, 127, 80);
    glVertex2d(0.2, -0.2);
    glVertex2d(0.4, -0.2);
    glVertex2d(0.4, -0.4);
    glVertex2d(0.2, -0.4);

    glColor3ub(178, 34, 34);
    glVertex2d(0.22, -0.22);
    glVertex2d(0.38, -0.22);
    glVertex2d(0.38, -0.38);
    glVertex2d(0.22, -0.38);
    glColor3ub(255, 127, 80);
    glVertex2d(-0.9, -0.9);
    glVertex2d(-0.7, -0.9);
    glVertex2d(-0.7, -0.7);
    glVertex2d(-0.9, -0.7);

    glColor3ub(178, 34, 34);
    glVertex2d(-0.88, -0.88);
    glVertex2d(-0.72, -0.88);
    glVertex2d(-0.72, -0.72);
    glVertex2d(-0.88, -0.72);

    glColor3ub(255, 127, 80);
    glVertex2d(0.7, -0.7);
    glVertex2d(0.5, -0.7);
    glVertex2d(0.5, -0.5);
    glVertex2d(0.7, -0.5);

    glColor3ub(178, 34, 34);
    glVertex2d(0.68, -0.68);
    glVertex2d(0.52, -0.68);
    glVertex2d(0.52, -0.52);
    glVertex2d(0.68, -0.52);


    glColor3ub(255, 127, 80);
    glVertex2d(-0.2, -0.9);
    glVertex2d(-0.2, -0.7);
    glVertex2d(-0.0, -0.7);
    glVertex2d(-0.0, -0.9);

    glColor3ub(178, 34, 34);
    glVertex2d(-0.18, -0.88);
    glVertex2d(-0.18, -0.72);
    glVertex2d(-0.02, -0.72);
    glVertex2d(-0.02, -0.88);

    glColor3ub(255, 127, 80);
    glVertex2d(-0.0, -0.5);
    glVertex2d(-0.0, -0.7);
    glVertex2d(0.2, -0.7);
    glVertex2d(0.2, -0.5);

    glColor3ub(178, 34, 34);
    glVertex2d(0.02, -0.52);
    glVertex2d(0.02, -0.68);
    glVertex2d(0.18, -0.68);
    glVertex2d(0.18, -0.52);

    glColor3ub(255, 127, 80);
    glVertex2d(0.9, -0.9);
    glVertex2d(0.7, -0.7);
    glVertex2d(0.7, -0.7);
    glVertex2d(0.9, -0.9);

    glColor3ub(178, 34, 34);
    glVertex2d(0.88, -0.88);
    glVertex2d(0.72, -0.72);
    glVertex2d(0.72, -0.72);
    glVertex2d(0.88, -0.88);

    glEnd();
}