/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Decorate.cpp
 * Author: eddy
 * 
 * Created on March 23, 2017, 9:12 AM
 */

#include "Decorate.h"

Decorate::Decorate(Component* component): p_Component(component) {
}

Decorate::Decorate(const Decorate& orig) {
}

Decorate::~Decorate() {
}

void Decorate::operation(void) {
    if(p_Component != nullptr) {
        p_Component->operation();
    }
}

