#include "testApp.h"
#include "ofMain.h"

//--------------------------------------------------------------
void testApp::setup(){

	
	// macs by default run on non vertical sync, which can make animation very, very fast
	// this fixes that: 
	
	ofSetVerticalSync(true);
	
	// set background: 
	
	ofBackground(30,30,30);
	
	// now we are using multiple rectangles....
	// set the "a" and "b" positions of the
	for (int i = 0; i < 10; i++){
		myRectangles[i].posa.x = 0;
		myRectangles[i].posa.y = 10 + i*20;
		myRectangles[i].posb.x = 400;
		myRectangles[i].posb.y = 10 + i*20;
		myRectangles[i].shaper = 0.01 + 0.1 * i; //set shaper here: 0.4, 0.6, 0.8 ....
		myRectangles[i].interpolateByPct(0);	// start at 0 pct
	}
	pct = 0;							// a variable we can alter...
} 

//--------------------------------------------------------------
void testApp::update(){
	
	
	pct += 0.003f;							// increase by a certain amount
	if (pct > 1) pct = 0;					// just between 0 and 1 (0% and 100%)
	for (int i = 0; i < 10; i++){
		myRectangles[i].interpolateByPct(pct);		// go between pta and ptb
	}

}

//--------------------------------------------------------------
void testApp::draw(){
	for (int i = 0; i < 10; i++){
		ofEnableAlphaBlending();
		ofSetColor(i*15,246,55,pct*255);
		//if (i == 3) ofSetColor(255,0,0);
		myRectangles[i].draw();
	}
	
	ofSetColor(255,255,255);
	for (int i = 0; i < 10; i++){
		ofLine(0,i*20, ofGetWidth(), i*20);
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
}

//--------------------------------------------------------------
void testApp::mouseReleased(){
}
