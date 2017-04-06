/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Component.cpp
 * Author: eddy
 * 
 * Created on March 22, 2017, 8:55 AM
 */

#include "Component.h"

Component::Component(string name): name(name) {
}

Component::~Component() {
}

string Component::getName(void) {
    return name;
}

void Component::print(void) {
    cout<< this->getName()<< endl;
}

