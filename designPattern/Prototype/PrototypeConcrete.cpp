/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PrototypeConcrete.cpp
 * Author: eddy
 * 
 * Created on March 19, 2017, 10:33 AM
 */
#include <iostream>

#include "PrototypeConcrete.h"

using namespace std;

PrototypeConcrete::PrototypeConcrete() {
    cout<< "::PrototypeConcrete()"<< endl;
}

PrototypeConcrete::PrototypeConcrete(const PrototypeConcrete& orig) {
    cout<< "::PrototypeConcrete(const PrototypeConcrete& orig)"<< endl;
    this->property = orig.property;
}

PrototypeConcrete::~PrototypeConcrete() {
    cout<< "::~PrototypeConcrete()"<< endl;
}

PrototypeBase* PrototypeConcrete::clone(void) {
    PrototypeBase* p_protoBase = new PrototypeConcrete(*this);
    return p_protoBase; 
}

