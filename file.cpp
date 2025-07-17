#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include<math.h>
# define PI 3.14159265358979323846

int slide=0;

float flow0=56.0;
float flow1=66.0;
float flow2=29.50;
float flow3=85.0;
float flow4=0;
float flow5=-15;
float flow6=206;
float flow7=208;

void welcomeDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glColor3f(255,215,0);
	glRasterPos3f(25,95,0);
	char msg1[] = "VIDYA VIKAS INSTITUTE OF ENGINEERING, MYSORE - 570028";
	for(int i=0;i<strlen(msg1);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,msg1[i]);

	glColor3f(1,0,1);
	glRasterPos3f(25.5,90,0);
	char msg2[] = "DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING";
	for(int i=0;i<strlen(msg2);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,msg2[i]);

	glColor3f(1,1,1);
	glRasterPos3f(33,80,0);
	char msg3[] = "COMPUTER GRAPHICS MINI-PROJECT ON";
	for(int i=0;i<strlen(msg3);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,msg3[i]);

	glColor3f(1,0,1);
	glRasterPos3f(41,75,0);
	char msg4[] = "HYDRO POWER PLANT";
	for(int i=0;i<strlen(msg4);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,msg4[i]);

	glColor3f(1,1,1);
	glRasterPos3f(44,55,0);
	char msg5[] = "SUBMITTED BY";
	for(int i=0;i<strlen(msg5);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,msg5[i]);


	glColor3f(255,215,0);
	glRasterPos3f(32.5,49,0);
	char msg6[] = "M ARSHAD    4VM20CS036";
	for(int i=0;i<strlen(msg6);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,msg6[i]);


	glColor3f(255,215,0);
	glRasterPos3f(32.5,44,0);
	char msg7[] = "M D TARUN       4VM20CS037";
	for(int i=0;i<strlen(msg7);i++)
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,msg7[i]);



	glColor3f(0,191,255);
	glRasterPos3f(85,10,0);
	char msg11[] = "Press 's' to start";
	for(int i=0;i<strlen(msg11);i++)
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15,msg11[i]);

	glutSwapBuffers();
}

int hydro=1;

void myinit()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,100,0,100);

}

void start()
{
 	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
		glColor3ub(1,1,1);
 		glVertex2d(0,0);
		glVertex2d(450,0);
 		glVertex2d(450,450);
 		glColor3f(0,26,29);
 		glVertex2d(0,450);
 		glColor3f(0,26,29);
 		glVertex2d(0,0);
 	glEnd();
}
void main_color()
{
	glColor3f(0.0,0.3,0.0);
    glBegin(GL_POLYGON);
        glVertex2i(0,40);
        glVertex2i(100,40);
        glVertex2i(100, 50);
        glVertex2i(0,50);
    glEnd();

    glColor3f(0.0,0.0,0.0);
   	glBegin(GL_POLYGON);
        glVertex2i(0,45);
        glVertex2i(100,45);
        glVertex2i(100, 100);
        glVertex2i(0,100);
    glEnd();
}

void dam()
{
	glColor3f(0.22, 0.11, 0.0);
    glBegin(GL_POLYGON);
        glVertex2i(15,0);
        glVertex2i(100,0);
        glVertex2i(100, 40);
        glVertex2i(30,40);
        glVertex2i(21,70);
        glVertex2i(21,80);
        glVertex2i(15, 80);
  	glEnd();
}

void water()
{
	glColor3f(0.22, 0.56, 0.98);
    glBegin(GL_POLYGON);
        glVertex2i(0,0);
        glVertex2i(15,0);
        glVertex2i(15, 68);
        glVertex2i(0,68);
  	glEnd();

}

void stand()
{
	glColor3f(0.2, 0.2, 0.2);
    glBegin(GL_POLYGON);
        glVertex2i(32,40);
        glVertex2i(42,40);
        glVertex2i(42,43);
        glVertex2i(32,43);
  	glEnd();
}

