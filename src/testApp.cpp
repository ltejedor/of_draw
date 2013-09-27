#include "testApp.h"

//one line comment
/*
    multi line comment
    go crazy wahhh
*/

float circleX;
float circleY;
float circleRadius;
float circleSpeed;

float circleTwoX;
float circleTwoY;
float circleTwoRadius;

//--------------------------------------------------------------
void testApp::setup(){
    circleSpeed = 0;
    
    circleRadius = 20;
    circleTwoRadius = 20;
    
    circleTwoX = 200;
    circleTwoY = 200;
}

//--------------------------------------------------------------
void testApp::update(){
    circleY = circleY + circleSpeed;
    
    circleX = mouseX;
    circleY = mouseY;
    
    if (ofDist(circleX, circleY, circleTwoX, circleTwoY) < circleRadius + circleTwoRadius) {
        circleTwoX = (circleSpeed+1 + (circleTwoX));
    }

}

//--------------------------------------------------------------
void testApp::draw(){
    ofFill();
    ofSetColor(10, 40, 10);
    ofCircle(circleX, circleY, circleRadius);
    
    ofSetColor(50, 100, 150);
    ofCircle(circleTwoX, circleTwoY, circleTwoRadius);

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

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