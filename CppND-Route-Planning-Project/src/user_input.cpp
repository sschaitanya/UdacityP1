#include <iostream>
#include "user_input.h"
using namespace std;

void UserInput::getUserInput(){
    this->setStartX(acceptInput("startX"));
    this->setStartY(acceptInput("startY"));
    this->setEndX(acceptInput("endX"));
    this->setEndY(acceptInput("endY"));
}

float UserInput::acceptInput(string position){
    float value = -1;
    do{
        cout<<"Please enter a value between 0 and 100 for "<< position<<": ";
        cin>> value;
    }while(value<0 || value>100);
    return value;
}

UserInput::UserInput() {}

float UserInput::getStartX(){
    return this->start_x;
}

float UserInput::getStartY(){
    return this->start_y;
}

float UserInput::getEndX(){
    return this->end_x;
}

float UserInput::getEndY(){
    return this->end_y;
}

void UserInput::setStartX(float val){
    this->start_x = val;
}

void UserInput::setStartY(float val){
    this->start_y = val;
}

void UserInput::setEndX(float val){
    this->end_x = val;    
}

void UserInput::setEndY(float val){
    this->end_y = val;    
}

