/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   demo4.cpp
 * Author: eddy
 * 
 * Created on February 21, 2017, 6:19 PM
 */

#include "demo4.h"
#include <iostream>

using namespace std;

demo4::demo4() {
}

demo4::demo4(const demo4& orig) {
}

demo4::~demo4() {
}

void demo4::func(void) {
    cout<< "demo4::func()"<< this->iA<< endl;
}