void transformer()
{
	glColor3f(0.50, 0.0, 0.50);
    glBegin(GL_POLYGON);
        glVertex2i(60,40);
        glVertex2i(70,40);
        glVertex2i(70,51);
        glVertex2i(60,51);
  	glEnd();

	glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINE_LOOP);
        glVertex2i(62,43);
        glVertex2i(68,43);
        glVertex2i(68,51);
        glVertex2i(62,51);
    glEnd();

	glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
        glLineWidth(1.5);
        glVertex2i(60,43);
        glVertex2i(62,43);
        glVertex2i(60,45);
        glVertex2i(62,45);
        glVertex2i(60,47);
        glVertex2i(62,47);
        glVertex2i(60,49);
        glVertex2i(62,49);
        glVertex2i(68,43);
        glVertex2i(70,43);
        glVertex2i(68,45);
        glVertex2i(70,45);
        glVertex2i(68,47);
        glVertex2i(70,47);
        glVertex2i(68,49);
        glVertex2i(70,49);
    glEnd();

	glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
        glVertex2i(62,53);
        glVertex2i(68,53);
        glVertex2i(68,55);
        glVertex2i(62,55);
    glEnd();

	glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
        glVertex2i(62,55);
        glVertex2i(68,55);
        glVertex2i(68,57);
        glVertex2i(62,57);
  	glEnd();

	glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
        glLineWidth(1.5);
        glVertex2i(64,51);
        glVertex2i(64,53);
        glVertex2i(66,51);
        glVertex2i(66,53);
  	glEnd();

    glBegin(GL_LINE_LOOP);
        glColor3f(0.0,0.0,0.0);
        glColor3f(1.0, 1.0, 1.0);
        glVertex2i(62,55);
        glVertex2i(68,55);
        glVertex2i(68,57);
        glVertex2i(62,57);
 	glEnd();

	glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINE_LOOP);
        glVertex2i(62,53);
        glVertex2i(68,53);
        glVertex2i(68,55);
        glVertex2i(62,55);
  	glEnd();

	glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
        glLineWidth(3);
        glVertex2i(64,57);
        glVertex2i(64,58);
        glVertex2i(66,57);
        glVertex2i(66,58);
  	glEnd();

  	glColor3f(0.0,0.0,0.0);
   	glBegin(GL_LINES);
        glLineWidth(3);
        glVertex2i(62,55);
        glVertex2i(68,55);
        glVertex2i(68,57);
        glVertex2i(62,57);
  	glEnd();
}

void drawsemicircle(GLfloat x, GLfloat y, GLfloat r, GLfloat g, GLfloat b, GLfloat sx, GLfloat sy, GLfloat radius)
{
	glPushMatrix();
	glTranslatef(x, y, 0);
    glBegin(GL_LINES);
    	if(flow3>=185)
			glColor3f(1.0, 1.0, 0.0);
		else
        	glColor3f(0.5, 0.5, 0.5);
    	for (GLfloat i = -13; i < 80; i += 0.01)
    	{
        	glVertex2f(radius * sin(i * PI / 180), radius * cos(i * PI / 180));
    	}
    glEnd();
    glPopMatrix();
}
void drawsemicircle1(GLfloat x, GLfloat y, GLfloat r, GLfloat g, GLfloat b, GLfloat sx, GLfloat sy, GLfloat radius)
{
	glPushMatrix();
	glTranslatef(x, y, 0);
    glBegin(GL_LINES);
        if(flow3>=185)
			glColor3f(1.0, 1.0, 0.0);
		else
            glColor3f(0.5, 0.5, 0.5);
    	for (GLfloat i = 13; i < 80; i += 0.01)
    	{
        	glVertex2f(radius * sin(i * PI / 180), radius * cos(i * PI / 180));
    	}
    glEnd();
    glPopMatrix();
}

void wires()
{
    glPushMatrix();
    glTranslatef(0,-25,0);
    drawsemicircle(57.6,110.5,1,1,1,1,1,-28);
 	glPopMatrix();

  	glPushMatrix();
    glTranslatef(0,-30,0);
    drawsemicircle1(72.5,116,1,1,1,1,1,-29);
 	glPopMatrix();
}

void tower()
{
	glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_STRIP);
    glLineWidth(5);
    glVertex2i(33.25,43);
    glVertex2i(34,74);
    glVertex2i(37,89);
    glVertex2i(40,74);
    glVertex2i(41.25,43);
    glEnd();
}

void towerhead()
{
	glColor3f(1.0,1.0,1.0);
    glBegin(GL_LINE_LOOP);
    glLineWidth(5);
    glVertex2i(30,81.5);
    glVertex2i(34,76);
    glVertex2i(40,76);
    glVertex2i(44,81.5);
    glVertex2i(38,85);
    glVertex2i(36,85);
    glEnd();
}

