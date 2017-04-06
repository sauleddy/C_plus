/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ProductA.cpp
 * Author: eddy
 * 
 * Created on March 14, 2017, 2:05 PM
 */

#include <iostream>
#include "ProductA.h"

using namespace std;

ProductA::ProductA() {
}

ProductA::ProductA(const ProductA& orig) {
}

ProductA::~ProductA() {
}

void ProductA::showProduct(void) {
    cout<< "ProductA::showProduct"<< endl;
}

