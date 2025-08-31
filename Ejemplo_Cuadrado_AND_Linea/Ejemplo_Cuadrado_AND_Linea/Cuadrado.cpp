//#include <GL/glut.h>
//
//void dibujar() {
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	gluOrtho2D(-3, 3, -3, 3);
//
//	glClear(GL_COLOR_BUFFER_BIT); //Borramos la pantalla
//	glColor3f(1.0, 1.0, 1.0); //Color de fondo blanco
//
//	glColor3f(0.5, 0.0, 0.5); // Morado
//	glBegin(GL_POLYGON);
//	glVertex2f(0.0, 0.0);
//	glVertex2f(2.5, 0.0);
//	glVertex2f(2.5, 2.5);
//	glVertex2f(0.0, 2.5);
//	glEnd();
//	glFlush();
//}
//
//int main(int argc, char** argv) {
//	glutInit(&argc, argv);
//	glutInitWindowPosition(100, 100);
//	glutInitWindowSize(300, 300);
//	glutInitDisplayMode(GLUT_SINGLE);
//	glutCreateWindow("Dibujando una Cuadrado  GL_POLYGON!!!");
//	glutDisplayFunc(dibujar);
//	glutMainLoop();
//	return 0;
//}