/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   rectangle.cpp
 * Author: eddy
 * 
 * Created on March 8, 2017, 2:03 PM
 */

#include <iostream>
#include <stdlib.h>
#include "rectangle.h"

using namespace std;

rectangle operator-(const rectangle& rect1, const rectangle& rect2) {
    rectangle rectNew(0, 0);
    rectNew.width = abs(rect1.width - rect2.width);
    rectNew.height = abs(rect1.height - rect2.height);
    return rectNew;
}

rectangle::rectangle(unsigned int w, unsigned int h): width(w), height(h) {
    cout<< "rectangle::(unsigned int w, unsigned int h)"<< endl;
}

rectangle::rectangle(const rectangle& orig): width(orig.width), height(orig.height) {
    cout<< "rectangle::(const rectangle& orig)"<< endl;
}

rectangle::~rectangle() {
    cout<< "~rectangle::()"<< endl;
}

rectangle rectangle::operator+(const rectangle& rect) {
    rectangle rectNew(0, 0);
    rectNew.width = this->width + rect.width;
    rectNew.height = this->height + rect.height;
    return rectNew;
}

void rectangle::print(void) {
    cout<< "width:"<< width<< ", height:"<< height<< endl;
}

