/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Proxy.cpp
 * Author: eddy
 * 
 * Created on March 25, 2017, 3:42 PM
 */

#include "Proxy.h"

#define SAFE_DELETE(p) if(p) { delete p; p = nullptr; } 

Proxy::Proxy() {
    p_Subject = new RealSubject();
}

Proxy::~Proxy() {
    SAFE_DELETE(p_Subject)
}

void Proxy::Request(void) {
    cout<< "Proxy::Request(void)"<< endl;
    p_Subject->Request();
}