void turbine()
{
	glColor3f(0.75, 0.75, 0.5);
   	glBegin(GL_POLYGON);
        glVertex2i(75,40);
        glVertex2i(77,40);
        glVertex2i(77,55);
        glVertex2i(75,55);
  	glEnd();

	glColor3f(0.75, 0.75, 0.5);
  	glBegin(GL_POLYGON);
        glVertex2i(75,52);
        glVertex2i(90,52);
        glVertex2i(90,55);
        glVertex2i(75,55);
  	glEnd();

    glColor3f(0.75, 0.75, 0.5);
  	glBegin(GL_POLYGON);
        glVertex2i(88,40);
        glVertex2i(90,40);
        glVertex2i(90,55);
        glVertex2i(88,55);
  	glEnd();

  //turnine's pipe lower
  	glColor3f(0.25,0.45,0.25);
    glBegin(GL_POLYGON);
    	glVertex2i(82,52);
    	glVertex2i(82,30.5);
    	glVertex2i(83,30.5);
    	glVertex2i(83,52);
    glEnd();

    //turnine's pipe upper
    glColor3f(0.25,0.45,0.25);
    glBegin(GL_POLYGON);
    	glVertex2i(82,60);
    	glVertex2i(82,55);
    	glVertex2i(83,55);
    	glVertex2i(83,60);
    glEnd();

    //turnine's pipe top small part
    glColor3f(0.25,0.45,0.25);
    glBegin(GL_POLYGON);
    	glVertex2f(81.8,60);
    	glVertex2f(83.2,60);
    	glVertex2f(83.2,61.4);
    	glVertex2f(81.8,61.4);
    glEnd();

    //turbine's horizontal line
    glColor3f(0.25,0.45,0.25);
    glBegin(GL_POLYGON);
    	glVertex2f(79.5,47.6);
    	glVertex2f(85.5,47.6);
    	glVertex2f(85.5,49);
    	glVertex2f(79.5,49);
    glEnd();

  //2nd half
    glColor3f(0.75, 0, 0.75);
  	glBegin(GL_POLYGON);
        glVertex2f(80,28.5);
        glVertex2f(85,28.5);
        glVertex2f(85,30.5);
        glVertex2f(80,30.5);
  	glEnd();

	glColor3f(0, 0, 0.75);
  	glBegin(GL_POLYGON);
        glVertex2f(81,24.5);
        glVertex2f(84,24.5);
        glVertex2f(84,28.5);
        glVertex2f(81,28.5);
  	glEnd();

	glColor3f(0.25, 0.35, 0.25);
  	glBegin(GL_POLYGON);
        glVertex2f(81,20.5);
        glVertex2f(84,20.5);
        glVertex2f(85,23.5);
        glVertex2f(85,24.5);
        glVertex2f(80,24.5);
        glVertex2f(80,23.5);
  	glEnd();

  	hydro++;
  	if(flow3>=180 && (hydro%2==0))
	{
		glColor3f(0,0,0);
  		glBegin(GL_LINE_LOOP);
    		glVertex2f(81,20.5);
    		glVertex2f(80,23.5);
    		glVertex2f(80,24.5);
    		glVertex2f(85,24.5);
    		glVertex2f(85,23.5);
    		glVertex2f(84,20.5);
  		glEnd();
  	}

  	if(flow3>=180 && (hydro%2==1))
	{
		glColor3f(0,0,0);
  		glBegin(GL_LINE_LOOP);
    		glVertex2f(82,20.5);
    		glVertex2f(81,23.5);
    		glVertex2f(81,24.5);
    		glVertex2f(84,24.5);
    		glVertex2f(84,23.5);
    		glVertex2f(83,20.5);
  		glEnd();
  	}

	glColor3f(0, 0, 0.75);
  	glBegin(GL_POLYGON);
        glVertex2f(81,19.5);
        glVertex2f(84,19.5);
        glVertex2f(84,20.5);
        glVertex2f(81,20.5);
  	glEnd();

	glColor3f(1, 0.5, 0.75);
  	glBegin(GL_TRIANGLES);
        glVertex2f(81,19.5);
        glVertex2f(82.5,16.5);
        glVertex2f(84,19.5);
  	glEnd();
}

