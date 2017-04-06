/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Adaptee.cpp
 * Author: eddy
 * 
 * Created on March 20, 2017, 9:08 AM
 */

#include <iostream>
#include "Adaptee.h"

using namespace std;

Adaptee::Adaptee() {
}

Adaptee::Adaptee(const Adaptee& orig) {
}

Adaptee::~Adaptee() {
}

void Adaptee::specialRequest(void) {
    cout<< "Adaptee::specialRequest(void)"<< endl;
}

