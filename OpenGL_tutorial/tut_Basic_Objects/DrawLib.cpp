#define _USE_MATH_DEFINES
#include "DrawLib.hpp"
#include "Figure.h"
#include "GL/freeglut.h"
#include <cmath>

void DrawSpaceboard(Figure& f) { // Космический корабль
	glPushMatrix();
	glTranslatef(f.pos.x, f.pos.y, 0);

    glBegin(GL_POLYGON); //Тело
    glColor3ub(128, 128, 128);
    glVertex2d(-0.15, 0.4);
    glVertex2d(-0.15, -0.4);
    glVertex2d(0.15, -0.4);
    glVertex2d(0.15, 0.4);
    glEnd();


    glBegin(GL_POLYGON); //Нос
    glColor3ub(192, 192, 192);
    glVertex2d(-0.2, 0.4);
    glVertex2d(0.21, 0.4);
    glVertex2d(0, 0.7);
    glEnd();

    glBegin(GL_POLYGON); //Сопло
    glColor3ub(119, 136, 153);
    glVertex2d(0.1, -0.4);
    glVertex2d(-0.1, -0.4);
    glVertex2d(-0.14, -0.5);
    glVertex2d(0.14, -0.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(211, 211, 211);//Крыло левое
    glVertex2d(-0.15, 0.25);
    glVertex2d(-0.15, -0.4);
    glVertex2d(-0.25, -0.5);
    glVertex2d(-0.3, -0.6);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(211, 211, 211);//Крыло правое
    glVertex2d(0.15, 0.25);
    glVertex2d(0.15, -0.4);
    glVertex2d(0.25, -0.5);
    glVertex2d(0.3, -0.6);
    glEnd();
	glPopMatrix();
}


void Burn(Figure& B) {
	glPushMatrix();
	glTranslated(B.pos.x, B.pos.y, 0);
    glBegin(GL_POLYGON); //Огонь макс
    glColor3ub(255, 140, 0);
    glVertex2d(-0.1, -0.5);
    glVertex2d(0.1, -0.5);
    glVertex2d(0, -0.7);
    glEnd();

    glBegin(GL_POLYGON); //Огонь седена
    glColor3ub(255, 215, 0);
    glVertex2d(-0.065, -0.5);
    glVertex2d(0.065, -0.5);
    glVertex2d(0, -0.645);
    glEnd();

    glBegin(GL_POLYGON);//Огонь мин
    glColor3ub(255, 255, 0);
    glVertex2d(-0.03, -0.5);
    glVertex2d(0.03, -0.5);
    glVertex2d(0, -0.6);
    glEnd();
	glPopMatrix();
}