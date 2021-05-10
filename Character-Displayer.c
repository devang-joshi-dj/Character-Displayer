#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>

// width and height of the window
int width = 640;
int height = 480;

// for characters
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

// for start message
int startMessageFlag = 1;

int line6_x1_point = 0.0f;
int line6_y1_point = 0.0f;
int line6_x2_point = 0.0f;
int line6_y2_point = 0.0f;

int line7_x1_point = 0.0f;
int line7_y1_point = 0.0f;
int line7_x2_point = 0.0f;
int line7_y2_point = 0.0f;

int line8_x1_point = 0.0f;
int line8_y1_point = 0.0f;
int line8_x2_point = 0.0f;
int line8_y2_point = 0.0f;

int line9_x1_point = 0.0f;
int line9_y1_point = 0.0f;
int line9_x2_point = 0.0f;
int line9_y2_point = 0.0f;

int line10_x1_point = 0.0f;
int line10_y1_point = 0.0f;
int line10_x2_point = 0.0f;
int line10_y2_point = 0.0f;

int line11_x1_point = 0.0f;
int line11_y1_point = 0.0f;
int line11_x2_point = 0.0f;
int line11_y2_point = 0.0f;

int line12_x1_point = 0.0f;
int line12_y1_point = 0.0f;
int line12_x2_point = 0.0f;
int line12_y2_point = 0.0f;

int line13_x1_point = 0.0f;
int line13_y1_point = 0.0f;
int line13_x2_point = 0.0f;
int line13_y2_point = 0.0f;

int line14_x1_point = 0.0f;
int line14_y1_point = 0.0f;
int line14_x2_point = 0.0f;
int line14_y2_point = 0.0f;

int line15_x1_point = 0.0f;
int line15_y1_point = 0.0f;
int line15_x2_point = 0.0f;
int line15_y2_point = 0.0f;

int line16_x1_point = 0.0f;
int line16_y1_point = 0.0f;
int line16_x2_point = 0.0f;
int line16_y2_point = 0.0f;

int line17_x1_point = 0.0f;
int line17_y1_point = 0.0f;
int line17_x2_point = 0.0f;
int line17_y2_point = 0.0f;

int line18_x1_point = 0.0f;
int line18_y1_point = 0.0f;
int line18_x2_point = 0.0f;
int line18_y2_point = 0.0f;

int line19_x1_point = 0.0f;
int line19_y1_point = 0.0f;
int line19_x2_point = 0.0f;
int line19_y2_point = 0.0f;

int line20_x1_point = 0.0f;
int line20_y1_point = 0.0f;
int line20_x2_point = 0.0f;
int line20_y2_point = 0.0f;

int line21_x1_point = 0.0f;
int line21_y1_point = 0.0f;
int line21_x2_point = 0.0f;
int line21_y2_point = 0.0f;

int line22_x1_point = 0.0f;
int line22_y1_point = 0.0f;
int line22_x2_point = 0.0f;
int line22_y2_point = 0.0f;

int line23_x1_point = 0.0f;
int line23_y1_point = 0.0f;
int line23_x2_point = 0.0f;
int line23_y2_point = 0.0f;

int line24_x1_point = 0.0f;
int line24_y1_point = 0.0f;
int line24_x2_point = 0.0f;
int line24_y2_point = 0.0f;

int line25_x1_point = 0.0f;
int line25_y1_point = 0.0f;
int line25_x2_point = 0.0f;
int line25_y2_point = 0.0f;

int line26_x1_point = 0.0f;
int line26_y1_point = 0.0f;
int line26_x2_point = 0.0f;
int line26_y2_point = 0.0f;

int line27_x1_point = 0.0f;
int line27_y1_point = 0.0f;
int line27_x2_point = 0.0f;
int line27_y2_point = 0.0f;

int line28_x1_point = 0.0f;
int line28_y1_point = 0.0f;
int line28_x2_point = 0.0f;
int line28_y2_point = 0.0f;

int line29_x1_point = 0.0f;
int line29_y1_point = 0.0f;
int line29_x2_point = 0.0f;
int line29_y2_point = 0.0f;

int line30_x1_point = 0.0f;
int line30_y1_point = 0.0f;
int line30_x2_point = 0.0f;
int line30_y2_point = 0.0f;

int line31_x1_point = 0.0f;
int line31_y1_point = 0.0f;
int line31_x2_point = 0.0f;
int line31_y2_point = 0.0f;

