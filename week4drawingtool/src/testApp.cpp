#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	ofSetVerticalSync(true);
	ofSetFrameRate(60);
    ofBackground(80,80,80);
}

//--------------------------------------------------------------
void testApp::update(){
	for (int i = 0; i < particles.size(); i++){
		particles[i].resetForce();
		particles[i].addDampingForce();
		particles[i].update();
	}
	
}


//--------------------------------------------------------------
void testApp::draw(){
	ofEnableAlphaBlending();
    ofSetColor(255,120,0,100);
    
    stroke.draw();
    ofFill();
	for (int i = 0; i < particles.size(); i++){
		particles[i].draw();
	}
	

    ofMesh mesh;
    mesh.setMode(OF_PRIMITIVE_TRIANGLE_STRIP);
    
    vector < ofPoint > pts = stroke.getVertices();
    
    for (int i = 3; i < pts.size(); i++){
        
        int i_m_1 = MAX(i-1,0);
        int i_p_1 = MIN(i+1, pts.size()-1);
        
        ofPoint pta = pts[i_m_1];
        ofPoint ptb = pts[i];
        ofPoint ptc = pts[i_p_1];
        
        //ofPoint diff = ptc - pta;
	
		//ofPoint avgdiff = (pts[i]-pts[i-1]);
		//	ofPoint avgdiff[n] = diff[n]/4;

		
		ofPoint diff = ((pts[i]-pts[i-1])+(pts[i-1]-pts[i-2])+(pts[i-2]-pts[i-3])+(pts[i-3]-pts[i-4])+(pts[i-4]-pts[i-5])+(pts[i-5]-pts[i-6]))/7;
		float d = (1.0/(float)ofDist(0,0,diff.x,diff.y)) * 100.0;
		if (d > .05){
			d==.05;
			cout << d<<endl;;
		//float width = diff.length();
		float width = d;
		
        float angle = atan2(diff.y, diff.x);
        
        angle += PI/2;
        
	
        //float width = diff.length(); //diff.length();
        
        ofPoint offsetA;
        offsetA.x = ptb.x + width * cos(angle);
        offsetA.y = ptb.y + width * sin(angle);
        
        ofPoint offsetB;
        offsetB.x = ptb.x - width * cos(angle);
        offsetB.y = ptb.y - width * sin(angle);

        ofLine(offsetA, offsetB);
        
        //ofColor col;
        //col.setHsb(ofMap(angle, -PI/2, 3*PI/2, 0,255, true), 100,255, ofMap(angle, -PI/2, 3*PI/2, 0,255, true));
        //mesh.addColor(col);
        mesh.addVertex(offsetA);
        //mesh.addColor(col);

        mesh.addVertex(offsetB);
        
		}
		
        
    }

    // draw the mesh
    ofEnableAlphaBlending();
    ofSetColor(255,120,0,100);
    ofFill();
    mesh.draw();
	
    
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
	prevMouseX = x;
	prevMouseY = y;
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
	
	ofPoint prevPt = stroke.getVertices()[stroke.getVertices().size()-1];
   // 1.0/(float)ofDist(0,0,diff.x,diff.y)) * 100.0;
    float distance = (prevPt - ofPoint(x,y)).length();
    float dx = x - prevMouseX;
	float dy = 1.0/(float)distance;
	
	particle myParticle;
	myParticle.setInitialCondition(x,y, dx*0.000,dy*10);
	
	particles.push_back(myParticle);
	
	particle lineParticle;
	lineParticle.setInitialCondition(x, y, 0, 0);
	particles.push_back(lineParticle);
    // instead of adding every stroke, only add a stroke if it's a certain distance from the last point;
    
//	ofPoint prevPt = stroke.getVertices()[stroke.getVertices().size()-1];
//    
//    float distance = (prevPt - ofPoint(x,y)).length();
//    
   // if (distance > 10){
        stroke.addVertex(x,y);
    //}
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

    stroke.clear();
    stroke.addVertex(x,y);
	particles.clear();
    
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}