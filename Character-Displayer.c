#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>

int width = 640;
int height = 480;

int line1_x1_point = 0.0f;
int line1_y1_point = 0.0f;
int line1_x2_point = 0.0f;
int line1_y2_point = 0.0f;

int line2_x1_point = 0.0f;
int line2_y1_point = 0.0f;
int line2_x2_point = 0.0f;
int line2_y2_point = 0.0f;

int line3_x1_point = 0.0f;
int line3_y1_point = 0.0f;
int line3_x2_point = 0.0f;
int line3_y2_point = 0.0f;

int line4_x1_point = 0.0f;
int line4_y1_point = 0.0f;
int line4_x2_point = 0.0f;
int line4_y2_point = 0.0f;

int line5_x1_point = 0.0f;
int line5_y1_point = 0.0f;
int line5_x2_point = 0.0f;
int line5_y2_point = 0.0f;

void init() {
	glClearColor(1.0f,1.0f,1.0f,0.0f);
	glColor3f(0,0,0);
	glLineWidth(5.0);
	glMatrixMode( GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,width,0,height);
}

void ResetValues() {
	line1_x1_point = 0.0f;
	line1_y1_point = 0.0f;
	line1_x2_point = 0.0f;
	line1_y2_point = 0.0f;

	line2_x1_point = 0.0f;
	line2_y1_point = 0.0f;
	line2_x2_point = 0.0f;
	line2_y2_point = 0.0f;

	line3_x1_point = 0.0f;
	line3_y1_point = 0.0f;
	line3_x2_point = 0.0f;
	line3_y2_point = 0.0f;

	line4_x1_point = 0.0f;
	line4_y1_point = 0.0f;
	line4_x2_point = 0.0f;
	line4_y2_point = 0.0f;

	line5_x1_point = 0.0f;
	line5_y1_point = 0.0f;
	line5_x2_point = 0.0f;
	line5_y2_point = 0.0f;
}

void MyLine(int x1_point, int y1_point, int x2_point, int y2_point) {
	glVertex3f(x1_point, y1_point, 0.0f);
	glVertex3f(x2_point, y2_point, 0.0f);
}

void MyDisplay(void) {
	glClear( GL_COLOR_BUFFER_BIT );
	
	glColor3ub(0,0,0);
	
	glBegin( GL_LINES );
	
		MyLine(line1_x1_point, line1_y1_point, line1_x2_point, line1_y2_point);
		MyLine(line2_x1_point, line2_y1_point, line2_x2_point, line2_y2_point);
		MyLine(line3_x1_point, line3_y1_point, line3_x2_point, line3_y2_point);
		MyLine(line4_x1_point, line4_y1_point, line4_x2_point, line4_y2_point);
		MyLine(line5_x1_point, line5_y1_point, line5_x2_point, line5_y2_point);
	
	glEnd();
	glFlush();
}