int line32_x1_point = 0.0f;
int line32_y1_point = 0.0f;
int line32_x2_point = 0.0f;
int line32_y2_point = 0.0f;

int line33_x1_point = 0.0f;
int line33_y1_point = 0.0f;
int line33_x2_point = 0.0f;
int line33_y2_point = 0.0f;

int line34_x1_point = 0.0f;
int line34_y1_point = 0.0f;
int line34_x2_point = 0.0f;
int line34_y2_point = 0.0f;

int line35_x1_point = 0.0f;
int line35_y1_point = 0.0f;
int line35_x2_point = 0.0f;
int line35_y2_point = 0.0f;

int line36_x1_point = 0.0f;
int line36_y1_point = 0.0f;
int line36_x2_point = 0.0f;
int line36_y2_point = 0.0f;

int line37_x1_point = 0.0f;
int line37_y1_point = 0.0f;
int line37_x2_point = 0.0f;
int line37_y2_point = 0.0f;

int line38_x1_point = 0.0f;
int line38_y1_point = 0.0f;
int line38_x2_point = 0.0f;
int line38_y2_point = 0.0f;

int line39_x1_point = 0.0f;
int line39_y1_point = 0.0f;
int line39_x2_point = 0.0f;
int line39_y2_point = 0.0f;

int line40_x1_point = 0.0f;
int line40_y1_point = 0.0f;
int line40_x2_point = 0.0f;
int line40_y2_point = 0.0f;

int line41_x1_point = 0.0f;
int line41_y1_point = 0.0f;
int line41_x2_point = 0.0f;
int line41_y2_point = 0.0f;

int line42_x1_point = 0.0f;
int line42_y1_point = 0.0f;
int line42_x2_point = 0.0f;
int line42_y2_point = 0.0f;

int line43_x1_point = 0.0f;
int line43_y1_point = 0.0f;
int line43_x2_point = 0.0f;
int line43_y2_point = 0.0f;

int line44_x1_point = 0.0f;
int line44_y1_point = 0.0f;
int line44_x2_point = 0.0f;
int line44_y2_point = 0.0f;

int line45_x1_point = 0.0f;
int line45_y1_point = 0.0f;
int line45_x2_point = 0.0f;
int line45_y2_point = 0.0f;

int line46_x1_point = 0.0f;
int line46_y1_point = 0.0f;
int line46_x2_point = 0.0f;
int line46_y2_point = 0.0f;

int line47_x1_point = 0.0f;
int line47_y1_point = 0.0f;
int line47_x2_point = 0.0f;
int line47_y2_point = 0.0f;

void init() {
	glClearColor(1.0f,1.0f,1.0f,0.0f);
	glColor3f(0,0,0);
	glLineWidth(5.0);
	glMatrixMode( GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,width,0,height);
}

