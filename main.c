#include <stdlib.h>
#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>

#define CHARACTER_LINES 5

typedef struct {
	float x1_point;
	float y1_point;
	float x2_point;
	float y2_point;
} coordinates;

void init();
void ResetValues(void);
void MyLine(float x1_point, float y1_point, float x2_point, float y2_point);
void MyLines(void);
void MyDisplay(void);
int getRandomColor(void);
void MyKeyBoard(unsigned char key, int x, int y);

// width and height of the window
const int W_WIDTH = 640;
const int W_HEIGHT = 480;

// for start message visibility
int is_start_msg_seen = 0;

// for characters
coordinates character[CHARACTER_LINES] = {0};

// for start message
coordinates start_message[] = {
	// for letter P
	{32.0f, W_HEIGHT - 110.0f, 32.0f, W_HEIGHT - 200.0f},
	{32.0f, W_HEIGHT - 110.0f, 80.0f, W_HEIGHT - 110.0f},
	{80.0f, W_HEIGHT - 110.0f, 80.0f, W_HEIGHT - 155.0f},
	{80.0f, W_HEIGHT - 155.0f, 32.0f, W_HEIGHT - 155.0f},

	// for letter R
	{101.0f, W_HEIGHT - 110.0f, 101.0f, W_HEIGHT - 200.0f},
	{101.0f, W_HEIGHT - 110.0f, 150.0f, W_HEIGHT - 110.0f},
	{150.0f, W_HEIGHT - 110.0f, 150.0f, W_HEIGHT - 155.0f},
	{150.0f, W_HEIGHT - 155.0f, 101.0f, W_HEIGHT - 155.0f},
	{101.0f, W_HEIGHT - 155.0f, 150.0f, W_HEIGHT - 200.0f},

	// for letter E
	{171.0f, W_HEIGHT - 110.0f, 171.0f, W_HEIGHT - 200.0f},
	{171.0f, W_HEIGHT - 110.0f, 216.0f, W_HEIGHT - 110.0f},
	{171.0f, W_HEIGHT - 155.0f, 216.0f, W_HEIGHT - 155.0f},
	{171.0f, W_HEIGHT - 200.0f, 216.0f, W_HEIGHT - 200.0f},

	// for letter S
	{284.0f, W_HEIGHT - 110.0f, 238.0f, W_HEIGHT - 110.0f},
	{238.0f, W_HEIGHT - 110.0f, 238.0f, W_HEIGHT - 155.0f},
	{238.0f, W_HEIGHT - 155.0f, 284.0f, W_HEIGHT - 155.0f},
	{284.0f, W_HEIGHT - 155.0f, 284.0f, W_HEIGHT - 200.0f},
	{284.0f, W_HEIGHT - 200.0f, 238.0f, W_HEIGHT - 200.0f},

	// for letter S
	{354.0f, W_HEIGHT - 110.0f, 308.0f, W_HEIGHT - 110.0f},
	{308.0f, W_HEIGHT - 110.0f, 308.0f, W_HEIGHT - 155.0f},
	{308.0f, W_HEIGHT - 155.0f, 354.0f, W_HEIGHT - 155.0f},
	{354.0f, W_HEIGHT - 155.0f, 354.0f, W_HEIGHT - 200.0f},
	{354.0f, W_HEIGHT - 200.0f, 308.0f, W_HEIGHT - 200.0f},

	// for letter A
	{415.0f, W_HEIGHT - 200.0f, 442.0f, W_HEIGHT - 110.0f},
	{442.0f, W_HEIGHT - 110.0f, 468.0f, W_HEIGHT - 200.0f},
	{429.0f, W_HEIGHT - 155.0f, 455.0f, W_HEIGHT - 155.0f},

	// for letter N
	{486.0f, W_HEIGHT - 200.0f, 486.0f, W_HEIGHT - 110.0f},
	{486.0f, W_HEIGHT - 110.0f, 537.0f, W_HEIGHT - 200.0f},
	{537.0f, W_HEIGHT - 200.0f, 537.0f, W_HEIGHT - 110.0f},

	// for letter Y
	{555.0f, W_HEIGHT - 110.0f, 582.0f, W_HEIGHT - 155.0f},
	{608.0f, W_HEIGHT - 110.0f, 582.0f, W_HEIGHT - 155.0f},
	{582.0f, W_HEIGHT - 155.0f, 582.0f, W_HEIGHT - 200.0f},

	// for letter K
	{227.0f, W_HEIGHT - 279.0f, 227.0f, W_HEIGHT - 369.0f},
	{227.0f, W_HEIGHT - 324.0f, 279.0f, W_HEIGHT - 279.0f},
	{227.0f, W_HEIGHT - 324.0f, 279.0f, W_HEIGHT - 369.0f},

	// for letter E
	{297.0f, W_HEIGHT - 279.0f, 297.0f, W_HEIGHT - 369.0f},
	{297.0f, W_HEIGHT - 279.0f, 346.0f, W_HEIGHT - 279.0f},
	{297.0f, W_HEIGHT - 324.0f, 346.0f, W_HEIGHT - 324.0f},
	{297.0f, W_HEIGHT - 369.0f, 346.0f, W_HEIGHT - 369.0f},

	// for letter Y
	{360.0f, W_HEIGHT - 279.0f, 386.0f, W_HEIGHT - 324.0f},
	{412.0f, W_HEIGHT - 279.0f, 386.0f, W_HEIGHT - 324.0f},
	{386.0f, W_HEIGHT - 324.0f, 386.0f, W_HEIGHT - 369.0f},
};
const size_t START_MESSAGE_LEN = sizeof(start_message) / sizeof(start_message[0]);

