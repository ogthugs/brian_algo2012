
#include "cars.h"

//------------------------------------------------------------------
cars::cars(){
	shaper = 3.0;
}

//------------------------------------------------------------------
void cars::draw() {
	ofFill();
	ofSetRectMode(OF_RECTMODE_CENTER); // center around the position
	ofSetColor(255,255,255);
    ofRect(pos.x, pos.y, 30,100);
	ofSetColor(255,0,0);
	ofRect(pos.x, pos.y+110, 30, 30);
}

//------------------------------------------------------------------

void cars::interpolateByPct(float myPct){
	pct = powf(myPct, shaper); //
	pos.x = (1-pct) * posa.x + (pct) * posb.x;
	pos.y = (1-pct) * posa.y + (pct) * posb.y;
}