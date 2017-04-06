/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FactoryB.cpp
 * Author: eddy
 * 
 * Created on March 17, 2017, 9:14 AM
 */

#include "FactoryB.h"
#include "../SimpleFactory/ProductB.h"

FactoryB::FactoryB() {
}

FactoryB::FactoryB(const FactoryB& orig) {
}

FactoryB::~FactoryB() {
}

ProductBase* FactoryB::createProduct(void) {
    ProductB* product = new ProductB();
    return product;
}

