/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Context.cpp
 * Author: eddy
 * 
 * Created on March 24, 2017, 9:14 AM
 */

#include "Context.h"
#include "ConcreteStrategyA.h"
#include "ConcreteStrategyB.h"

Context::Context(Strategy* type): p_Strategy(type) {
}

Context::~Context() {
}


void Context::ChangeStrategy(Strategy* type) {
    p_Strategy = type;
}

void Context::ContextInterface(void) {
    if(this->p_Strategy != nullptr) {
        p_Strategy->AlgorithmInterface();
    }
}

