#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	
	ofBackground(255,255,255);

	lineCounter = 0;

}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
	ofSetColor(0,0,0);
	ofNoFill();
	for (int i = 0; i < lineCounter; i++) {
		ofBeginShape();
		for (int j = 0; j < ptsVec[i].size(); j++) {
			ofVertex(ptsVec[i][j].x, ptsVec[i][j].y);
		}
		ofEndShape();
	}
	ofBeginShape();
	for (int a =0; a < pts.size(); a++) {
		ofVertex(pts[a].x, pts[a].y);
	}
	ofEndShape();
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
	if (key == ' ') {
		pts.clear();
	}
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

	timePoint temp;
	temp.x = x;
	temp.y = y;
	temp.t = ofGetElapsedTimef() - startTime;
	pts.push_back(temp);
	
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
	

		
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
	ptsVec.push_back(pts);
	lineCounter ++;
	pts.clear();
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}