int main(int argc, char  **argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode( GLUT_SINGLE | GLUT_RGB );

	glutInitWindowSize(W_WIDTH, W_HEIGHT);
	glutInitWindowPosition(500,100);

	glutCreateWindow("Character Displayer");

	init();

	glutDisplayFunc(MyDisplay);
	glutKeyboardFunc(MyKeyBoard);

	glutMainLoop();
	return EXIT_SUCCESS;
}

void init() {
	glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
	glColor3f(0, 0, 0);
	glLineWidth(5.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, W_WIDTH, 0, W_HEIGHT);
}

// function to reset coordinates of characters so they won't be visible
void ResetValues(void) {
	for (int i = 0; i < CHARACTER_LINES; i++) {
		character[i] = (coordinates){0};
	}

	if (!is_start_msg_seen) {
		for (size_t i = 0; i < START_MESSAGE_LEN; i++) {
			start_message[i] = (coordinates){0};
		}
		is_start_msg_seen = 1;
	}
}

// function to initialize a line
void MyLine(float x1_point, float y1_point, float x2_point, float y2_point) {
	glVertex3f(x1_point, y1_point, 0.0f);
	glVertex3f(x2_point, y2_point, 0.0f);
}

// function to initialize many lines to create characters
void MyLines(void) {
	// for characters
	for (int i = 0; i < CHARACTER_LINES; i++) {
		MyLine(
			character[i].x1_point,
			character[i].y1_point,
			character[i].x2_point,
			character[i].y2_point
		);
	}

	// for start message
	for (size_t i = 0; i < START_MESSAGE_LEN; i++) {
		MyLine(
			start_message[i].x1_point,
			start_message[i].y1_point,
			start_message[i].x2_point,
			start_message[i].y2_point
		);
	}
}

void MyDisplay(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3ub(getRandomColor(), getRandomColor(), getRandomColor());
	glBegin(GL_LINES);

	MyLines();

	glEnd();
	glFlush();
}

int getRandomColor(void) {
	return rand() % 255;
}

