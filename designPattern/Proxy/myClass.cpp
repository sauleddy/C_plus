/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   myClass.cpp
 * Author: eddy
 * 
 * Created on March 25, 2017, 4:21 PM
 */

#include "myClass.h"

myClass::myClass(int input): num(input) {
}

myClass::~myClass() {
}

int myClass::GetNum(void) {
    return num;
}

