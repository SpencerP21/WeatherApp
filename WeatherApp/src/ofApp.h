#pragma once

#include "ofMain.h"

#include "ofxGui.h"

#include "ofxJSON.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void getData();
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

		ofxJSONElement json; // Stores Data From API
		string testAPI;
		string testAPIUSA;
		
		ofRectangle headerBar;
		
		// Temperature Rectangles
		ofRectangle tempRect;
		ofRectangle tempRect2;
		ofRectangle tempRect3;
		ofRectangle tempRect4;
		ofRectangle tempRect5;

		// All GUI Elements
		ofxPanel gui;
		ofxPanel themes;

		ofxLabel title, themeTitle;
		ofxButton address, coordinates;
		ofxButton theme1; // Light Theme
		ofxButton theme2; // Dark Theme
};