// function to detect keyboard keys and print the character accordingly
void MyKeyBoard(unsigned char key, int x, int y) {
	ResetValues();

	switch (key) {
		case '1':
			character[0] = (coordinates){279.0f, W_HEIGHT - 119.0f, 368.0f, W_HEIGHT - 63.0f};
			character[1] = (coordinates){368.0f, W_HEIGHT - 63.0f, 368.0f, W_HEIGHT - 416.0f};
			break;
		case '2':
			character[0] = (coordinates){217.0f, W_HEIGHT - 62.0f, 422.0f, W_HEIGHT - 62.0f};
			character[1] = (coordinates){422.0f, W_HEIGHT - 62.0f, 422.0f, W_HEIGHT - 240.0f};
			character[2] = (coordinates){422.0f, W_HEIGHT - 240.0f, 228.0f, W_HEIGHT - 240.0f};
			character[3] = (coordinates){228.0f, W_HEIGHT - 240.0f, 228.0f, W_HEIGHT - 417.0f};
			character[4] = (coordinates){228.0f, W_HEIGHT - 417.0f, 422.0f, W_HEIGHT - 417.0f};
			break;
		case '3':
			character[0] = (coordinates){417.0f, W_HEIGHT - 63.0f, 417.0f, W_HEIGHT - 416.0f};
			character[1] = (coordinates){223.0f, W_HEIGHT - 63.0f, 417.0f, W_HEIGHT - 63.0f};
			character[2] = (coordinates){223.0f, W_HEIGHT - 240.0f, 417.0f, W_HEIGHT - 240.0f};
			character[3] = (coordinates){233.0f, W_HEIGHT - 417.0f, 417.0f, W_HEIGHT - 417.0f};
			break;
		case '4':
			character[0] = (coordinates){423.0f, W_HEIGHT - 63.0f, 423.0f, W_HEIGHT - 416.0f};
			character[1] = (coordinates){216.0f, W_HEIGHT - 63.0f, 216.0f, W_HEIGHT - 240.0f};
			character[3] = (coordinates){216.0f, W_HEIGHT - 240.0f, 423.0f, W_HEIGHT - 240.0f};
			break;
		case '5':
			character[0] = (coordinates){410.0f, W_HEIGHT - 63.0f, 229.0f, W_HEIGHT - 63.0f};
			character[1] = (coordinates){229.0f, W_HEIGHT - 63.0f, 229.0f, W_HEIGHT - 240.0f};
			character[2] = (coordinates){229.0f, W_HEIGHT - 240.0f, 410.0f, W_HEIGHT - 240.0f};
			character[3] = (coordinates){411.0f, W_HEIGHT - 240.0f, 411.0f, W_HEIGHT - 417.0f};
			character[4] = (coordinates){411.0f, W_HEIGHT - 417.0f, 229.0f, W_HEIGHT - 417.0f};
			break;
		case '6':
			character[0] = (coordinates){418.0f, W_HEIGHT - 63.0f, 221.0f, W_HEIGHT - 63.0f};
			character[1] = (coordinates){221.0f, W_HEIGHT - 63.0f, 221.0f, W_HEIGHT - 417.0f};
			character[2] = (coordinates){221.0f, W_HEIGHT - 417.0f, 418.0f, W_HEIGHT - 417.0f};
			character[3] = (coordinates){418.0f, W_HEIGHT - 417.0f, 418.0f, W_HEIGHT - 240.0f};
			character[4] = (coordinates){418.0f, W_HEIGHT - 240.0f, 221.0f, W_HEIGHT - 240.0f};
			break;
		case '7':
			character[0] = (coordinates){205.0f, W_HEIGHT - 63.0f, 434.0f, W_HEIGHT - 63.0f};
			character[1] = (coordinates){434.0f, W_HEIGHT - 63.0f, 267.0f, W_HEIGHT - 416.0f};
			break;
		case '8':
			character[0] = (coordinates){196.0f, W_HEIGHT - 63.0f, 443.0f, W_HEIGHT - 63.0f};
			character[1] = (coordinates){443.0f, W_HEIGHT - 63.0f, 443.0f, W_HEIGHT - 416.0f};
			character[2] = (coordinates){443.0f, W_HEIGHT - 416.0f, 196.0f, W_HEIGHT - 416.0f};
			character[3] = (coordinates){196.0f, W_HEIGHT - 416.0f, 196.0f, W_HEIGHT - 63.0f};
			character[4] = (coordinates){443.0f, W_HEIGHT - 240.0f, 196.0f, W_HEIGHT - 240.0f};
			break;
		case '9':
			character[0] = (coordinates){417.0f, W_HEIGHT - 63.0f, 417.0f, W_HEIGHT - 416.0f};
			character[1] = (coordinates){223.0f, W_HEIGHT - 63.0f, 417.0f, W_HEIGHT - 63.0f};
			character[2] = (coordinates){223.0f, W_HEIGHT - 240.0f, 417.0f, W_HEIGHT - 240.0f};
			character[3] = (coordinates){233.0f, W_HEIGHT - 417.0f, 417.0f, W_HEIGHT - 417.0f};
			character[4] = (coordinates){223.0f, W_HEIGHT - 63.0f, 223.0f, W_HEIGHT - 240.0f};
			break;
		case '0':
			character[0] = (coordinates){196.0f, W_HEIGHT - 63.0f, 443.0f, W_HEIGHT - 63.0f};
			character[1] = (coordinates){443.0f, W_HEIGHT - 63.0f, 443.0f, W_HEIGHT - 416.0f};
			character[2] = (coordinates){443.0f, W_HEIGHT - 416.0f, 196.0f, W_HEIGHT - 416.0f};
			character[3] = (coordinates){196.0f, W_HEIGHT - 416.0f, 196.0f, W_HEIGHT - 63.0f};
			break;
		case 'a':
		case 'A':
			character[0] = (coordinates){205.0f, W_HEIGHT - 416.0f, W_WIDTH / 2.0f, W_HEIGHT - 63.0f};
			character[1] = (coordinates){W_WIDTH / 2.0f, W_HEIGHT - 63.0f, 434.0f, W_HEIGHT - 416.0f};
			character[2] = (coordinates){262.0f, W_HEIGHT / 2.0f, 377.0f, W_HEIGHT / 2.0f};
			break;
		case 'b':
		case 'B':
			character[0] = (coordinates){196.0f, W_HEIGHT - 63.0f, 443.0f, W_HEIGHT - 63.0f};
			character[1] = (coordinates){443.0f, W_HEIGHT - 63.0f, 443.0f, W_HEIGHT - 416.0f};
			character[2] = (coordinates){443.0f, W_HEIGHT - 416.0f, 196.0f, W_HEIGHT - 416.0f};
			character[3] = (coordinates){196.0f, W_HEIGHT - 416.0f, 196.0f, W_HEIGHT - 63.0f};
			character[4] = (coordinates){443.0f, W_HEIGHT - 240.0f, 196.0f, W_HEIGHT - 240.0f};
			break;
		case 'c':
		case 'C':
			character[0] = (coordinates){220.0f, W_HEIGHT - 63.0f, 220.0f, W_HEIGHT - 416.0f};
			character[1] = (coordinates){220.0f, W_HEIGHT - 63.0f, 420.0f, W_HEIGHT - 63.0f};
			character[2] = (coordinates){220.0f, W_HEIGHT - 416.0f, 420.0f, W_HEIGHT - 416.0f};
			break;
		case 'd':
		case 'D':
			character[0] = (coordinates){196.0f, W_HEIGHT - 63.0f, 443.0f, W_HEIGHT - 63.0f};
			character[1] = (coordinates){443.0f, W_HEIGHT - 63.0f, 443.0f, W_HEIGHT - 416.0f};
			character[2] = (coordinates){443.0f, W_HEIGHT - 416.0f, 196.0f, W_HEIGHT - 416.0f};
			character[3] = (coordinates){196.0f, W_HEIGHT - 416.0f, 196.0f, W_HEIGHT - 63.0f};
			break;
		case 'e':
		case 'E':
			character[0] = (coordinates){220.0f, W_HEIGHT - 63.0f, 220.0f, W_HEIGHT - 416.0f};
			character[1] = (coordinates){220.0f, W_HEIGHT - 63.0f, 420.0f, W_HEIGHT - 63.0f};
			character[2] = (coordinates){220.0f, W_HEIGHT / 2.0f, 420.0f, W_HEIGHT / 2.0f};
			character[3] = (coordinates){220.0f, W_HEIGHT - 416.0f, 420.0f, W_HEIGHT - 416.0f};
			break;
		case 'f':
		case 'F':
			character[0] = (coordinates){220.0f, W_HEIGHT - 63.0f, 220.0f, W_HEIGHT - 416.0f};
			character[1] = (coordinates){220.0f, W_HEIGHT - 63.0f, 420.0f, W_HEIGHT - 63.0f};
			character[2] = (coordinates){220.0f, W_HEIGHT / 2.0f, 420.0f, W_HEIGHT / 2.0f};
			break;
		case 'g':
		case 'G':
			character[0] = (coordinates){418.0f, W_HEIGHT - 63.0f, 221.0f, W_HEIGHT - 63.0f};
			character[1] = (coordinates){221.0f, W_HEIGHT - 63.0f, 221.0f, W_HEIGHT - 417.0f};
			character[2] = (coordinates){221.0f, W_HEIGHT - 417.0f, 418.0f, W_HEIGHT - 417.0f};
			character[3] = (coordinates){418.0f, W_HEIGHT - 417.0f, 418.0f, W_HEIGHT - 240.0f};
			character[4] = (coordinates){418.0f, W_HEIGHT - 240.0f, W_WIDTH / 2.0f, W_HEIGHT - 240.0f};
			break;
		case 'h':
		case 'H':
			character[0] = (coordinates){443.0f, W_HEIGHT - 63.0f, 443.0f, W_HEIGHT - 416.0f};
			character[1] = (coordinates){196.0f, W_HEIGHT - 416.0f, 196.0f, W_HEIGHT - 63.0f};
			character[2] = (coordinates){443.0f, W_HEIGHT - 240.0f, 196.0f, W_HEIGHT - 240.0f};
			break;
		case 'i':
		case 'I':
			character[0] = (coordinates){196.0f, W_HEIGHT - 63.0f, 443.0f, W_HEIGHT - 63.0f};
			character[1] = (coordinates){W_WIDTH / 2.0f, W_HEIGHT - 63.0f, W_WIDTH / 2.0f, W_HEIGHT - 416.0f};
			character[2] = (coordinates){443.0f, W_HEIGHT - 416.0f, 196.0f, W_HEIGHT - 416.0f};
			break;
		case 'j':
		case 'J':
			character[0] = (coordinates){443.0f, W_HEIGHT - 63.0f, 443.0f, W_HEIGHT - 416.0f};
			character[1] = (coordinates){443.0f, W_HEIGHT - 416.0f, 196.0f, W_HEIGHT - 416.0f};
			character[2] = (coordinates){196.0f, W_HEIGHT - 416.0f, 196.0f, W_HEIGHT - 240.0f};
			break;
		case 'k':
		case 'K':
			character[0] = (coordinates){196.0f, W_HEIGHT - 240.0f, 443.0f, W_HEIGHT - 63.0f};
			character[1] = (coordinates){196.0f, W_HEIGHT - 240.0f, 443.0f, W_HEIGHT - 416.0f};
			character[2] = (coordinates){196.0f, W_HEIGHT - 416.0f, 196.0f, W_HEIGHT - 63.0f};
			break;
		case 'l':
		case 'L':
			character[0] = (coordinates){196.0f, W_HEIGHT - 416.0f, 196.0f, W_HEIGHT - 63.0f};
			character[1] = (coordinates){443.0f, W_HEIGHT - 416.0f, 196.0f, W_HEIGHT - 416.0f};
			break;
		case 'm':
		case 'M':
			character[0] = (coordinates){1.0f * W_WIDTH / 5, W_HEIGHT - 416.0f, 1.0f * W_WIDTH / 5, W_HEIGHT - 63.0f};
			character[1] = (coordinates){1.0f * W_WIDTH / 5, W_HEIGHT - 63.0f, W_WIDTH / 2.0f, W_HEIGHT - 416.0f};
			character[2] = (coordinates){W_WIDTH / 2.0f, W_HEIGHT - 416.0f, 4.0f * W_WIDTH / 5, W_HEIGHT - 63.0f};
			character[3] = (coordinates){4.0f * W_WIDTH / 5, W_HEIGHT - 63.0f, 4.0f * W_WIDTH / 5, W_HEIGHT - 416.0f};
			break;
		case 'n':
		case 'N':
			character[0] = (coordinates){1.5 * W_WIDTH / 5, W_HEIGHT - 416.0f, 1.5 * W_WIDTH / 5, W_HEIGHT - 63.0f};
			character[1] = (coordinates){1.5 * W_WIDTH / 5, W_HEIGHT - 63.0f, 3.5 * W_WIDTH / 5, W_HEIGHT - 416.0f};
			character[2] = (coordinates){3.5 * W_WIDTH / 5, W_HEIGHT - 416.0f, 3.5 * W_WIDTH / 5, W_HEIGHT - 63.0f};
			break;
		case 'o':
		case 'O':
			character[0] = (coordinates){196.0f, W_HEIGHT - 63.0f, 443.0f, W_HEIGHT - 63.0f};
			character[1] = (coordinates){443.0f, W_HEIGHT - 63.0f, 443.0f, W_HEIGHT - 416.0f};
			character[2] = (coordinates){443.0f, W_HEIGHT - 416.0f, 196.0f, W_HEIGHT - 416.0f};
			character[3] = (coordinates){196.0f, W_HEIGHT - 416.0f, 196.0f, W_HEIGHT - 63.0f};
			break;
		case 'p':
		case 'P':
			character[0] = (coordinates){196.0f, W_HEIGHT - 63.0f, 443.0f, W_HEIGHT - 63.0f};
			character[1] = (coordinates){443.0f, W_HEIGHT - 63.0f, 443.0f, W_HEIGHT - 240.0f};
			character[2] = (coordinates){196.0f, W_HEIGHT - 416.0f, 196.0f, W_HEIGHT - 63.0f};
			character[3] = (coordinates){443.0f, W_HEIGHT - 240.0f, 196.0f, W_HEIGHT - 240.0f};
			break;
		case 'q':
		case 'Q':
			character[0] = (coordinates){196.0f, W_HEIGHT - 63.0f, 443.0f, W_HEIGHT - 63.0f};
			character[1] = (coordinates){443.0f, W_HEIGHT - 63.0f, 443.0f, W_HEIGHT - 416.0f};
			character[2] = (coordinates){443.0f, W_HEIGHT - 416.0f, 196.0f, W_HEIGHT - 416.0f};
			character[3] = (coordinates){196.0f, W_HEIGHT - 416.0f, 196.0f, W_HEIGHT - 63.0f};
			character[4] = (coordinates){365.0f, W_HEIGHT - 325.0f, 485.0f, W_HEIGHT - 465.0f};
			break;
		case 'r':
		case 'R':
			character[0] = (coordinates){196.0f, W_HEIGHT - 63.0f, 443.0f, W_HEIGHT - 63.0f};
			character[1] = (coordinates){443.0f, W_HEIGHT - 63.0f, 443.0f, W_HEIGHT - 240.0f};
			character[2] = (coordinates){196.0f, W_HEIGHT - 416.0f, 196.0f, W_HEIGHT - 63.0f};
			character[3] = (coordinates){443.0f, W_HEIGHT - 240.0f, 196.0f, W_HEIGHT - 240.0f};
			character[4] = (coordinates){196.0f, W_HEIGHT - 240.0f, 443.0f, W_HEIGHT - 416.0f};
			break;
		case 's':
		case 'S':
			character[0] = (coordinates){410.0f, W_HEIGHT - 63.0f, 229.0f, W_HEIGHT - 63.0f};
			character[1] = (coordinates){229.0f, W_HEIGHT - 63.0f, 229.0f, W_HEIGHT - 240.0f};
			character[2] = (coordinates){229.0f, W_HEIGHT - 240.0f, 410.0f, W_HEIGHT - 240.0f};
			character[3] = (coordinates){411.0f, W_HEIGHT - 240.0f, 411.0f, W_HEIGHT - 417.0f};
			character[4] = (coordinates){411.0f, W_HEIGHT - 417.0f, 229.0f, W_HEIGHT - 417.0f};
			break;
		case 't':
		case 'T':
			character[0] = (coordinates){W_WIDTH / 4.0f, W_HEIGHT - 63.0f, 3.0f * W_WIDTH / 4, W_HEIGHT - 63.0f};
			character[1] = (coordinates){W_WIDTH / 2.0f, W_HEIGHT - 63.0f, W_WIDTH / 2.0f, W_HEIGHT - 416.0f};
			break;
		case 'u':
		case 'U':
			character[0] = (coordinates){443.0f, W_HEIGHT - 63.0f, 443.0f, W_HEIGHT - 416.0f};
			character[1] = (coordinates){443.0f, W_HEIGHT - 416.0f, 196.0f, W_HEIGHT - 416.0f};
			character[2] = (coordinates){196.0f, W_HEIGHT - 416.0f, 196.0f, W_HEIGHT - 63.0f};
			break;
		case 'v':
		case 'V':
			character[0] = (coordinates){205.0f, W_HEIGHT - 63.0f, W_WIDTH / 2.0f, W_HEIGHT - 416.0f};
			character[1] = (coordinates){W_WIDTH / 2.0f, W_HEIGHT - 416.0f, 434.0f, W_HEIGHT - 63.0f};
			break;
		case 'w':
		case 'W':
			character[0] = (coordinates){1.0f * W_WIDTH / 5, W_HEIGHT - 63.0f, 2.0f * W_WIDTH / 5, W_HEIGHT - 416.0f};
			character[1] = (coordinates){2.0f * W_WIDTH / 5, W_HEIGHT - 416.0f, W_WIDTH / 2.0f, W_HEIGHT - 63.0f};
			character[2] = (coordinates){W_WIDTH / 2.0f, W_HEIGHT - 63.0f, 3.0f * W_WIDTH / 5, W_HEIGHT - 416.0f};
			character[3] = (coordinates){3.0f * W_WIDTH / 5, W_HEIGHT - 416.0f, 4.0f * W_WIDTH / 5, W_HEIGHT - 63.0f};
			break;
		case 'x':
		case 'X':
			character[0] = (coordinates){W_WIDTH / 4.0f, W_HEIGHT - 63.0f, 3.0f * W_WIDTH / 4, W_HEIGHT - 416.0f};
			character[1] = (coordinates){3.0f * W_WIDTH / 4, W_HEIGHT - 63.0f, W_WIDTH / 4.0f, W_HEIGHT - 416.0f};
			break;
		case 'y':
		case 'Y':
			character[0] = (coordinates){210.0f, W_HEIGHT - 63.0f, W_WIDTH / 2.0f, W_HEIGHT / 2.0f};
			character[1] = (coordinates){430.0f, W_HEIGHT - 63.0f, W_WIDTH / 2.0f, W_HEIGHT / 2.0f};
			character[2] = (coordinates){W_WIDTH / 2.0f, W_HEIGHT / 2.0f, W_WIDTH / 2.0f, W_HEIGHT - 416.0f};
			break;
		case 'z':
		case 'Z':
			character[0] = (coordinates){210.0f, W_HEIGHT - 63.0f, 430.0f, W_HEIGHT - 63.0f};
			character[1] = (coordinates){430.0f, W_HEIGHT - 63.0f, 210.0f, W_HEIGHT - 416.0f};
			character[2] = (coordinates){210.0f, W_HEIGHT - 416.0f, 430.0f, W_HEIGHT - 416.0f};
			break;
		default:
			break;
	}

	MyDisplay();
}
