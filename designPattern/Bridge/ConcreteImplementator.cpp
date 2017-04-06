/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ConcreteImplementator.cpp
 * Author: eddy
 * 
 * Created on March 21, 2017, 9:32 AM
 */

#include "ConcreteImplementator.h"

#include <iostream>

using namespace std;

ConcreteImplementator::ConcreteImplementator() {
}

ConcreteImplementator::ConcreteImplementator(const ConcreteImplementator& orig) {
}

ConcreteImplementator::~ConcreteImplementator() {
}

void ConcreteImplementator::operatorImple(void) {
    cout<< "::operatorImple(void)"<< endl;
}

