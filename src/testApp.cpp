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

int score;
float scoreX;
float scoreY;

ofTrueTypeFont font;

float goalX;
float goalY;
float goalRadius;

const int numofObj = 10;
bool objectInGoal[numofObj];
float objectX[numofObj];
float objectY[numofObj];
float objectRadius;
bool isHoldingObject[numofObj];



//--------------------------------------------------------------
void testApp::setup(){
    playerX = ofRandom(ofGetWidth());
    playerY = ofRandom(ofGetHeight());
    playerRadius = 30;
    playerSpeed = 20;
    objectRadius = 10;
    
    for (int i = 0; i < numofObj; i++) {
        objectX[i] = ofRandom(ofGetWidth());
        objectY[i] = ofRandom(ofGetHeight());
    }
    
    goalX = 400;
    goalY = 400;
    goalRadius = 55;
    
    font.loadFont("Cabin-Regular.otf", 24);
    

}

//--------------------------------------------------------------
void testApp::update(){
    
    for (int i = 0; i< numofObj; i++) {
        if (ofDist(objectX[i], objectY[i], playerX, playerY) < objectRadius + playerRadius) {
            isHoldingObject[i] = true;
        } else{
            isHoldingObject[i] = false;
        }
        
        if (isHoldingObject[i]) {
            objectX[i] = playerX;
            objectY[i] = playerY;
        }
        
        if (!objectInGoal[i] && isHoldingObject[i]) {
            if (ofDist(objectX[i], objectY[i], goalX, goalY) < objectRadius + goalRadius) {
                score++;
                objectY[i] = goalY;
                objectX[i] = goalX;
                objectInGoal[i] = true;
                isHoldingObject[i] = false;
            }
        }
    }


}

//--------------------------------------------------------------
void testApp::draw(){
    ofFill();
    
    ofBackground(0, 100, 42);
    
    ofSetColor(120, 200, 255);
    ofCircle(playerX, playerY, playerRadius);
    
    ofSetColor(255, 151, 0);
    
    for (int i = 0; i < numofObj; i++) {
        ofCircle(objectX[i], objectY[i], objectRadius);
    }
    
    ofSetColor(0,0,0);
    ofCircle(goalX, goalY, goalRadius);
    
    font.drawString("Score = " + ofToString(score), 100, 100);

}
//--------------------------------------------------------------
void testApp::keyPressed(int key){
    if (key == OF_KEY_UP) {
        playerY -= playerSpeed;
    } else if (key == OF_KEY_DOWN) {
        playerY += playerSpeed;
    } else if (key == OF_KEY_LEFT) {
        playerX -= playerSpeed;
    } else if (key == OF_KEY_RIGHT) {
        playerX += playerSpeed;
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