void waterflow(int value)
{
    if(flow0>=66)
    {
        flow0=66;
        flow1+=2;
    	if(flow1>=90)
    	{
        	flow1=90;
        	flow2-=2;
        	if(flow2<=12)
        	{
            	flow2=12;
            	flow3+=2;
            	if(flow3>=185.5)
            	{
                	flow3=185.5;
                	flow4-=2;
                	if(flow4<=-15)
					{
                    	flow4=-15;
                    	flow5-=2;
                    	if(flow5<=-46)
						{
                        	flow5=-46;
                        	flow6+=2;
                        	if(flow6>=208)
							{
                            	flow6=208;
                            	flow7+=2;
                            	if(flow7>=226)
								{
                                	flow7=226;
                            	}
                        	}
                    	}
                	}
            	}
        	}
    	}
    }
    flow0+=2;
    glutPostRedisplay();
    glutTimerFunc(100,waterflow,1);
}

void waterflow()
{
    glPushMatrix();
    //entry
    glColor3f(0.22, 0.56, 0.98);
   	glBegin(GL_POLYGON);
    	glVertex2f(56,13);
    	glVertex2f(flow0,23);
    	glVertex2f(flow0,30);
    	glVertex2f(56,38);
  	glEnd();

  	//1st
  	glColor3f(0.22, 0.56, 0.98);
   	glBegin(GL_POLYGON);
    	glVertex2f(66,23.5);
    	glVertex2f(flow1,23.5);
    	glVertex2f(flow1,29.5);
    	glVertex2f(66,29.5);
  	glEnd();

  	//2nd
  	glColor3f(0.22, 0.56, 0.98);
	glBegin(GL_POLYGON);
    	glVertex2f(85,29.5);
    	glVertex2f(85,flow2);
    	glVertex2f(90,flow2);
    	glVertex2f(90,29.5);
 	glEnd();

  	//3rd
  	glColor3f(0.22, 0.56, 0.98);
   	glBegin(GL_POLYGON);
    	glVertex2f(85,12);
    	glVertex2f(85,0);
    	glVertex2f(flow3,0);
    	glVertex2f(flow3,12);
  	glEnd();

    //4th
    glColor3f(0.22, 0.56, 0.98);
   	glBegin(GL_POLYGON);
    	glVertex2f(185.5,0);
    	glVertex2f(180.5,0);
    	glVertex2f(180.5,flow4);
    	glVertex2f(185.5,flow4);
  	glEnd();

  	//5th
  	glColor3f(0.22, 0.56, 0.98);
  	glBegin(GL_POLYGON);
    	glVertex2f(180.5,-15);
    	glVertex2f(206,-15);
    	glVertex2f(206,flow5);
    	glVertex2f(180.5,flow5);
  	glEnd();

  	//6th
  	glColor3f(0.22, 0.56, 0.98);
  	glBegin(GL_POLYGON);
    	glVertex2f(206,-26);
    	glVertex2f(flow6,-26);
    	glVertex2f(flow6,-46);
    	glVertex2f(206,-46);
  	glEnd();

  	//7th
  	glColor3f(0.22, 0.56, 0.98);
  	glBegin(GL_POLYGON);
    	glVertex2f(flow7,-46);
    	glVertex2f(208,-46);
    	glVertex2f(208,-26);
    	glVertex2f(flow7,-26);
  	glEnd();
  glPopMatrix();
}

void passage()
{
	//water passage
	glColor3f(0.6,0.6,0.5);
  	glBegin(GL_POLYGON);
    	glVertex2f(56,22.5);
    	glVertex2f(66,22.5);
    	glVertex2f(66,29.4);
    	glVertex2f(56,29.4);
  	glEnd();

    glColor3f(0.6,0.6,0.5);
  	glBegin(GL_POLYGON);
    	glVertex2f(66,22.5);
    	glVertex2f(90,22.5);
    	glVertex2f(90,29.4);
    	glVertex2f(66,29.4);
  	glEnd();

	glColor3f(0.6,0.6,0.5);
  	glBegin(GL_POLYGON);
    	glVertex2f(77,23.5);
    	glVertex2f(77,0);
    	glVertex2f(82.5,0);
    	glVertex2f(90,0);
    	glVertex2f(90,23.5);
  	glEnd();

    glColor3f(0.6,0.6,0.5);
  	glBegin(GL_POLYGON);
    	glVertex2f(91,10);
    
    	glVertex2f(100,10);
    	glVertex2f(100,0);
    	glVertex2f(90,0);
    	glVertex2f(90,10);
  	glEnd();
}

