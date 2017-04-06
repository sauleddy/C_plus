/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ConcreteSubject.cpp
 * Author: eddy
 * 
 * Created on March 26, 2017, 8:50 AM
 */

#include "ConcreteSubject.h"

ConcreteSubject::ConcreteSubject(): state(0) {
}

ConcreteSubject::~ConcreteSubject() {
}

void ConcreteSubject::Attach(Observer* p_Observer) {
    listObserver.push_back(p_Observer);
}

void ConcreteSubject::Detach(Observer* p_Observer) {
    listObserver.remove(p_Observer);
}

void ConcreteSubject::Notify(void) {
    for(auto iter=listObserver.begin(); iter!=listObserver.end(); ++iter) {
        (*iter)->update(this->state);
    }
}

void ConcreteSubject::SetState(int state) {
    this->state = state;
    Notify();
}
    



