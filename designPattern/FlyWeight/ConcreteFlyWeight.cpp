/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ConcreteFlyWeight.cpp
 * Author: eddy
 * 
 * Created on March 28, 2017, 9:52 AM
 */

#include "ConcreteFlyWeight.h"

ConcreteFlyWeight::ConcreteFlyWeight(): internalResource(0), externalResource(0) {
}

ConcreteFlyWeight::~ConcreteFlyWeight() {
}

void ConcreteFlyWeight::operation(void) {
    cout<< "ConcreteFlyWeight::operation(void)"<< endl;
}

void ConcreteFlyWeight::setExternalResource(int resource) {
    this->externalResource = resource;
}

