// moving car
#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
#include<time.h>

void delay(unsigned int mseconds) //delay function for the === car moving speed controlling,
{
  clock_t goal=mseconds+clock();
  while(goal>clock());
}
int x;
void move()   // move fnction for the car motion specified,
{
    {x = x + 500;}
    delay(90000);
    glutPostRedisplay();
}
void display(void)
 {
 	glClear(GL_COLOR_BUFFER_BIT);
 	glBegin(GL_LINE_LOOP);
 	 glVertex2f(-0.3+x,0.0);
 	 glVertex2f(0.3+x,0.0);
 	 glVertex2f(0.3+x,0.3);
   glVertex2f(0.2+x,0.3);
   glVertex2f(0.1+x,0.4);
   glVertex2f(-0.1+x,0.4);
   glVertex2f(-0.2+x,0.3);
   glVertex2f(-0.3+x,0.3);
   glEnd();
  glBegin(GL_LINE_LOOP);
   glVertex2f(-0.2+x,0.3);
   glVertex2f(0.2+x,0.3);
   glEnd();
  glBegin(GL_POINTS);
   for(int i=0;i<360;i++)
   {
    {
    glVertex3f((-0.18+x)+0.1*cos(3.14*i/180),0.0+0.1*sin(3.14*i/180),0.0);}
    glVertex3f((0.18+x)+.1*cos(3.14*i/180),0.0+0.1*sin(3.14*i/180),0.0);}
    glEnd();
    glFlush();
 }
 
int main(int argc, char **argv)
 {
 	glutInit(&argc,argv);
 	glutInitWindowSize(500,500);
 	glutCreateWindow("ex4");
 	glutDisplayFunc(display);
  glutIdleFunc(move);
 	glutMainLoop();
 	return 0;
 }
