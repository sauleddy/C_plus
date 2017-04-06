/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Abstraction.cpp
 * Author: eddy
 * 
 * Created on March 21, 2017, 9:31 AM
 */

#include "Abstraction.h"

Abstraction::Abstraction(Implementor* impl): p_Implementor(impl) {
}

Abstraction::~Abstraction() {
}

