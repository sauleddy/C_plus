/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Derived.cpp
 * Author: eddy
 * 
 * Created on March 14, 2017, 9:27 AM
 */

#include "Derived.h"

Derived::Derived() {
}

Derived::Derived(const Derived& orig) {
}

Derived::~Derived() {
}

void Derived::print() {
    this->printBase();
    this->protecedA = 10;
}

void Derived::printBase() {
    
}

