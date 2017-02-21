/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   demo.cpp
 * Author: eddy
 * 
 * Created on February 21, 2017, 4:50 PM
 */
#include <iostream>
#include "demo.h"

using namespace std;

int demo::iA = 10;

demo::demo(): iB(100), iD(200) {
}

demo::demo(const demo& orig) {
}

demo::~demo() {
}

void demo::print(void) {
    cout<< "iB="<< this->iB<< endl;
    cout<< "iA="<< demo::iA<< endl;
}

void demo::static_print(void)
{
    /*
     * compile error, static function cannot access non-static member variable
     */
    //cout<< "iA="<< iB<< endl;
    cout<< "iA="<< demo::iA<< endl;
}

void demo::const_setter(int iInput) const
{
    /*
     * compile error, const function cannot set the member variable
     */
    //this->iB = iInput;
    
    demo::iA = iInput;
    
    this->iD = 2000;
}

