/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Director.cpp
 * Author: eddy
 * 
 * Created on March 18, 2017, 9:50 PM
 */

#include "Director.h"

Director::Director(BuilderBase* builder): p_BuilderBase(builder) {
}

Director::~Director() {
}

void Director::createProduct(void) {
    if(p_BuilderBase == nullptr)
        return;
    p_BuilderBase->buildPartA();
    p_BuilderBase->buildPartB();
}

