/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Derived.cpp
 * Author: eddy
 * 
 * Created on March 27, 2017, 3:11 PM
 */

#include "Derived.h"

int Derived::num = 200;

Derived::Derived() {
}

Derived::Derived(const Derived& orig) {
}

Derived::~Derived() {
}


void Derived::my_static_func() {
    cout<< "void Derived::static_func()"<< endl;
}

