/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ConcreteComponent.cpp
 * Author: eddy
 * 
 * Created on March 23, 2017, 9:12 AM
 */

#include "ConcreteComponent.h"

ConcreteComponent::ConcreteComponent() {
}

ConcreteComponent::ConcreteComponent(const ConcreteComponent& orig) {
}

ConcreteComponent::~ConcreteComponent() {
}

void ConcreteComponent::operation(void) {
    cout<< "ConcreteComponent::operation()"<< endl;
}

