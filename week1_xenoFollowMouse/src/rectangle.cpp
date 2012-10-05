#include "rectangle.h"


//------------------------------------------------------------------
rectangle::rectangle(){
	catchUpSpeed = 0.03f;
}

//------------------------------------------------------------------
void rectangle::draw(int numberInArray) {
	ofFill();
	ofSetRectMode(OF_RECTMODE_CENTER); // center around the position
    //ofSetColor(198,246,55);
	float pct = ofMap(pos.x, 0, ofGetWidth(), 0,1,true);
    ofColor temp;
    temp.setHsb( pct * 255,255,255);
    ofEnableAlphaBlending();

	ofSetColor(temp.r, temp.g, temp.b,numberInArray);
	ofCircle(pos.x, pos.y, log(numberInArray+1/2.0)*5.0);
}

//------------------------------------------------------------------
void rectangle::xenoToPoint(float catchX, float catchY){
	pos.x = catchUpSpeed * catchX + (1-catchUpSpeed) * pos.x; 
	pos.y = catchUpSpeed * catchY + (1-catchUpSpeed) * pos.y;
	
	
}
