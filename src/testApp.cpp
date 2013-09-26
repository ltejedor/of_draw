#include "testApp.h"

//one line comment
/*
    multi line comment
    go crazy wahhh
*/

float playerX;
float playerY;

//--------------------------------------------------------------
void testApp::setup(){
    playerX = 10;
    playerY = 10;

}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    
    ofTriangle(100, 100, 150, 100, 100, 150);
    ofTriangle(200, 200, 250, 200, 200, 250);
    ofTriangle(150, 150, 200, 150, 150, 200);
    ofTriangle(250, 250, 200, 250, 250, 300);
    ofTriangle(350, 350, 300, 350, 350, 400);


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