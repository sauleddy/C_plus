/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   demo.cpp
 * Author: eddy
 * 
 * Created on February 21, 2017, 5:55 PM
 */

#include <iostream>
#include "demo.h"

using namespace std;

demo::demo(): iA(0) {
    cout<< "demo()"<< endl;
}

demo::demo(const demo& orig) {
    cout<< "demo(const demo& orig)"<< endl;
}

demo::~demo() {
    cout<< "~demo() iA="<< iA<< endl;
}

demo demo::operator+(const demo& m_demo)
{
    cout<< "operator+"<< endl;
    demo m_demo_new;
    m_demo_new.iA = this->iA + m_demo.iA;
    return m_demo_new;
}

