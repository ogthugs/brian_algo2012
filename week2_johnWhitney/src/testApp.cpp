#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	
	ofSetVerticalSync(true);
	
	ofBackground(0,0,0);
	
	ofSetCircleResolution(100);
	
	

}

//--------------------------------------------------------------
void testApp::update(){
	
	
	

}

//--------------------------------------------------------------
void testApp::draw(){
	ofEnableAlphaBlending();
	float xorig = ofGetWidth()/2;
	float yorig = ofGetHeight()/2;
	//float xorig = mouseX;
	//float yorig = mouseY;
	
	
for (int n = 0; n < 8; n++){
	for (int i = 0; i < 8; i++){
	
		float radius = (cos(ofGetElapsedTimef()/6.0) * 50 * (i+n));
		float angle = sin(ofGetElapsedTimef() * (1 + (i+n) / 20.0))*5.0;
		float x1 = xorig + radius * cos(angle);
		float y1 = yorig + radius * -sin(angle);
		
		float x2 = xorig + radius * cos(angle+PI/2.0);
		float y2 = yorig + radius * -sin(angle+PI/2.0); //one circle = 2*PI
		
		float x3 = xorig + radius * cos(angle-PI/2.0);
		float y3 = yorig + radius * -sin(angle-PI/2.0);

		float x4 = xorig + radius * cos(-angle);
		float y4 = yorig + radius * -sin(-angle);
		
		ofSetRectMode(OF_RECTMODE_CENTER);
		ofSetColor(100,n*25,i*25,100);
		ofCircle(y3,x3,8);
		ofSetColor(100,i*25,n*25,100);
		ofCircle(y2,x2,8);
		ofSetColor(100,angle/2.0,radius/2.0,100);
		ofCircle(y1,x1,8);
		ofSetColor(100,radius/2.0,angle/2.0,100);
		ofCircle(y4, x4,8);
		


	}
}
	

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

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

