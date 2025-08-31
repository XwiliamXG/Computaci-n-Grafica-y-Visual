#include <GL/glut.h>

void dibujar() {
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-3,3,-3,3);

	glClear(GL_COLOR_BUFFER_BIT); //Borramos la pantalla
	glColor3f(0.0, 0.0, 0.0); //Color de fondo negro

	glColor3f(0.0, 1.0, 0.0); // Verde
	glBegin(GL_LINES);
		glVertex2f(-2.5, 2.0);
		glVertex2f(2.5, -1.0);	
	glEnd();
	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(300, 400);
	glutInitDisplayMode(GLUT_SINGLE);
	glutCreateWindow("Dibujando una Linea Recta GL_LINE!!!");
	glutDisplayFunc(dibujar);
	glutMainLoop();
	return 0;
}