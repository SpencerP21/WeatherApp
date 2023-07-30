#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    getData();
    
	headerBar.set(0, 0, 1920, 125); 
    
	tempRect.set(20, 135, 482, 100);
	tempRect2.set(522, 135, 482, 100);
	
    

    // setup gui
    gui.setup();

	gui.add(title.setup("Menu", "Search")); // Adds GUI Box
    gui.add(address.setup("Address", true));
    gui.add(coordinates.setup("Coordinates", false));

    // setup theme GUI
    themes.setup();

    themes.setPosition(800, 10);

    theme1.setBackgroundColor(ofColor(0, 0, 0));
    theme2.setBackgroundColor(ofColor(255, 255, 255));
   

    themes.add(themeTitle.setup("Menu", "Themes"));
    themes.add(theme1.setup("Light", true));
    themes.add(theme2.setup("Dark", false));

    theme1.setTextColor(ofColor(255, 255, 255)); // Set Text Black
	theme2.setTextColor(ofColor(0, 0, 0)); // Set Text White
    
}

void ofApp::getData() {

    json.open("https://api.open-meteo.com/v1/forecast?latitude=52.52&longitude=13.41&hourly=temperature_2m"); // Open JSON URl For Main Page Data
	testAPI = json["hourly"]["temperature_2m"][0].asString(); // Returns The First Hourly Temperature From The API (0:00 midnight)
    testAPIUSA = json["hourly"]["temperature_2m"][0].asString();

    
	cout << testAPI << endl; // Display Temp As Celsius
	cout << ((stof(testAPIUSA) * 9 / 5) + 32) << " F" << endl; // Display Temp As Fareinheit
}
//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255, 255, 255);
	ofDrawRectangle(headerBar); // Draws Header Bar

    // draw gui   
    gui.draw();

    // draw theme gui
    themes.draw();

	// draw temp rect
    ofSetColor(180, 76, 12);
	ofDrawRectangle(tempRect);
	ofDrawRectangle(tempRect2);
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == OF_KEY_F11) {
		ofToggleFullscreen(); // Toggles Fullscreen
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
