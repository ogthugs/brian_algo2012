/*
 *  firework.cpp
 *  week4Fireworks
 *
 *  Created by Brian McFadden on 10/5/12.
 *  Copyright 2012 __MyCompanyName__. All rights reserved.
 *
 */

#include "firework.h"
#include "particle.h"
#include "particle.cpp"
#include "ofMain.h"

//------------------------------------------------------------
void firework::populate(){
    // fill the particle array
	
	for (int i = 0; i < 100; i++){
		particle myParticle;
		myParticle.damping = ofRandom(0.01,0.03);
		particles.push_back(myParticle);
	}
    
}