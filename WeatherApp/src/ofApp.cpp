#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	headerBar.set(0, 0, 1024, 100); 

    // setup gui
    gui.setup();

    gui.add(title.setup("Menu", "Search"));
    gui.add(address.setup("Address"));
    gui.add(address.setup("Coordinates"));
    gui.add(toggleFullscreen.setup("Fullscreen?", false));

    // setup theme GUI
    themes.setup();

    themes.setPosition(220, 10);

    theme1.setBackgroundColor(ofColor(195, 195, 195));
    theme2.setBackgroundColor(ofColor(195, 195, 195));
   

    themes.add(themeTitle.setup("Menu", "Themes"));
    themes.add(theme1.setup("Light", true));
    themes.add(theme2.setup("Dark", false));

    theme1.setTextColor(ofColor(0, 0, 0));
    theme2.setTextColor(ofColor(255, 255, 255));
    
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
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
