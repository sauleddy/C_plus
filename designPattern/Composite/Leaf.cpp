/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Leaf.cpp
 * Author: eddy
 * 
 * Created on March 22, 2017, 8:56 AM
 */

#include "Leaf.h"

Leaf::Leaf(string name): Component(name) {
}

Leaf::~Leaf() {
}

void Leaf::operation(void) {
    cout<< "Leaf::operation"<< endl;
}

