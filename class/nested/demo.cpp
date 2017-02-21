/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   demo.cpp
 * Author: eddy
 * 
 * Created on February 21, 2017, 5:26 PM
 */

#include <iostream>
#include "demo.h"

using namespace std;

demo::demo() {
    cout<< "demo()"<< endl;
}

demo::demo(const demo& orig) {
    cout<< "demo(const demo& orig)"<< endl;
}

demo::~demo() {
    cout<< "~demo()"<< endl;
}

void demo::setInner(int iInput)
{
    /*
     * compile error, the outer class don't have special access privilege to the inner class
     */
    //this->m_demo_inner.innerA = iInput;
}

demo::demo_inner::demo_inner() {
    cout<< "demo_inner()"<< endl;
}

demo::demo_inner::demo_inner(const demo_inner& orig) {
    cout<< "demo_inner(const demo_inner& orig)"<< endl;
}

demo::demo_inner::~demo_inner() {
    cout<< "~demo_inner()"<< endl;
}
