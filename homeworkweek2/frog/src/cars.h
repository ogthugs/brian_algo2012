#ifndef CARS_H
#define CARS_H

#include "ofMain.h"

class cars {
	
public:
	
	cars();
	
	void draw();
	void interpolateByPct(float myPct);
	
	ofPoint		pos;
	ofPoint		posa;
	ofPoint		posb;
	float		pct;	// what pct are we between "a" and "b"
	float		shaper;
	
};

#endif // CARS_H
