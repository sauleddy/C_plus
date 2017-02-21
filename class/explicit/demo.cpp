/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   demo.cpp
 * Author: eddy
 * 
 * Created on February 21, 2017, 3:38 PM
 */
#include <iostream>
#include "demo.h"

using namespace std;

demo::demo(): iTemp(0) {
    cout<< "demo()"<< endl;
}

demo::demo(int iInput): iTemp(iInput) {
    cout<< "demo(int iInput)"<< endl;
}

demo::demo(const demo& orig) {
    cout<< "demo(const demo& orig)"<< endl;
    this->iTemp = orig.iTemp;
}

demo::~demo() {
    cout<< "~demo()"<< endl;
}

void demo::print(void) {
    cout<< "iTemp="<< iTemp<< endl;
}

