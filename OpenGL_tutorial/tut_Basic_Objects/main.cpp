#include "GL/freeglut.h"
#include "ctime"
#include <time.h>
#include <iostream>
#include <array>
#include <cmath>
#include <cstdlib>
#include "DrawLib.hpp"
#include "Figure.h"
#include "FirstScene.hpp"
#include "SecondScene.hpp"
#include "ThirdScene.hpp"

Figure f = { .0, .0 };
Figure f2 = { .0, -1.0 };
Figure f3 = { .0, -2.0 };
Figure f4 = { .0, -2.0 };
Figure f5 = { .0, 2.0 };

Figure s = { .0, .0 };
Figure s1 = { .0, -1.0 };

Figure o = { .0, .0 };
Figure o1 = { 0.4, -0.6 };

Figure B = { .0, .0 };
//Figure c ={.0, .0};

//Figure z ={.0, .0};
//Figure r ={.0, .0};
//Figure Third ={.0, .0};


float SpeedY = 0.0045f;
float CoordY = 0.000001f;

void animate(int value) {
	glutPostRedisplay();
	glutTimerFunc(1000 / 60, animate, 0);

}

void drawAnima() {
	FirstBackground();
	f.pos.y += SpeedY;
	B.pos.y += SpeedY;

	DrawSpaceboard(f);
	Burn(B);
	if (f.pos.y > 2) {
		 glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		SecondBackground();
		f2.pos.y += SpeedY;
		DrawSpaceboard(f2);
		if (f2.pos.y > 2) {
			 glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
			ThirdBackground();
			f3.pos.y += SpeedY;
			DrawSpaceboard(f3);
			if (f3.pos.y > 2) {
				glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
				FourthBackground();
				Mars();
				f4.pos.y += SpeedY;
				DrawSpaceboard(f4);
				if (f4.pos.y > 2) {
					FifthBackground();
					f5.pos.y -= SpeedY;
					DrawSpaceboard(f5);
					if (f5.pos.y < 0) {
						f5.pos.y = 0;
						DrawSpaceboard(f5);

					}

				}

			}
		}
	}
}


int main(int argc, char* argv[]) {
	srand(0);

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(800, 800);
	glutCreateWindow("OpenGL Start Application");
	glutDisplayFunc(renderScene);
	glutTimerFunc(1000 / 60, animate, 1);

	glutMainLoop();

	return 0;

}
void renderScene(void) {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	FirstBackground();
	SecondBackground();
	ThirdBackground();
	Mars();
	FourthBackground();
	DrawSpaceboard(f);
	drawAnima();
	glutSwapBuffers();

}