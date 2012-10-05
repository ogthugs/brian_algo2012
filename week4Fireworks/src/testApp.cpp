#include "testApp.h"


//--------------------------------------------------------------
void testApp::setup(){	
	
	ofSetVerticalSync(true);
	ofSetFrameRate(60);
	
		rad = 5; 
	
	isMoving = false;
	isExploding = false;
	particleSet=true;
		for (int i = 0; i < 100; i++){
			particle myParticle;
	//		float vx = ofRandom(sin(-4),sin(4));
	//		float vy = ofRandom(sin(-4),sin(4));
	//		myParticle.setInitialCondition(0,0,vx, vy);
	//		// more interesting with diversity :)
	//		// uncomment this: 
			myParticle.damping = ofRandom(0.01,0.03);
			particles.push_back(myParticle);
		}
	
	dot_pos = ofGetHeight();
	
}

//--------------------------------------------------------------
void testApp::update(){

	// on every frame 
	// we reset the forces
	// add in any forces on the particle
	// perfom damping and
	// then update
	dot_pos -= 3;
	if(dot_pos < 200){
		//isMoving = false;
		isExploding = true;
	}
	if(isExploding == true){
		dot_pos =ofGetHeight();
		for (int i = 1; i < particles.size(); i++){
			//float a = ofRandom(0,2*PI);
			float a = i/(float)particles.size() * (2*PI);
			float vx = (cos(a)*rad)*ofRandom(-2,2)/2;
			float vy = (sin(a)*rad)*ofRandom(-2,2)/2;
			particles[i].setInitialCondition(ofGetWidth()/2.0, 200,vx, vy);	
			
		}	
		isExploding = false;
		particleSet=-particleSet;
	}
	
	
	for (int i = 0; i < particles.size(); i++){
		particles[i].resetForce();
		particles[i].addForce(0, 0.03f);  // gravity
		particles[i].addDampingForce();
		particles[i].update();
	}

}

//--------------------------------------------------------------
void testApp::draw(){

	ofSetColor(0x000000);
	
	if(isMoving){
		ofCircle(ofRandom(ofGetWidth()), dot_pos, 5);
	}
	
	
	
	for (int i = 0; i < particles.size()/2; i++){
		particles[i].draw();
	}
	
	
//	for (int i = 0; i < particles.size(); i++){
//		//float a = ofRandom(0,2*PI);
//		float a = i/(float)particles.size() * (2*PI);
//		float vx = (cos(a)*rad)*ofRandom(-2,2)/2;
//		float vy = (sin(a)*rad)*ofRandom(-2,2)/2;
//		particles[i].setInitialCondition(ofRandom(0,ofGetScreenWidth()),ofRandom(0,ofGetScreenHeight()),vx, vy);	
//		
//	}
//	
}

//--------------------------------------------------------------
void testApp::keyPressed  (int key){ 
}

//--------------------------------------------------------------
void testApp::keyReleased  (int key){ 
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

	exp = ofRandom(0.2, 0.6);
	dot_pos = ofGetHeight();
	isMoving = true;

}

//--------------------------------------------------------------
void testApp::mouseReleased(){
}
