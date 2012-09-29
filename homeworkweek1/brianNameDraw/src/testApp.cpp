#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	ofBackground(0, 0, 0);
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
	
	//this is the letter B, b is for brian
	ofSetColor(17, 100, 255);
	ofEnableSmoothing();
	ofCircle(150, 200, 50);
	ofCircle(150, 300, 60);
	ofRect(90, 150, 50, 210);
	
	//this is the letter R
	ofSetColor(255, 255, 0);
	ofEnableSmoothing();
	ofCircle(300, 200, 50);
	ofTriangle(250, 200, 250, 350, 380, 350);

	//this is the letter i
	ofSetColor(255, 51, 204);
	ofRect(410, 220, 50, 125);
	ofCircle(435, 180, 25);
	
	//this is the letter A
	ofSetColor(0, 255, 0);
	ofTriangle(540,150, 590, 350, 490, 350);
	
	//this is the letter N
	ofSetColor(255, 127, 0);
	ofTriangle(630,150, 740, 350, 630, 350);
	ofRect(720, 150, 20, 200);

	
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}