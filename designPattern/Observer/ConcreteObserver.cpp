/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ConcreteObserver.cpp
 * Author: eddy
 * 
 * Created on March 26, 2017, 8:50 AM
 */

#include "ConcreteObserver.h"

#include <iostream>

using namespace std;

ConcreteObserver::ConcreteObserver() {
}

ConcreteObserver::~ConcreteObserver() {
}

void ConcreteObserver::update(int state) {
    cout<< "ConcreteObserver::update(void) => state:"<< state<< endl;
}

