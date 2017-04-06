/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ConcreteDecorate.cpp
 * Author: eddy
 * 
 * Created on March 23, 2017, 9:13 AM
 */

#include "ConcreteDecorate.h"


ConcreteDecorate::ConcreteDecorate(Component* component): Decorate(component) {
}

ConcreteDecorate::~ConcreteDecorate() {
}

void ConcreteDecorate::operation(void) {
    selfBehavior();
    Decorate::operation();
}

void ConcreteDecorate::selfBehavior(void) {
    cout<< "ConcreteDecorate::selfBehavior()"<< endl;
}

