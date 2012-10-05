#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	
	ofBackground(255,255,255);
	bRecording = false;
	playbackStartTime = 0;
	lineCounter = 0;
	iter = 0;
	
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
	
//loop through drawing with circle
	ofPoint pos = getPositionForTime(ofGetElapsedTimef() - playbackStartTime);
	ofFill();
	ofSetColor(197, 255, 0);
	ofCircle(pos.x, pos.y, 10);
	cout << pos << endl;

	
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
	temp.t = ofGetElapsedTimef();// - startTime;
	pts.push_back(temp);
	//cout << temp.t << endl;

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
	
	iter = 0;
	bRecording = true;
	//startTime = ofGetElapsedTimef();
	timePoint temp;
	temp.x = x;
	temp.y = y;
	temp.t = 0;
	pts.push_back(temp);
	
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
	
	bRecording = false;
	playbackStartTime = ofGetElapsedTimef();
	ptsVec.push_back(pts);
	lineCounter ++;
	//pts.clear();
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
ofPoint testApp::getPositionForTime(float time){
	
	//are we recording
	
	if(bRecording == true){
		return ofPoint(0,0,0);
	}else if (pts.size() < 2) {
		return ofPoint(0,0,0);
	}
	
	
	//everywhere subtract this
	//pts[0].t

	//where in the drawing are we?
	
	//(a) figure out where are we in the cycle
	
	//use this in place of original while loop to find out if we are in a loop or at the end
	
	time = time - (((pts[pts.size()-1].t)-pts[0].t) * iter);
	if(time >=((pts[pts.size()-1].t)-pts[0].t)){
		iter++;
		
	}
		
	ofPoint pos;
	
		for (int i =0; i < (pts.size()-1)-pts[0].t; i++){
			 if(time >= pts[i].t && time< pts[i+1].t){
											  
			//calculate pct:

		  float part = time - ((pts[i].t)-pts[0].t);
		  float whole = ((pts[i+1].t)-pts[0].t) - ((pts[i].t)-pts[0].t);
		  float pct = part / whole;
		  
		//where are we between a and b
		  
		  pos.x = (1-pct) * pts[i].x + (pct) * pts[i+1].x;
		  pos.y = (1-pct) * pts[i].y + (pct) * pts[i+1].y;


		}
	}
												  
	return pos;
}