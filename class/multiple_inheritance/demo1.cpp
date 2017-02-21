/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   demo1.cpp
 * Author: eddy
 * 
 * Created on February 21, 2017, 6:19 PM
 */
#include "demo1.h"
#include <iostream>

using namespace std;

demo1::demo1(): iA(10) {
}

demo1::demo1(const demo1& orig) {
}

demo1::~demo1() {
}

void demo1::func(void) {
    cout<< "demo1::func()"<< endl;
}

