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
			MyDisplay();
			break;
		case '9':
			ResetValues();
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
			ResetValues();
			MyDisplay();
			break;
		case 'b':
			ResetValues();
			MyDisplay();
			break;
		case 'c':
			ResetValues();
			MyDisplay();
			break;
		case 'd':
			ResetValues();
			MyDisplay();
			break;
		case 'e':
			ResetValues();
			MyDisplay();
			break;
		case 'f':
			ResetValues();
			MyDisplay();
			break;
		case 'g':
			ResetValues();
			MyDisplay();
			break;
		case 'h':
			ResetValues();
			MyDisplay();
			break;
		case 'i':
			ResetValues();
			MyDisplay();
			break;
		case 'j':
			ResetValues();
			MyDisplay();
			break;
		case 'k':
			ResetValues();
			MyDisplay();
			break;
		case 'l':
			ResetValues();
			MyDisplay();
			break;
		case 'm':
			ResetValues();
			MyDisplay();
			break;
		case 'n':
			ResetValues();
			MyDisplay();
			break;
		case 'o':
			ResetValues();
			MyDisplay();
			break;
		case 'p':
			ResetValues();
			MyDisplay();
			break;
		case 'q':
			ResetValues();
			MyDisplay();
			break;
		case 'r':
			ResetValues();
			MyDisplay();
			break;
		case 's':
			ResetValues();
			MyDisplay();
			break;
		case 't':
			ResetValues();
			MyDisplay();
			break;
		case 'u':
			ResetValues();
			MyDisplay();
			break;
		case 'v':
			ResetValues();
			MyDisplay();
			break;
		case 'w':
			ResetValues();
			MyDisplay();
			break;
		case 'x':
			ResetValues();
			MyDisplay();
			break;
		case 'y':
			ResetValues();
			MyDisplay();
			break;
		case 'z':
			ResetValues();
			MyDisplay();
			break;
		default:
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
