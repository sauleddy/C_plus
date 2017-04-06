/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Adapter.cpp
 * Author: eddy
 * 
 * Created on March 20, 2017, 9:08 AM
 */

#include <iostream>
#include "Adapter.h"

using namespace std;

Adapter::Adapter(): p_Adaptee(new Adaptee()) {
}

Adapter::Adapter(const Adapter& orig) {
    delete p_Adaptee;
}

Adapter::~Adapter() {
}

void Adapter::request(void) {
    p_Adaptee->specialRequest();
}


