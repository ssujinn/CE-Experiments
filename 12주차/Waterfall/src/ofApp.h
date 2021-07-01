#pragma once

#include "ofMain.h"
#include "waterObj.h"
#include <vector>

class ln {
	public:
		int x1;
		int y1;
		int x2;
		int y2;
};	

class dt {
	public:
		int x1;
		int y1;
		bool r = 0;
};

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    /* WaterFall-related member variables Regions */
    
    // flag variables
    int draw_flag;
    int load_flag;
    
    // Line segment and dot related variables
    int num_of_line, num_of_dot;
    float dot_diameter;
	ln *l;
	dt *d;
	int nowDot;
	int draw_sub_flag = 0;

	int cur = 0, prev = 0;
    /* WaterFall-related member functions */
    
    void processOpenFileSelection(ofFileDialogResult openFileResult);
    void initializeWaterLines(); // 2nd week portion

	vector <waterObj> wl;
};
