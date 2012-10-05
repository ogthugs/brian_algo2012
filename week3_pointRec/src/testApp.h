#ifndef _TEST_APP
#define _TEST_APP


#include "ofMain.h"
#include "timePoint.h"


class testApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();
		
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		
	
		vector <vector <timePoint> > ptsVec;
		vector <timePoint> pts;
			
		float			startTime;
		bool			bRecording;
		float			playbackStartTime;
		ofPoint			getPositionForTime(float time);
		int				iter;
		int				lineCounter;
	
};

#endif