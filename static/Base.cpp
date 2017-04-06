/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Base.cpp
 * Author: eddy
 * 
 * Created on March 27, 2017, 3:11 PM
 */

#include "Base.h"

int Base::num = 100;

Base::Base() {
}

Base::Base(const Base& orig) {
}

Base::~Base() {
}

void Base::my_static_func() {
    cout<< "void Base::static_func()"<< endl;
}

