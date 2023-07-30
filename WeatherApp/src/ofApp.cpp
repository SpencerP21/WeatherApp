#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	headerBar.set(0, 0, 1920, 125); 
    getData();

    // setup gui
    gui.setup();

	gui.add(title.setup("Menu", "Search")); // Adds GUI Box
    gui.add(address.setup("Address", true));
    gui.add(coordinates.setup("Coordinates", false));
    gui.add(toggleFullscreen.setup("Fullscreen", false));

    // setup theme GUI
    themes.setup();

    themes.setPosition(220, 10);

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
    
	cout << testAPI << endl;
}
//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofDrawRectangle(headerBar); // Draws Header Bar

    // draw gui   
    gui.draw();

    // draw theme gui
    themes.draw();

   // cout << testAPI << endl;
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