void StartMessage(int flag) {
	// function to print "Press Any Key" at the start and to disappear it as well
	if(flag == 0){
		line6_x1_point = 0.0f;
		line6_y1_point = 0.0f;
		line6_x2_point = 0.0f;
		line6_y2_point = 0.0f;

		line7_x1_point = 0.0f;
		line7_y1_point = 0.0f;
		line7_x2_point = 0.0f;
		line7_y2_point = 0.0f;

		line8_x1_point = 0.0f;
		line8_y1_point = 0.0f;
		line8_x2_point = 0.0f;
		line8_y2_point = 0.0f;

		line9_x1_point = 0.0f;
		line9_y1_point = 0.0f;
		line9_x2_point = 0.0f;
		line9_y2_point = 0.0f;

		line10_x1_point = 0.0f;
		line10_y1_point = 0.0f;
		line10_x2_point = 0.0f;
		line10_y2_point = 0.0f;

		line11_x1_point = 0.0f;
		line11_y1_point = 0.0f;
		line11_x2_point = 0.0f;
		line11_y2_point = 0.0f;

		line12_x1_point = 0.0f;
		line12_y1_point = 0.0f;
		line12_x2_point = 0.0f;
		line12_y2_point = 0.0f;

		line13_x1_point = 0.0f;
		line13_y1_point = 0.0f;
		line13_x2_point = 0.0f;
		line13_y2_point = 0.0f;

		line14_x1_point = 0.0f;
		line14_y1_point = 0.0f;
		line14_x2_point = 0.0f;
		line14_y2_point = 0.0f;

		line15_x1_point = 0.0f;
		line15_y1_point = 0.0f;
		line15_x2_point = 0.0f;
		line15_y2_point = 0.0f;

		line16_x1_point = 0.0f;
		line16_y1_point = 0.0f;
		line16_x2_point = 0.0f;
		line16_y2_point = 0.0f;

		line17_x1_point = 0.0f;
		line17_y1_point = 0.0f;
		line17_x2_point = 0.0f;
		line17_y2_point = 0.0f;

		line18_x1_point = 0.0f;
		line18_y1_point = 0.0f;
		line18_x2_point = 0.0f;
		line18_y2_point = 0.0f;

		line19_x1_point = 0.0f;
		line19_y1_point = 0.0f;
		line19_x2_point = 0.0f;
		line19_y2_point = 0.0f;

		line20_x1_point = 0.0f;
		line20_y1_point = 0.0f;
		line20_x2_point = 0.0f;
		line20_y2_point = 0.0f;

		line21_x1_point = 0.0f;
		line21_y1_point = 0.0f;
		line21_x2_point = 0.0f;
		line21_y2_point = 0.0f;

		line22_x1_point = 0.0f;
		line22_y1_point = 0.0f;
		line22_x2_point = 0.0f;
		line22_y2_point = 0.0f;

		line23_x1_point = 0.0f;
		line23_y1_point = 0.0f;
		line23_x2_point = 0.0f;
		line23_y2_point = 0.0f;

		line24_x1_point = 0.0f;
		line24_y1_point = 0.0f;
		line24_x2_point = 0.0f;
		line24_y2_point = 0.0f;

		line25_x1_point = 0.0f;
		line25_y1_point = 0.0f;
		line25_x2_point = 0.0f;
		line25_y2_point = 0.0f;

		line26_x1_point = 0.0f;
		line26_y1_point = 0.0f;
		line26_x2_point = 0.0f;
		line26_y2_point = 0.0f;

		line27_x1_point = 0.0f;
		line27_y1_point = 0.0f;
		line27_x2_point = 0.0f;
		line27_y2_point = 0.0f;

		line28_x1_point = 0.0f;
		line28_y1_point = 0.0f;
		line28_x2_point = 0.0f;
		line28_y2_point = 0.0f;

		line29_x1_point = 0.0f;
		line29_y1_point = 0.0f;
		line29_x2_point = 0.0f;
		line29_y2_point = 0.0f;

		line30_x1_point = 0.0f;
		line30_y1_point = 0.0f;
		line30_x2_point = 0.0f;
		line30_y2_point = 0.0f;

		line31_x1_point = 0.0f;
		line31_y1_point = 0.0f;
		line31_x2_point = 0.0f;
		line31_y2_point = 0.0f;

		line32_x1_point = 0.0f;
		line32_y1_point = 0.0f;
		line32_x2_point = 0.0f;
		line32_y2_point = 0.0f;

		line33_x1_point = 0.0f;
		line33_y1_point = 0.0f;
		line33_x2_point = 0.0f;
		line33_y2_point = 0.0f;

		line34_x1_point = 0.0f;
		line34_y1_point = 0.0f;
		line34_x2_point = 0.0f;
		line34_y2_point = 0.0f;

		line35_x1_point = 0.0f;
		line35_y1_point = 0.0f;
		line35_x2_point = 0.0f;
		line35_y2_point = 0.0f;

		line36_x1_point = 0.0f;
		line36_y1_point = 0.0f;
		line36_x2_point = 0.0f;
		line36_y2_point = 0.0f;

		line37_x1_point = 0.0f;
		line37_y1_point = 0.0f;
		line37_x2_point = 0.0f;
		line37_y2_point = 0.0f;

		line38_x1_point = 0.0f;
		line38_y1_point = 0.0f;
		line38_x2_point = 0.0f;
		line38_y2_point = 0.0f;

		line39_x1_point = 0.0f;
		line39_y1_point = 0.0f;
		line39_x2_point = 0.0f;
		line39_y2_point = 0.0f;

		line40_x1_point = 0.0f;
		line40_y1_point = 0.0f;
		line40_x2_point = 0.0f;
		line40_y2_point = 0.0f;

		line41_x1_point = 0.0f;
		line41_y1_point = 0.0f;
		line41_x2_point = 0.0f;
		line41_y2_point = 0.0f;

		line42_x1_point = 0.0f;
		line42_y1_point = 0.0f;
		line42_x2_point = 0.0f;
		line42_y2_point = 0.0f;

		line43_x1_point = 0.0f;
		line43_y1_point = 0.0f;
		line43_x2_point = 0.0f;
		line43_y2_point = 0.0f;

		line44_x1_point = 0.0f;
		line44_y1_point = 0.0f;
		line44_x2_point = 0.0f;
		line44_y2_point = 0.0f;

		line45_x1_point = 0.0f;
		line45_y1_point = 0.0f;
		line45_x2_point = 0.0f;
		line45_y2_point = 0.0f;

		line46_x1_point = 0.0f;
		line46_y1_point = 0.0f;
		line46_x2_point = 0.0f;
		line46_y2_point = 0.0f;

		line47_x1_point = 0.0f;
		line47_y1_point = 0.0f;
		line47_x2_point = 0.0f;
		line47_y2_point = 0.0f;
	} else if(flag == 1){
		// for letter P
		line6_x1_point = 32.0f;
		line6_y1_point = height-110.0f;
		line6_x2_point = 32.0f;
		line6_y2_point = height-200.0f;

		line7_x1_point = 32.0f;
		line7_y1_point = height-110.0f;
		line7_x2_point = 80.0f;
		line7_y2_point = height-110.0f;

		line8_x1_point = 80.0f;
		line8_y1_point = height-110.0f;
		line8_x2_point = 80.0f;
		line8_y2_point = height-155.0f;

		line9_x1_point = 80.0f;
		line9_y1_point = height-155.0f;
		line9_x2_point = 32.0f;
		line9_y2_point = height-155.0f;

		// for letter R
		line10_x1_point = 101.0f;
		line10_y1_point = height-110.0f;
		line10_x2_point = 101.0f;
		line10_y2_point = height-200.0f;

		line11_x1_point = 101.0f;
		line11_y1_point = height-110.0f;
		line11_x2_point = 150.0f;
		line11_y2_point = height-110.0f;

		line12_x1_point = 150.0f;
		line12_y1_point = height-110.0f;
		line12_x2_point = 150.0f;
		line12_y2_point = height-155.0f;

		line13_x1_point = 150.0f;
		line13_y1_point = height-155.0f;
		line13_x2_point = 101.0f;
		line13_y2_point = height-155.0f;

		line14_x1_point = 101.0f;
		line14_y1_point = height-155.0f;
		line14_x2_point = 150.0f;
		line14_y2_point = height-200.0f;

		// for letter E
		line15_x1_point = 171.0f;
		line15_y1_point = height-110.0f;
		line15_x2_point = 171.0f;
		line15_y2_point = height-200.0f;

		line16_x1_point = 171.0f;
		line16_y1_point = height-110.0f;
		line16_x2_point = 216.0f;
		line16_y2_point = height-110.0f;

		line17_x1_point = 171.0f;
		line17_y1_point = height-155.0f;
		line17_x2_point = 216.0f;
		line17_y2_point = height-155.0f;

		line18_x1_point = 171.0f;
		line18_y1_point = height-200.0f;
		line18_x2_point = 216.0f;
		line18_y2_point = height-200.0f;

		// for letter S
		line19_x1_point = 284.0f;
		line19_y1_point = height-110.0f;
		line19_x2_point = 238.0f;
		line19_y2_point = height-110.0f;

		line20_x1_point = 238.0f;
		line20_y1_point = height-110.0f;
		line20_x2_point = 238.0f;
		line20_y2_point = height-155.0f;

		line21_x1_point = 238.0f;
		line21_y1_point = height-155.0f;
		line21_x2_point = 284.0f;
		line21_y2_point = height-155.0f;

		line22_x1_point = 284.0f;
		line22_y1_point = height-155.0f;
		line22_x2_point = 284.0f;
		line22_y2_point = height-200.0f;

		line23_x1_point = 284.0f;
		line23_y1_point = height-200.0f;
		line23_x2_point = 238.0f;
		line23_y2_point = height-200.0f;

		// for letter S
		line24_x1_point = 354.0f;
		line24_y1_point = height-110.0f;
		line24_x2_point = 308.0f;
		line24_y2_point = height-110.0f;

		line25_x1_point = 308.0f;
		line25_y1_point = height-110.0f;
		line25_x2_point = 308.0f;
		line25_y2_point = height-155.0f;

		line26_x1_point = 308.0f;
		line26_y1_point = height-155.0f;
		line26_x2_point = 354.0f;
		line26_y2_point = height-155.0f;

		line27_x1_point = 354.0f;
		line27_y1_point = height-155.0f;
		line27_x2_point = 354.0f;
		line27_y2_point = height-200.0f;

		line28_x1_point = 354.0f;
		line28_y1_point = height-200.0f;
		line28_x2_point = 308.0f;
		line28_y2_point = height-200.0f;

		// for letter A
		line29_x1_point = 415.0f;
		line29_y1_point = height-200.0f;
		line29_x2_point = 442.0f;
		line29_y2_point = height-110.0f;

		line30_x1_point = 442.0f;
		line30_y1_point = height-110.0f;
		line30_x2_point = 468.0f;
		line30_y2_point = height-200.0f;

		line31_x1_point = 429.0f;
		line31_y1_point = height-155.0f;
		line31_x2_point = 455.0f;
		line31_y2_point = height-155.0f;

		// for letter N
		line32_x1_point = 486.0f;
		line32_y1_point = height-200.0f;
		line32_x2_point = 486.0f;
		line32_y2_point = height-110.0f;

		line33_x1_point = 486.0f;
		line33_y1_point = height-110.0f;
		line33_x2_point = 537.0f;
		line33_y2_point = height-200.0f;

		line34_x1_point = 537.0f;
		line34_y1_point = height-200.0f;
		line34_x2_point = 537.0f;
		line34_y2_point = height-110.0f;

		// for letter Y
		line35_x1_point = 555.0f;
		line35_y1_point = height-110.0f;
		line35_x2_point = 582.0f;
		line35_y2_point = height-155.0f;

		line36_x1_point = 608.0f;
		line36_y1_point = height-110.0f;
		line36_x2_point = 582.0f;
		line36_y2_point = height-155.0f;

		line37_x1_point = 582.0f;
		line37_y1_point = height-155.0f;
		line37_x2_point = 582.0f;
		line37_y2_point = height-200.0f;

		// for letter K
		line38_x1_point = 227.0f;
		line38_y1_point = height-279.0f;
		line38_x2_point = 227.0f;
		line38_y2_point = height-369.0f;

		line39_x1_point = 227.0f;
		line39_y1_point = height-324.0f;
		line39_x2_point = 279.0f;
		line39_y2_point = height-279.0f;

		line40_x1_point = 227.0f;
		line40_y1_point = height-324.0f;
		line40_x2_point = 279.0f;
		line40_y2_point = height-369.0f;

		// for letter E
		line41_x1_point = 297.0f;
		line41_y1_point = height-279.0f;
		line41_x2_point = 297.0f;
		line41_y2_point = height-369.0f;

		line42_x1_point = 297.0f;
		line42_y1_point = height-279.0f;
		line42_x2_point = 346.0f;
		line42_y2_point = height-279.0f;

		line43_x1_point = 297.0f;
		line43_y1_point = height-324.0f;
		line43_x2_point = 346.0f;
		line43_y2_point = height-324.0f;

		line44_x1_point = 297.0f;
		line44_y1_point = height-369.0f;
		line44_x2_point = 346.0f;
		line44_y2_point = height-369.0f;

		// for letter Y
		line45_x1_point = 360.0f;
		line45_y1_point = height-279.0f;
		line45_x2_point = 386.0f;
		line45_y2_point = height-324.0f;

		line46_x1_point = 412.0f;
		line46_y1_point = height-279.0f;
		line46_x2_point = 386.0f;
		line46_y2_point = height-324.0f;

		line47_x1_point = 386.0f;
		line47_y1_point = height-324.0f;
		line47_x2_point = 386.0f;
		line47_y2_point = height-369.0f;
	}
}

