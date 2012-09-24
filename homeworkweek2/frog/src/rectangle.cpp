#include "rectangle.h"


//------------------------------------------------------------------
rectangle::rectangle(){
	catchUpSpeed = 0.03f;
	pos.set(0,0);
	prevPos.set(0,0);
}

//------------------------------------------------------------------
void rectangle::draw(float catchX, float catchY) {
	ofFill();
	ofSetRectMode(OF_RECTMODE_CENTER); // center around the position
    //ofSetColor(198,246,55);
	//float pct = ofMap(pos.x, 0, ofGetWidth(), 0,1,true);
    //ofColor temp;
    //temp.setHsb( pct * 255,255,255);
    //ofEnableAlphaBlending();

	float dizt = ofDist(catchX,catchY,pos.x,pos.y);
	
	float a = -abs(sin(ofGetElapsedTimef()*10))*400*(dizt/1200.0);
	ofSetColor(197, 255, 0, 255);
//	if(a<0.1){
//		ofSleepMillis(500);	
//	}
	float sinOfTime = sin( ofGetElapsedTimef() * 5 );
	float sinOfTimeMapped = ofMap( sinOfTime, -1, 1, 20, 30);
	if (dizt>100) {
		sinOfTimeMapped=25;
	}
	cout << dizt << endl;
	//ofCircle(pos.x, pos.y+a, 20);
	
	ofPushMatrix();
	ofTranslate(pos.x, pos.y, 0);
	ofRotateZ(angle * RAD_TO_DEG);

	if(catchX>pos.x){
	ofCircle(0,0+a,0, sinOfTimeMapped);
	}else{
	ofCircle(0,0-a,0, sinOfTimeMapped);	
	}
	
	//ofCircle(0, 0-a, 10);
	
	
	ofPopMatrix();
}

//------------------------------------------------------------------
void rectangle::xenoToPoint(float catchX, float catchY){
//	catchUpSpeed = abs(cos(ofGetElapsedTimef()*2))*0.03;
	pos.x = catchUpSpeed * catchX + (1-catchUpSpeed) * pos.x; 
	pos.y = catchUpSpeed * catchY + (1-catchUpSpeed) * pos.y;
	//pos.y = abs(sin(ofGetElapsedTimef())*(50));
	
	float dx = pos.x - prevPos.x;
	float dy = pos.y - prevPos.y;
	
	
	angle = atan2(dy, dx);
	
	prevPos.x = pos.x;
	prevPos.y = pos.y;
	
}
