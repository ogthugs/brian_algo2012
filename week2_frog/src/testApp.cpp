#include "testApp.h"
#include "ofMain.h"

//--------------------------------------------------------------
void testApp::setup(){

	
	// macs by default run on non vertical sync, which can make animation very, very fast
	// this fixes that: 
	
	ofSetVerticalSync(true);
	
	// set background: 
	
	ofEnableAlphaBlending();
	ofBackground(30,255,100);
		// set the position of the rectangle:
	myRectangle.pos.x = 50;
	myRectangle.pos.y = 50;
	for (int i = 0; i < 10; i++){
	myCars[i].posa.x = 250 + i*32;
	myCars[i].posa.y = 0;
	myCars[i].posb.x = 250 + i*32;
	myCars[i].posb.y =  1200;
	myCars[i].shaper = 0.01 + 0.1 * i; //set shaper here: 0.4, 0.6, 0.8 ....
	myCars[i].interpolateByPct(0);	// start at 0 pct
	}
	pct = 0;							// a variable we can alter...
		
}

//--------------------------------------------------------------
void testApp::update(){
	
	pct += 0.003f;
	if (pct > 1) pct =0; {
		for (int i = 0; i < 10; i++){
			myCars[i].interpolateByPct(pct);		// go between pta and ptb
		}
	}
	
		myRectangle.xenoToPoint(mouseX, mouseY);

}

//--------------------------------------------------------------
void testApp::draw(){
	
	ofSetColor(130, 130, 130);
	ofRect(400, ofGetHeight()/2, 300, ofGetHeight());
	ofSetColor(20, 20, 255);
	ofRect(950, ofGetHeight()/2, 400, ofGetHeight());
	
	for (int i = 0; i < 10; i++){
		ofSetColor(198,246,55);
		myCars[i].draw();
	}
	
	
	myRectangle.draw(mouseX, mouseY);
	
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
