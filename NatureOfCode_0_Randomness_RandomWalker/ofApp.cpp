#include "ofApp.h"
/* From Daniel Shiffman's Nature of Code, originally made using Processing and then p5.js */

//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(0);
	ofSetBackgroundAuto(false); // comment out to only see the walker's movements


	// place the start point of the walker at the center of the canvas

	startX = ofGetWidth() / 2;
	startY = ofGetHeight() / 2;

	radius = 1;
	
}

//--------------------------------------------------------------
void ofApp::update(){

	// the simple, 4-steps-possible option:

//	step = int(ofRandom(0, 4)); // get a random integer between 0 and 3 to decide in which direction the walker should go (like a dice roll)

//	if (step == 0){
//		startX += 2;
//	}
//	else if (step == 1) {
//		startX -= 2;
//	}
//	else if (step == 2) {
//		startY += 2;
//	}
//	else {
//		startY -= 2;
//	}

	// the "any direction" option:

//	stepX = int(ofRandom(4)) - 1;
//	stepY = int(ofRandom(4)) - 1;
//
//	startX += stepX;
//	startY += stepY;

	// the "any step, any direction" option:

	stepX = ofRandom(-2, 2);
	stepY = ofRandom(-2, 2);

	startX += stepX;
	startY += stepY;


}

//--------------------------------------------------------------
void ofApp::draw(){

	ofSetColor(255, 25); // the Walker is somewhat transparent, just remove the alpha value to get the basic white one
	ofDrawCircle(startX, startY, radius); 
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