void MyKeyBoard( unsigned char key, int x, int y) {
	switch (key){
		case '1':
			ResetValues();
			line1_x1_point = 279.0f;
			line1_y1_point = height-119.0f;
			
			line1_x2_point = 368.0f;
			line1_y2_point = height-63.0f;
			
			line2_x1_point = 368.0f;
			line2_y1_point = height-63.0f;
			
			line2_x2_point = 368.0f;
			line2_y2_point = height-416.0f;
			MyDisplay();
			break;
		case '2':
			ResetValues();
			line1_x1_point = 217.0f;
			line1_y1_point = height-62.0f;
			
			line1_x2_point = 422.0f;
			line1_y2_point = height-62.0f;
			
			line2_x1_point = 422.0f;
			line2_y1_point = height-62.0f;
			
			line2_x2_point = 422.0f;
			line2_y2_point = height-240.0f;
			
			line3_x1_point = 422.0f;
			line3_y1_point = height-240.0f;
			
			line3_x2_point = 228.0f;
			line3_y2_point = height-240.0f;
			
			line4_x1_point = 228.0f;
			line4_y1_point = height-240.0f;
			
			line4_x2_point = 228.0f;
			line4_y2_point = height-417.0f;
			
			line5_x1_point = 228.0f;
			line5_y1_point = height-417.0f;
			
			line5_x2_point = 422.0f;
			line5_y2_point = height-417.0f;
			MyDisplay();
			break;
		case '3':
			ResetValues();
			line1_x1_point = 417.0f;
			line1_y1_point = height-63.0f;
			
			line1_x2_point = 417.0f;
			line1_y2_point = height-416.0f;
			
			line2_x1_point = 223.0f;
			line2_y1_point = height-63.0f;
			
			line2_x2_point = 417.0f;
			line2_y2_point = height-63.0f;
			
			line3_x1_point = 223.0f;
			line3_y1_point = height-240.0f;
			
			line3_x2_point = 417.0f;
			line3_y2_point = height-240.0f;
			
			line4_x1_point = 233.0f;
			line4_y1_point = height-417.0f;
			
			line4_x2_point = 417.0f;
			line4_y2_point = height-417.0f;
			MyDisplay();
			break;
		case '4':
			ResetValues();
			line1_x1_point = 423.0f;
			line1_y1_point = height-63.0f;
			
			line1_x2_point = 423.0f;
			line1_y2_point = height-416.0f;
			
			line2_x1_point = 216.0f;
			line2_y1_point = height-63.0f;
			
			line2_x2_point = 216.0f;
			line2_y2_point = height-240.0f;
			
			line3_x1_point = 216.0f;
			line3_y1_point = height-240.0f;
			
			line3_x2_point = 423.0f;
			line3_y2_point = height-240.0f;
			MyDisplay();
			break;
		case '5':
			ResetValues();
			line1_x1_point = 410.0f;
			line1_y1_point = height-63.0f;
			
			line1_x2_point = 229.0f;
			line1_y2_point = height-63.0f;
			
			line2_x1_point = 229.0f;
			line2_y1_point = height-63.0f;
			
			line2_x2_point = 229.0f;
			line2_y2_point = height-240.0f;
			
			line3_x1_point = 229.0f;
			line3_y1_point = height-240.0f;
			
			line3_x2_point = 410.0f;
			line3_y2_point = height-240.0f;
			
			line4_x1_point = 411.0f;
			line4_y1_point = height-240.0f;
			
			line4_x2_point = 411.0f;
			line4_y2_point = height-417.0f;
			
			line5_x1_point = 411.0f;
			line5_y1_point = height-417.0f;
			
			line5_x2_point = 229.0f;
			line5_y2_point = height-417.0f;
			MyDisplay();
			break;
		case '6':
			ResetValues();
			line1_x1_point = 418.0f;
			line1_y1_point = height-63.0f;
			
			line1_x2_point = 221.0f;
			line1_y2_point = height-63.0f;
			
			line2_x1_point = 221.0f;
			line2_y1_point = height-63.0f;
			
			line2_x2_point = 221.0f;
			line2_y2_point = height-417.0f;
			
			line3_x1_point = 221.0f;
			line3_y1_point = height-417.0f;
			
			line3_x2_point = 418.0f;
			line3_y2_point = height-417.0f;
			
			line4_x1_point = 418.0f;
			line4_y1_point = height-417.0f;
			
			line4_x2_point = 418.0f;
			line4_y2_point = height-240.0f;
			
			line5_x1_point = 418.0f;
			line5_y1_point = height-240.0f;
			
			line5_x2_point = 221.0f;
			line5_y2_point = height-240.0f;
			MyDisplay();
			break;
		case '7':
			ResetValues();
			line1_x1_point = 205.0f;
			line1_y1_point = height-63.0f;
			
			line1_x2_point = 434.0f;
			line1_y2_point = height-63.0f;
			
			line2_x1_point = 434.0f;
			line2_y1_point = height-63.0f;
			
			line2_x2_point = 267.0f;
			line2_y2_point = height-416.0f;
			MyDisplay();
			break;
		case '8':
			ResetValues();
			line1_x1_point = 196.0f;
			line1_y1_point = height-63.0f;
			
			line1_x2_point = 443.0f;
			line1_y2_point = height-63.0f;
			
			line2_x1_point = 443.0f;
			line2_y1_point = height-63.0f;
			
			line2_x2_point = 443.0f;
			line2_y2_point = height-416.0f;
			
			line3_x1_point = 443.0f;
			line3_y1_point = height-416.0f;
			
			line3_x2_point = 196.0f;
			line3_y2_point = height-416.0f;
			
			line4_x1_point = 196.0f;
			line4_y1_point = height-416.0f;
			
			line4_x2_point = 196.0f;
			line4_y2_point = height-63.0f;
			
			line5_x1_point = 443.0f;
			line5_y1_point = height-240.0f;
			
			line5_x2_point = 196.0f;
			line5_y2_point = height-240.0f;
			MyDisplay();
			break;
		case '9':
			ResetValues();
			line1_x1_point = 417.0f;
			line1_y1_point = height-63.0f;
			
			line1_x2_point = 417.0f;
			line1_y2_point = height-416.0f;
			
			line2_x1_point = 223.0f;
			line2_y1_point = height-63.0f;
			
			line2_x2_point = 417.0f;
			line2_y2_point = height-63.0f;
			
			line3_x1_point = 223.0f;
			line3_y1_point = height-240.0f;
			
			line3_x2_point = 417.0f;
			line3_y2_point = height-240.0f;
			
			line4_x1_point = 233.0f;
			line4_y1_point = height-417.0f;
			
			line4_x2_point = 417.0f;
			line4_y2_point = height-417.0f;
			
			line5_x1_point = 223.0f;
			line5_y1_point = height-63.0f;
			
			line5_x2_point = 223.0f;
			line5_y2_point = height-240.0f;
			MyDisplay();
			break;
		case '0':
			ResetValues();
			line1_x1_point = 196.0f;
			line1_y1_point = height-63.0f;
			
			line1_x2_point = 443.0f;
			line1_y2_point = height-63.0f;
			
			line2_x1_point = 443.0f;
			line2_y1_point = height-63.0f;
			
			line2_x2_point = 443.0f;
			line2_y2_point = height-416.0f;
			
			line3_x1_point = 443.0f;
			line3_y1_point = height-416.0f;
			
			line3_x2_point = 196.0f;
			line3_y2_point = height-416.0f;
			
			line4_x1_point = 196.0f;
			line4_y1_point = height-416.0f;
			
			line4_x2_point = 196.0f;
			line4_y2_point = height-63.0f;
			MyDisplay();
			break;
		case 'a':
		case 'A':
			ResetValues();
			line1_x1_point = 205.0f;
			line1_y1_point = height-416.0f;
			
			line1_x2_point = width/2;
			line1_y2_point = height-63.0f;
			
			line2_x1_point = width/2;
			line2_y1_point = height-63.0f;
			
			line2_x2_point = 434.0f;
			line2_y2_point = height-416.0f;
			
			line3_x1_point = 262.0f;
			line3_y1_point = height/2;
			
			line3_x2_point = 377.0f;
			line3_y2_point = height/2;
			MyDisplay();
			break;
		case 'b':
		case 'B':
			ResetValues();
			line1_x1_point = 196.0f;
			line1_y1_point = height-63.0f;
			
			line1_x2_point = 443.0f;
			line1_y2_point = height-63.0f;
			
			line2_x1_point = 443.0f;
			line2_y1_point = height-63.0f;
			
			line2_x2_point = 443.0f;
			line2_y2_point = height-416.0f;
			
			line3_x1_point = 443.0f;
			line3_y1_point = height-416.0f;
			
			line3_x2_point = 196.0f;
			line3_y2_point = height-416.0f;
			
			line4_x1_point = 196.0f;
			line4_y1_point = height-416.0f;
			
			line4_x2_point = 196.0f;
			line4_y2_point = height-63.0f;
			
			line5_x1_point = 443.0f;
			line5_y1_point = height-240.0f;
			
			line5_x2_point = 196.0f;
			line5_y2_point = height-240.0f;
			MyDisplay();
			break;
		case 'c':
		case 'C':
			ResetValues();
			line1_x1_point = 220.0f;
			line1_y1_point = height-63.0f;
			
			line1_x2_point = 220.0f;
			line1_y2_point = height-416.0f;
			
			line2_x1_point = 220.0f;
			line2_y1_point = height-63.0f;
			
			line2_x2_point = 420.0f;
			line2_y2_point = height-63.0f;
			
			line3_x1_point = 220.0f;
			line3_y1_point = height-416.0f;
			
			line3_x2_point = 420.0f;
			line3_y2_point = height-416.0f;
			MyDisplay();
			break;
		case 'd':
		case 'D':
			ResetValues();
			line1_x1_point = 196.0f;
			line1_y1_point = height-63.0f;
			
			line1_x2_point = 443.0f;
			line1_y2_point = height-63.0f;
			
			line2_x1_point = 443.0f;
			line2_y1_point = height-63.0f;
			
			line2_x2_point = 443.0f;
			line2_y2_point = height-416.0f;
			
			line3_x1_point = 443.0f;
			line3_y1_point = height-416.0f;
			
			line3_x2_point = 196.0f;
			line3_y2_point = height-416.0f;
			
			line4_x1_point = 196.0f;
			line4_y1_point = height-416.0f;
			
			line4_x2_point = 196.0f;
			line4_y2_point = height-63.0f;
			MyDisplay();
			break;
		case 'e':
		case 'E':
			ResetValues();
			line1_x1_point = 220.0f;
			line1_y1_point = height-63.0f;
			
			line1_x2_point = 220.0f;
			line1_y2_point = height-416.0f;
			
			line2_x1_point = 220.0f;
			line2_y1_point = height-63.0f;
			
			line2_x2_point = 420.0f;
			line2_y2_point = height-63.0f;
			
			line3_x1_point = 220.0f;
			line3_y1_point = height/2;
			
			line3_x2_point = 420.0f;
			line3_y2_point = height/2;
			
			line4_x1_point = 220.0f;
			line4_y1_point = height-416.0f;
			
			line4_x2_point = 420.0f;
			line4_y2_point = height-416.0f;
			MyDisplay();
			break;
		case 'f':
		case 'F':
			ResetValues();
			line1_x1_point = 220.0f;
			line1_y1_point = height-63.0f;
			
			line1_x2_point = 220.0f;
			line1_y2_point = height-416.0f;
			
			line2_x1_point = 220.0f;
			line2_y1_point = height-63.0f;
			
			line2_x2_point = 420.0f;
			line2_y2_point = height-63.0f;
			
			line3_x1_point = 220.0f;
			line3_y1_point = height/2;
			
			line3_x2_point = 420.0f;
			line3_y2_point = height/2;
			MyDisplay();
			break;
		case 'g':
		case 'G':
			ResetValues();
			line1_x1_point = 418.0f;
			line1_y1_point = height-63.0f;
			
			line1_x2_point = 221.0f;
			line1_y2_point = height-63.0f;
			
			line2_x1_point = 221.0f;
			line2_y1_point = height-63.0f;
			
			line2_x2_point = 221.0f;
			line2_y2_point = height-417.0f;
			
			line3_x1_point = 221.0f;
			line3_y1_point = height-417.0f;
			
			line3_x2_point = 418.0f;
			line3_y2_point = height-417.0f;
			
			line4_x1_point = 418.0f;
			line4_y1_point = height-417.0f;
			
			line4_x2_point = 418.0f;
			line4_y2_point = height-240.0f;
			
			line5_x1_point = 418.0f;
			line5_y1_point = height-240.0f;
			
			line5_x2_point = width/2;
			line5_y2_point = height-240.0f;
			MyDisplay();
			break;
		case 'h':
		case 'H':
			ResetValues();
			line1_x1_point = 443.0f;
			line1_y1_point = height-63.0f;
			
			line1_x2_point = 443.0f;
			line1_y2_point = height-416.0f;
			
			line2_x1_point = 196.0f;
			line2_y1_point = height-416.0f;
			
			line2_x2_point = 196.0f;
			line2_y2_point = height-63.0f;
			
			line3_x1_point = 443.0f;
			line3_y1_point = height-240.0f;
			
			line3_x2_point = 196.0f;
			line3_y2_point = height-240.0f;
			MyDisplay();
			break;
		case 'i':
		case 'I':
			ResetValues();
			line1_x1_point = 196.0f;
			line1_y1_point = height-63.0f;
			
			line1_x2_point = 443.0f;
			line1_y2_point = height-63.0f;
			
			line2_x1_point = width/2;
			line2_y1_point = height-63.0f;
			
			line2_x2_point = width/2;
			line2_y2_point = height-416.0f;
			
			line3_x1_point = 443.0f;
			line3_y1_point = height-416.0f;
			
			line3_x2_point = 196.0f;
			line3_y2_point = height-416.0f;
			MyDisplay();
			break;
		case 'j':
		case 'J':
			ResetValues();
			line1_x1_point = 443.0f;
			line1_y1_point = height-63.0f;
			
			line1_x2_point = 443.0f;
			line1_y2_point = height-416.0f;
			
			line2_x1_point = 443.0f;
			line2_y1_point = height-416.0f;
			
			line2_x2_point = 196.0f;
			line2_y2_point = height-416.0f;
			
			line3_x1_point = 196.0f;
			line3_y1_point = height-416.0f;
			
			line3_x2_point = 196.0f;
			line3_y2_point = height-240.0f;
			MyDisplay();
			break;
		case 'k':
		case 'K':
			ResetValues();
			line1_x1_point = 196.0f;
			line1_y1_point = height-240.0f;
			
			line1_x2_point = 443.0f;
			line1_y2_point = height-63.0f;
			
			line2_x1_point = 196.0f;
			line2_y1_point = height-240.0f;
			
			line2_x2_point = 443.0f;
			line2_y2_point = height-416.0f;
			
			line3_x1_point = 196.0f;
			line3_y1_point = height-416.0f;
			
			line3_x2_point = 196.0f;
			line3_y2_point = height-63.0f;
			MyDisplay();
			break;
		case 'l':
		case 'L':
			ResetValues();
			line1_x1_point = 196.0f;
			line1_y1_point = height-416.0f;
			
			line1_x2_point = 196.0f;
			line1_y2_point = height-63.0f;
			
			line2_x1_point = 443.0f;
			line2_y1_point = height-416.0f;
			
			line2_x2_point = 196.0f;
			line2_y2_point = height-416.0f;
			MyDisplay();
			break;
		case 'm':
		case 'M':
			ResetValues();
			line1_x1_point = 1*width/5;
			line1_y1_point = height-416.0f;
			
			line1_x2_point = 1*width/5;
			line1_y2_point = height-63.0f;
			
			line2_x1_point = 1*width/5;
			line2_y1_point = height-63.0f;
			
			line2_x2_point = width/2;
			line2_y2_point = height-416.0f;
			
			line3_x1_point = width/2;
			line3_y1_point = height-416.0f;
			
			line3_x2_point = 4*width/5;
			line3_y2_point = height-63.0f;
			
			line4_x1_point = 4*width/5;
			line4_y1_point = height-63.0f;
			
			line4_x2_point = 4*width/5;
			line4_y2_point = height-416.0f;
			MyDisplay();
			break;
		case 'n':
		case 'N':
			ResetValues();
			line1_x1_point = 1.5*width/5;
			line1_y1_point = height-416.0f;
			
			line1_x2_point = 1.5*width/5;
			line1_y2_point = height-63.0f;
			
			line2_x1_point = 1.5*width/5;
			line2_y1_point = height-63.0f;
			
			line2_x2_point = 3.5*width/5;
			line2_y2_point = height-416.0f;
			
			line3_x1_point = 3.5*width/5;
			line3_y1_point = height-416.0f;
			
			line3_x2_point = 3.5*width/5;
			line3_y2_point = height-63.0f;
			MyDisplay();
			break;
		case 'o':
		case 'O':
			ResetValues();
			line1_x1_point = 196.0f;
			line1_y1_point = height-63.0f;
			
			line1_x2_point = 443.0f;
			line1_y2_point = height-63.0f;
			
			line2_x1_point = 443.0f;
			line2_y1_point = height-63.0f;
			
			line2_x2_point = 443.0f;
			line2_y2_point = height-416.0f;
			
			line3_x1_point = 443.0f;
			line3_y1_point = height-416.0f;
			
			line3_x2_point = 196.0f;
			line3_y2_point = height-416.0f;
			
			line4_x1_point = 196.0f;
			line4_y1_point = height-416.0f;
			
			line4_x2_point = 196.0f;
			line4_y2_point = height-63.0f;
			MyDisplay();
			break;
		case 'p':
		case 'P':
			ResetValues();
			line1_x1_point = 196.0f;
			line1_y1_point = height-63.0f;
			
			line1_x2_point = 443.0f;
			line1_y2_point = height-63.0f;
			
			line2_x1_point = 443.0f;
			line2_y1_point = height-63.0f;
			
			line2_x2_point = 443.0f;
			line2_y2_point = height-240.0f;
			
			line3_x1_point = 196.0f;
			line3_y1_point = height-416.0f;
			
			line3_x2_point = 196.0f;
			line3_y2_point = height-63.0f;
			
			line4_x1_point = 443.0f;
			line4_y1_point = height-240.0f;
			
			line4_x2_point = 196.0f;
			line4_y2_point = height-240.0f;
			MyDisplay();
			break;
		case 'q':
		case 'Q':
			ResetValues();
			line1_x1_point = 196.0f;
			line1_y1_point = height-63.0f;
			
			line1_x2_point = 443.0f;
			line1_y2_point = height-63.0f;
			
			line2_x1_point = 443.0f;
			line2_y1_point = height-63.0f;
			
			line2_x2_point = 443.0f;
			line2_y2_point = height-416.0f;
			
			line3_x1_point = 443.0f;
			line3_y1_point = height-416.0f;
			
			line3_x2_point = 196.0f;
			line3_y2_point = height-416.0f;
			
			line4_x1_point = 196.0f;
			line4_y1_point = height-416.0f;
			
			line4_x2_point = 196.0f;
			line4_y2_point = height-63.0f;
			
			line5_x1_point = 365.0f;
			line5_y1_point = height-325.0f;
			
			line5_x2_point = 485.0f;
			line5_y2_point = height-465.0f;
			MyDisplay();
			break;
		case 'r':
		case 'R':
			ResetValues();
			ResetValues();
			line1_x1_point = 196.0f;
			line1_y1_point = height-63.0f;
			
			line1_x2_point = 443.0f;
			line1_y2_point = height-63.0f;
			
			line2_x1_point = 443.0f;
			line2_y1_point = height-63.0f;
			
			line2_x2_point = 443.0f;
			line2_y2_point = height-240.0f;
			
			line3_x1_point = 196.0f;
			line3_y1_point = height-416.0f;
			
			line3_x2_point = 196.0f;
			line3_y2_point = height-63.0f;
			
			line4_x1_point = 443.0f;
			line4_y1_point = height-240.0f;
			
			line4_x2_point = 196.0f;
			line4_y2_point = height-240.0f;
			
			line5_x1_point = 196.0f;
			line5_y1_point = height-240.0f;
			
			line5_x2_point = 443.0f;
			line5_y2_point = height-416.0f;	
			MyDisplay();
			break;
		case 's':
		case 'S':
			ResetValues();
			line1_x1_point = 410.0f;
			line1_y1_point = height-63.0f;
			
			line1_x2_point = 229.0f;
			line1_y2_point = height-63.0f;
			
			line2_x1_point = 229.0f;
			line2_y1_point = height-63.0f;
			
			line2_x2_point = 229.0f;
			line2_y2_point = height-240.0f;
			
			line3_x1_point = 229.0f;
			line3_y1_point = height-240.0f;
			
			line3_x2_point = 410.0f;
			line3_y2_point = height-240.0f;
			
			line4_x1_point = 411.0f;
			line4_y1_point = height-240.0f;
			
			line4_x2_point = 411.0f;
			line4_y2_point = height-417.0f;
			
			line5_x1_point = 411.0f;
			line5_y1_point = height-417.0f;
			
			line5_x2_point = 229.0f;
			line5_y2_point = height-417.0f;
			MyDisplay();
			break;
		case 't':
		case 'T':
			ResetValues();
			line1_x1_point = width/4;
			line1_y1_point = height-63.0f;
			
			line1_x2_point = 3*width/4;
			line1_y2_point = height-63.0f;
			
			line2_x1_point = width/2;
			line2_y1_point = height-63.0f;
			
			line2_x2_point = width/2;
			line2_y2_point = height-416.0f;
			MyDisplay();
			break;
		case 'u':
		case 'U':
			ResetValues();
			line1_x1_point = 443.0f;
			line1_y1_point = height-63.0f;
			
			line1_x2_point = 443.0f;
			line1_y2_point = height-416.0f;
			
			line2_x1_point = 443.0f;
			line2_y1_point = height-416.0f;
			
			line2_x2_point = 196.0f;
			line2_y2_point = height-416.0f;
			
			line3_x1_point = 196.0f;
			line3_y1_point = height-416.0f;
			
			line3_x2_point = 196.0f;
			line3_y2_point = height-63.0f;
			MyDisplay();
			break;
		case 'v':
		case 'V':
			ResetValues();
			line1_x1_point = 205.0f;
			line1_y1_point = height-63.0f;
			
			line1_x2_point = width/2;
			line1_y2_point = height-416.0f;
			
			line2_x1_point = width/2;
			line2_y1_point = height-416.0f;
			
			line2_x2_point = 434.0f;
			line2_y2_point = height-63.0f;
			MyDisplay();
			break;
		case 'w':
		case 'W':
			ResetValues();
			line1_x1_point = 1*width/5;
			line1_y1_point = height-63.0f;
			
			line1_x2_point = 2*width/5;
			line1_y2_point = height-416.0f;
			
			line2_x1_point = 2*width/5;
			line2_y1_point = height-416.0f;
			
			line2_x2_point = width/2;
			line2_y2_point = height-63.0f;
			
			line3_x1_point = width/2;
			line3_y1_point = height-63.0f;
			
			line3_x2_point = 3*width/5;
			line3_y2_point = height-416.0f;
			
			line4_x1_point = 3*width/5;
			line4_y1_point = height-416.0f;
			
			line4_x2_point = 4*width/5;
			line4_y2_point = height-63.0f;
			MyDisplay();
			break;
		case 'x':
		case 'X':
			ResetValues();
			line1_x1_point = width/4;
			line1_y1_point = height-63.0f;
			
			line1_x2_point = 3*width/4;
			line1_y2_point = height-416.0f;
			
			line2_x1_point = 3*width/4;
			line2_y1_point = height-63.0f;
			
			line2_x2_point = width/4;
			line2_y2_point = height-416.0f;
			MyDisplay();
			break;
		case 'y':
		case 'Y':
			ResetValues();
			line1_x1_point = 210.0f;
			line1_y1_point = height-63.0f;
			
			line1_x2_point = width/2;
			line1_y2_point = height/2;
			
			line2_x1_point = 430.0f;
			line2_y1_point = height-63.0f;
			
			line2_x2_point = width/2;
			line2_y2_point = height/2;
			
			line3_x1_point = width/2;
			line3_y1_point = height/2;
			
			line3_x2_point = width/2;
			line3_y2_point = height-416.0f;
			MyDisplay();
			break;
		case 'z':
		case 'Z':
			ResetValues();
			line1_x1_point = 210.0f;
			line1_y1_point = height-63.0f;
			
			line1_x2_point = 430.0f;
			line1_y2_point = height-63.0f;
			
			line2_x1_point = 430.0f;
			line2_y1_point = height-63.0f;
			
			line2_x2_point = 210.0f;
			line2_y2_point = height-416.0f;
			
			line3_x1_point = 210.0f;
			line3_y1_point = height-416.0f;
			
			line3_x2_point = 430.0f;
			line3_y2_point = height-416.0f;
			MyDisplay();
			break;
		default:
			ResetValues();
			MyDisplay();
			break;
	}
}

void main(int argc, char **argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode( GLUT_SINGLE | GLUT_RGB );
	
	glutInitWindowSize(width,height);
	glutInitWindowPosition(500,100);
	
	glutCreateWindow("Character Displayer");
	
	init();
	
	glutDisplayFunc(MyDisplay);
	glutKeyboardFunc(MyKeyBoard);
	
	glutMainLoop();
}
