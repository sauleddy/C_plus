/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   myClass.cpp
 * Author: eddy
 * 
 * Created on March 20, 2017, 12:19 PM
 */

#include "myClass.h"

#include <iostream>

using namespace std;

myClass::myClass() {
    cout<< "::myClass()"<< endl;
}

myClass::myClass(const myClass& orig) {
    cout<< "::myClass(const myClass& orig)"<< endl;
}

myClass::~myClass() {
    cout<< "::~myClass()"<< endl;
}

