
#include "cars.h"

//------------------------------------------------------------------
cars::cars(){
	shaper = 3.0;
}

//------------------------------------------------------------------
void cars::draw() {
	ofFill();
	ofSetRectMode(OF_RECTMODE_CENTER); // center around the position
	//ofSetColor(198,246,55);
    ofRect(pos.x, pos.y, 20,20);
}

//------------------------------------------------------------------

void cars::interpolateByPct(float myPct){
	pct = powf(myPct, shaper); //
	pos.x = (1-pct) * posa.x + (pct) * posb.x;
	pos.y = (1-pct) * posa.y + (pct) * posb.y;
}