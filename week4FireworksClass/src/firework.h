/*
 *  firework.h
 *  week4Fireworks
 *
 *  Created by Brian McFadden on 10/5/12.
 *  Copyright 2012 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef FIREWORK_H
#define FIREWORK_H



#include "ofMain.h"

class firework {
		
	public:
		
		void update();
		void draw();
		void populate();
			
		vector <particle> particles;
		
	
};

#endif // FIREWORK_H
