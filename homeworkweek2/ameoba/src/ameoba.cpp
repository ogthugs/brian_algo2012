#include "ameoba.h"

//------------------------------------------------------------------
ameoba::ameoba(){

	pos.set(10,10);

}

//------------------------------------------------------------------

void ameoba::draw() {
	
	float sinOfTime = sin( ofGetElapsedTimef() * 3 );
	float sinOfTimeMapped = ofMap( sinOfTime, -1, 1, 1, 4);
	float cosOfTime = cos(ofGetElapsedTimef() * 2 );

	
	float x1 = sinOfTimeMapped * 2;
	float y2 = 200;
	ofPoint p1,p2,p3,p4,p5,p6,p7,p8,p9;
	p1.set(110,320/sinOfTimeMapped);
	p2.set(120*sinOfTimeMapped+10,350);
	p3.set(154,345+x1);
	p4.set(198,329+cosOfTime);
	p5.set(234,250);
	p6.set(150,50);
	p7.set(150,50);
	p8.set(150,50);
	p9.set(150,50);
	p9.set(150,50);
	
	ofBeginShape();
	ofCurveVertex(p1);
	ofCurveVertex(p2);
	ofCurveVertex(p3);
	ofCurveVertex(p4);
	ofCurveVertex(p5);
	ofCurveVertex(p6);
	ofCurveVertex(p7);
	ofCurveVertex(p8);
	ofCurveVertex(p9);
	ofEndShape();

}

//------------------------------------------------------------------





//------------------------------------------------------------------
