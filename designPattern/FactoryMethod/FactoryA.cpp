/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FactoryA.cpp
 * Author: eddy
 * 
 * Created on March 17, 2017, 9:14 AM
 */

#include "FactoryA.h"
#include "../SimpleFactory/ProductA.h"

FactoryA::FactoryA() {
}

FactoryA::FactoryA(const FactoryA& orig) {
}

FactoryA::~FactoryA() {
}

ProductBase* FactoryA::createProduct(void) {
    ProductA* product = new ProductA();
    return product;
}

