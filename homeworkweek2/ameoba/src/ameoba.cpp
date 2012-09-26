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
//			points[i].x += ofRandom(-3,3);
//			points[i].y += ofRandom(-3,3);
//		
	
	
	float x1 = sinOfTimeMapped * 2;
	float y2 = 200;
	ofPoint p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,p19,p20,p21,p22,p23,p24,p25,p26,p27,p28,p29,p30,p31;
	p1.set(589+ofRandom(-3,3), 625+ofRandom(-3,3));
	p2.set(580+ofRandom(-3,3), 622+ofRandom(-3,3));
	p3.set(571+ofRandom(-3,3), 619+ofRandom(-3,3));
	p4.set(568+ofRandom(-3,3), 619+ofRandom(-3,3));
	p5.set(407+ofRandom(-3,3), 506+ofRandom(-3,3));
	p6.set(398+ofRandom(-3,3), 506+ofRandom(-3,3));
	p7.set(371+ofRandom(-3,3), 501+ofRandom(-3,3));
	p8.set(339+ofRandom(-3,3), 488+ofRandom(-3,3));
	p9.set(297+ofRandom(-3,3), 457+ofRandom(-3,3));
	p10.set(253+ofRandom(-3,3), 415+ofRandom(-3,3));
	p11.set(230+ofRandom(-3,3), 380+ofRandom(-3,3));
	p12.set(219+ofRandom(-3,3), 331+ofRandom(-3,3));
	p13.set(224+ofRandom(-3,3), 276+ofRandom(-3,3));
	p14.set(281+ofRandom(-3,3), 206+ofRandom(-3,3));
	p15.set(313+ofRandom(-3,3), 188+ofRandom(-3,3));
	p16.set(376+ofRandom(-3,3), 161+ofRandom(-3,3));
	p17.set(480+ofRandom(-3,3), 152+ofRandom(-3,3));
	p18.set(558+ofRandom(-3,3), 179+ofRandom(-3,3));
	p19.set(640+ofRandom(-3,3), 240+ofRandom(-3,3));
	p20.set(692+ofRandom(-3,3), 302+ofRandom(-3,3));
	p21.set(743+ofRandom(-3,3), 390+ofRandom(-3,3));
	p22.set(764+ofRandom(-3,3), 453+ofRandom(-3,3));
	p23.set(774+ofRandom(-3,3), 516+ofRandom(-3,3));
	p24.set(774+ofRandom(-3,3), 561+ofRandom(-3,3));
	p25.set(765+ofRandom(-3,3), 586+ofRandom(-3,3));
	p26.set(749+ofRandom(-3,3), 603+ofRandom(-3,3));
	p27.set(719+ofRandom(-3,3), 622+ofRandom(-3,3));
	p28.set(681+ofRandom(-3,3), 631+ofRandom(-3,3));
	p29.set(646+ofRandom(-3,3), 632+ofRandom(-3,3));
	p30.set(611+ofRandom(-3,3), 632+ofRandom(-3,3));
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
