/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   myClass.cpp
 * Author: eddy
 * 
 * Created on March 13, 2017, 2:10 PM
 */

#include <iostream>
#include <memory>
#include "myClass.h"

using namespace std;

myClass::myClass() {
    cout<< "::myClass"<< endl;
}

myClass::myClass(const myClass& orig) {
    cout<< "::myClass(const myClass& orig)"<< endl;
}

myClass::~myClass() {
    cout<< "::~myClass"<< endl;
}

void myClass::print(int value) {
    cout<< value<< endl;
}

