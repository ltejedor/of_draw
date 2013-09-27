#include "testApp.h"

//one line comment
/*
    multi line comment
    go crazy wahhh
*/

float playerX;
float playerY;
float playerRadius;
float playerSpeed;
bool isHoldingObject;

int score;
float scoreX;
float scoreY;

ofTrueTypeFont font;

float goalX;
float goalY;
float goalRadius;

const int numofObj = 10;
float objectX[numofObj];
float objectY[numofObj];

//--------------------------------------------------------------
void testApp::setup(){
    playerX = ofRandom(ofGetWidth());
    playerY = ofRandom(ofGetHeight());
    playerRadius = 30;
    playerSpeed = 20;
    isHoldingObject = false;

}

//--------------------------------------------------------------
void testApp::update(){


}

//--------------------------------------------------------------
void testApp::draw(){
    ofFill();
    
    ofBackground(0, 100, 42);
    
    ofSetColor(120, 200, 255);
    ofCircle(playerX, playerY, playerRadius);

}
//--------------------------------------------------------------
void testApp::keyPressed(int key){
    if (key == OF_KEY_UP) {
        playerY -= playerSpeed;
    }
    if (key == OF_KEY_DOWN) {
        playerY += playerSpeed;
    }

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