void ResetValues() {
	// function to reset coordinates of characters so they won't be visible
	startMessageFlag = 0;
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
	// function to initialize a line
	glVertex3f(x1_point, y1_point, 0.0f);
	glVertex3f(x2_point, y2_point, 0.0f);
}

void MyLines() {
	// function to initialize many lines to create characters

	// for characters
	MyLine(line1_x1_point, line1_y1_point, line1_x2_point, line1_y2_point);
	MyLine(line2_x1_point, line2_y1_point, line2_x2_point, line2_y2_point);
	MyLine(line3_x1_point, line3_y1_point, line3_x2_point, line3_y2_point);
	MyLine(line4_x1_point, line4_y1_point, line4_x2_point, line4_y2_point);
	MyLine(line5_x1_point, line5_y1_point, line5_x2_point, line5_y2_point);

	// for start message
	MyLine(line6_x1_point, line6_y1_point, line6_x2_point, line6_y2_point);
	MyLine(line7_x1_point, line7_y1_point, line7_x2_point, line7_y2_point);
	MyLine(line8_x1_point, line8_y1_point, line8_x2_point, line8_y2_point);
	MyLine(line9_x1_point, line9_y1_point, line9_x2_point, line9_y2_point);
	MyLine(line10_x1_point, line10_y1_point, line10_x2_point, line10_y2_point);
	MyLine(line11_x1_point, line11_y1_point, line11_x2_point, line11_y2_point);
	MyLine(line12_x1_point, line12_y1_point, line12_x2_point, line12_y2_point);
	MyLine(line13_x1_point, line13_y1_point, line13_x2_point, line13_y2_point);
	MyLine(line14_x1_point, line14_y1_point, line14_x2_point, line14_y2_point);
	MyLine(line15_x1_point, line15_y1_point, line15_x2_point, line15_y2_point);
	MyLine(line16_x1_point, line16_y1_point, line16_x2_point, line16_y2_point);
	MyLine(line17_x1_point, line17_y1_point, line17_x2_point, line17_y2_point);
	MyLine(line18_x1_point, line18_y1_point, line18_x2_point, line18_y2_point);
	MyLine(line19_x1_point, line19_y1_point, line19_x2_point, line19_y2_point);
	MyLine(line20_x1_point, line20_y1_point, line20_x2_point, line20_y2_point);
	MyLine(line21_x1_point, line21_y1_point, line21_x2_point, line21_y2_point);
	MyLine(line22_x1_point, line22_y1_point, line22_x2_point, line22_y2_point);
	MyLine(line23_x1_point, line23_y1_point, line23_x2_point, line23_y2_point);
	MyLine(line24_x1_point, line24_y1_point, line24_x2_point, line24_y2_point);
	MyLine(line25_x1_point, line25_y1_point, line25_x2_point, line25_y2_point);
	MyLine(line26_x1_point, line26_y1_point, line26_x2_point, line26_y2_point);
	MyLine(line27_x1_point, line27_y1_point, line27_x2_point, line27_y2_point);
	MyLine(line28_x1_point, line28_y1_point, line28_x2_point, line28_y2_point);
	MyLine(line29_x1_point, line29_y1_point, line29_x2_point, line29_y2_point);
	MyLine(line30_x1_point, line30_y1_point, line30_x2_point, line30_y2_point);
	MyLine(line31_x1_point, line31_y1_point, line31_x2_point, line31_y2_point);
	MyLine(line32_x1_point, line32_y1_point, line32_x2_point, line32_y2_point);
	MyLine(line33_x1_point, line33_y1_point, line33_x2_point, line33_y2_point);
	MyLine(line34_x1_point, line34_y1_point, line34_x2_point, line34_y2_point);
	MyLine(line35_x1_point, line35_y1_point, line35_x2_point, line35_y2_point);
	MyLine(line36_x1_point, line36_y1_point, line36_x2_point, line36_y2_point);
	MyLine(line37_x1_point, line37_y1_point, line37_x2_point, line37_y2_point);
	MyLine(line38_x1_point, line38_y1_point, line38_x2_point, line38_y2_point);
	MyLine(line39_x1_point, line39_y1_point, line39_x2_point, line39_y2_point);
	MyLine(line40_x1_point, line40_y1_point, line40_x2_point, line40_y2_point);
	MyLine(line41_x1_point, line41_y1_point, line41_x2_point, line41_y2_point);
	MyLine(line42_x1_point, line42_y1_point, line42_x2_point, line42_y2_point);
	MyLine(line43_x1_point, line43_y1_point, line43_x2_point, line43_y2_point);
	MyLine(line44_x1_point, line44_y1_point, line44_x2_point, line44_y2_point);
	MyLine(line45_x1_point, line45_y1_point, line45_x2_point, line45_y2_point);
	MyLine(line46_x1_point, line46_y1_point, line46_x2_point, line46_y2_point);
	MyLine(line47_x1_point, line47_y1_point, line47_x2_point, line47_y2_point);
}

void MyDisplay(void) {
	glClear( GL_COLOR_BUFFER_BIT );
	
	glColor3ub(0,0,0);
	
	glBegin( GL_LINES );
	
		StartMessage(startMessageFlag);
		MyLines();
	
	glEnd();
	glFlush();
}

void MyKeyBoard( unsigned char key, int x, int y) {
	// function to detect keyboard keys and print the character accordingly
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
