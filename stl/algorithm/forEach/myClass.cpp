/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   myClass.cpp
 * Author: eddy
 * 
 * Created on March 13, 2017, 9:23 AM
 */

#include <iostream>
#include <iterator>

#include "myClass.h"

using namespace std;

myClass::myClass() {
}

myClass::myClass(const myClass& orig) {
}

myClass::~myClass() {
}

void myClass::operator() (int iA) {
    std::ostream_iterator<int> OutputInt(cout, ",");
    OutputInt = iA;
}

