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

//	for (int i = 0; i < points.size(); i++){
//			points[i].x += ofRandom(-5,5);
//			points[i].y += ofRandom(-5,5);
//		
	
	
	float x1 = sinOfTimeMapped * 2;
	float y2 = 200;
	
	ofPoint p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19,p20,p21,p22,p23,p24,p25,p26,p27,p28,p29,p30,p31;
	p1.set(589+ofRandom(-5,5), 625+ofRandom(-5,5));
	p2.set(580+ofRandom(-5,5), 622+ofRandom(-5,5));
	p3.set(571+ofRandom(-5,5), 619+ofRandom(-5,5));
	p4.set(568+ofRandom(-5,5), 619+ofRandom(-5,5));
	p5.set(407+ofRandom(-5,5), 506+ofRandom(-5,5));
	p6.set(398+ofRandom(-5,5), 506+ofRandom(-5,5));
	p7.set(371+ofRandom(-5,5), 501+ofRandom(-5,5));
	p8.set(339+ofRandom(-5,5), 488+ofRandom(-5,5));
	p9.set(297+ofRandom(-5,5), 457+ofRandom(-5,5));
	p10.set(253+ofRandom(-5,5), 415+ofRandom(-5,5));
	p11.set(230+ofRandom(-5,5), 380+ofRandom(-5,5));
	p12.set(219+ofRandom(-5,5), 331+ofRandom(-5,5));
	p13.set(224+ofRandom(-5,5), 276+ofRandom(-5,5));
	p14.set(281+ofRandom(-5,5), 206+ofRandom(-5,5));
	p15.set(313+ofRandom(-5,5), 188+ofRandom(-5,5));
	p16.set(376+ofRandom(-5,5), 161+ofRandom(-5,5));
	p17.set(480+ofRandom(-5,5), 152+ofRandom(-5,5));
	p18.set(558+ofRandom(-5,5), 179+ofRandom(-5,5));
	p19.set(640+ofRandom(-5,5), 240+ofRandom(-5,5));
	p20.set(692+ofRandom(-5,5), 302+ofRandom(-5,5));
	p21.set(743+ofRandom(-5,5), 390+ofRandom(-5,5));
	p22.set(764+ofRandom(-5,5), 453+ofRandom(-5,5));
	p23.set(774+ofRandom(-5,5), 516+ofRandom(-5,5));
	p24.set(774+ofRandom(-5,5), 561+ofRandom(-5,5));
	p25.set(765+ofRandom(-5,5), 586+ofRandom(-5,5));
	p26.set(749+ofRandom(-5,5), 603+ofRandom(-5,5));
	p27.set(719+ofRandom(-5,5), 622+ofRandom(-5,5));
	p28.set(681+ofRandom(-5,5), 631+ofRandom(-5,5));
	p29.set(646+ofRandom(-5,5), 632+ofRandom(-5,5));
	p30.set(611+ofRandom(-5,5), 632+ofRandom(-5,5));
	//p31.set(589, 625);
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
	ofCurveVertex(p10);
	ofCurveVertex(p11);
	ofCurveVertex(p12);
	ofCurveVertex(p13);
	ofCurveVertex(p14);  
	ofCurveVertex(p15);  
	ofCurveVertex(p16);
	ofCurveVertex(p17);  
	ofCurveVertex(p18);  
	ofCurveVertex(p19);  
	ofCurveVertex(p20);  
	ofCurveVertex(p21);  
	ofCurveVertex(p22);  
	ofCurveVertex(p23); 
	ofCurveVertex(p24);  
	ofCurveVertex(p25);  
	ofCurveVertex(p26);  
	ofCurveVertex(p27);  
	ofCurveVertex(p28);  
	ofCurveVertex(p29);  
	ofCurveVertex(p30);  
//	ofCurveVertex(p31); 
	ofEndShape();
	
	
}

//------------------------------------------------------------------





//------------------------------------------------------------------
