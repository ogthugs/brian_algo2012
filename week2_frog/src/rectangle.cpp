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
//	ofSetColor(197+ sinOfTimeMapped, 255, 0, 255);
//	if(a<0.1){
//		ofSleepMillis(500);	
//	}
	float sinOfTime = sin( ofGetElapsedTimef() * 3 );
	float sinOfTimeMapped = ofMap( sinOfTime, -1, 1, 20, 30);
	if (dizt>5) {
		sinOfTimeMapped=20;
		ofSetColor(20 * sinOfTimeMapped/2, 255, 0, 255);

	}
	cout << dizt << endl;
	
	
	//ofCircle(pos.x, pos.y+a, 20);
	
	ofPushMatrix();
	ofTranslate(pos.x, pos.y, 0);
	ofRotateZ(angle * RAD_TO_DEG);

	if(catchX>pos.x){
	//eyes
	ofSetColor(255, 255, 255);
	ofCircle(20,-20+a, 10);
	ofSetColor(0, 0, 0);
	ofEllipse(20,-20+a,5,10);

	//body
	ofSetColor(197, 255, 0);
	ofCircle(-5, -10+a,20);	
	ofEllipse(-20, -4+a, 60,50);
		
	//throat
	ofSetColor(20 * sinOfTimeMapped/2, 255, 0, 255);	
	ofCircle(5,0+a, sinOfTimeMapped);

	//eyes
	ofSetColor(255, 255, 255);
	ofCircle(-5,-25+a, 10);
	ofSetColor(0, 0, 0);
	ofEllipse(-5,-25+a, 5,10);

	//legs	
	ofSetColor(197, 255, 0);
	ofEllipse(-25+a,-15-a,5,10);
	ofSetLineWidth(20);
	ofLine(-20, -4+a,-25+a,-15-a);

		
	
	}else{
	//eyes
	ofSetColor(255, 255, 255);
	ofCircle(20,20-a, 10);	
	ofSetColor(0, 0, 0);
	ofEllipse(20,20-a, 5, 10);	

	//body
	ofSetColor(197, 255, 0);
	ofCircle(-5, 10-a,20);
	ofEllipse(-20, -4-a, 60,50);

	//throat
	ofSetColor(20 * sinOfTimeMapped/2, 255, 0, 255);
	ofCircle(5,0-a,0, sinOfTimeMapped);	
	
	//eyes	
	ofSetColor(255, 255, 255);
	ofCircle(-5,25-a, 10);
	ofSetColor(0, 0, 0);
	ofEllipse(-5,25-a,5,10);
	
	//legs	
	ofSetColor(197, 255, 0);
	ofEllipse(-25+a,-15-a,5,10);
	ofSetLineWidth(20);
	ofLine(-20, -4-a,-25+a,-15-a);
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
