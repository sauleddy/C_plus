/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   RefinedAbstraction.cpp
 * Author: eddy
 * 
 * Created on March 21, 2017, 9:31 AM
 */

#include "RefinedAbstraction.h"

RefinedAbstraction::RefinedAbstraction(Implementor* impl): Abstraction(impl) {
}

RefinedAbstraction::~RefinedAbstraction() {
}

void RefinedAbstraction::operation(void) {
    p_Implementor->operatorImple();
}

