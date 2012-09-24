#include "testApp.h"
#include "ofMain.h"

//--------------------------------------------------------------
void testApp::setup(){

	
	// macs by default run on non vertical sync, which can make animation very, very fast
	// this fixes that: 
	
	ofSetVerticalSync(true);
	
	// set background: 
	
	ofEnableAlphaBlending();
	ofBackground(30,30,30);
	
	
	// set the position of the rectangle:
	for(int i=0;i<30;i++){
		rectangleArray[i].pos.x = 100;
		rectangleArray[i].pos.y = 50;
		rectangleArray[i].catchUpSpeed = 0.02f+(0.005*i);		
	}

	
}

//--------------------------------------------------------------
void testApp::update(){
	
	for(int i=0;i<30;i++){
		rectangleArray[i].xenoToPoint(mouseX, mouseY);
	}
}

//--------------------------------------------------------------
void testApp::draw(){
	
	for(int i=0;i<30;i++){
		rectangleArray[i].draw(i);
	}
}

//--------------------------------------------------------------
void testApp::keyPressed  (int key){
}

//--------------------------------------------------------------
void testApp::keyReleased  (int key){
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
//	pos_x=x;
//	pos_y=y;
}

//--------------------------------------------------------------
void testApp::mouseReleased(){
}