void passage2()
{
	//water passage
	glColor3f(0.6,0.6,0.5);
  	glBegin(GL_POLYGON);
    	glVertex2f(56,12);
    	glVertex2f(68.5,22.5);
    	glVertex2f(68.5,30.5);
    	glVertex2f(56,39.2);
  	glEnd();

	glColor3f(0.6,0.6,0.5);
  	glBegin(GL_POLYGON);
    	glVertex2f(66,22.5);
    	glVertex2f(90.5,22.5);
    	glVertex2f(90.5,30.5);
    	glVertex2f(66,30.5);
  	glEnd();

	glColor3f(0.6,0.6,0.5);
  	glBegin(GL_POLYGON);
	    glVertex2f(84.5,29.5);
	    glVertex2f(84.5,12);
	    glVertex2f(90.5,12);
	    glVertex2f(90.5,29.5);
  	glEnd();

  	glColor3f(0.6,0.6,0.5);
  	glBegin(GL_POLYGON);
	    glVertex2f(84.5,12.8);
	    glVertex2f(84.5,-1);
	    glVertex2f(140,-1);
	    glVertex2f(140,12.8);
  	glEnd();
}

void drawsemicircle10(GLfloat x, GLfloat y, GLfloat r, GLfloat g, GLfloat b, GLfloat sx, GLfloat sy, GLfloat radius)
{
	glPushMatrix();
	glTranslatef(x, y, 0);
    glBegin(GL_LINES);
    if(flow3>=185)
		glColor3f(1.0, 1.0, 0.0);
	else
        glColor3f(0.5, 0.5, 0.5);
    for (GLfloat i = -0; i < 45; i += 0.01)
    {
        glVertex2f(radius * sin(i * PI / 180), radius * cos(i * PI / 180));
    }
    glEnd();
    glPopMatrix();
}

void drawsemicircle11(GLfloat x, GLfloat y, GLfloat r, GLfloat g, GLfloat b, GLfloat sx, GLfloat sy, GLfloat radius)
{
	glPushMatrix();
	glTranslatef(x, y, 0);
    glBegin(GL_LINES);
		if(flow3>=185)
			glColor3f(1.0, 1.0, 0.0);
		else
        	glColor3f(0.5, 0.5, 0.5);
    	for (GLfloat i = -0; i < 45; i += 0.01)
    	{
        	glVertex2f(radius * sin(i * PI / 180), radius * cos(i * PI / 180));
    	}
    glEnd();
    glPopMatrix();
}

void wires5()
{
    glPushMatrix();
    glTranslatef(0,-25,0);
    drawsemicircle10(76.7,95.6,1,1,1,1,1,-18);
 	glPopMatrix();

  	glPushMatrix();
   	glTranslatef(0,-30,0);
    drawsemicircle11(78.6,100.8,1,1,1,1,1,-18);
 	glPopMatrix();
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	main_color();
	dam();
	water();
	wires5();
	transformer();
	tower();
	stand();
	towerhead();
	passage();
	turbine();
	glPushMatrix();
	glTranslatef(-13,23,0);
	glScalef(0.5,0.5,0.5);
	passage2();
	waterflow();
	glPopMatrix();
	glFlush();
	wires();
	glColor3f(1.0, 0.0, 0.0);
	glColor3f(0,191,255);
	glRasterPos3f(80,90,0);
	char msg12[] = "Press 'b' to begin";
	for(int i=0;i<strlen(msg12);i++)
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15,msg12[i]);

  	glColor3f(0,191,255);
	glRasterPos3f(80,80,0);
	char msg13[] = "Press 'q' to quit";
	for(int i=0;i<strlen(msg13);i++)
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15,msg13[i]);
  	glutSwapBuffers();
}

void Key(unsigned char key, int x, int y)
{
 	if (key == 's')
    {
        glutInitWindowSize(1350, 680);
    	glutCreateWindow("Hydro Power Plant");
    	glutDisplayFunc(display);
    	glutKeyboardFunc(Key);
    	myinit();
    	glutMainLoop();
    }

    if (key == 'b')
    {
        glutTimerFunc(1,waterflow,1);
    }

	if (key == 'q')
    {
        exit(0);
    }
}

void display5()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	if(slide == 0)
		gluOrtho2D(0,200,0,200);
	else
    	gluOrtho2D(0,100,0,100);
	switch(slide)
	{
 		case 0:start();
		   		break;
 		case 1:display();
 		   		break;
		case 2:exit(0);
	}
	glFlush();
	glutSwapBuffers();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB |GLUT_DOUBLE);
    glutInitWindowSize(1350, 680);
    glutCreateWindow("Hydro Power Plant");
    glutKeyboardFunc(Key);
    glutDisplayFunc(welcomeDisplay);
    myinit();
    glutMainLoop();
    return 0;
}
