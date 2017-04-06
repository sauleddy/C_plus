/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FactoryA.cpp
 * Author: eddy
 * 
 * Created on March 17, 2017, 9:43 AM
 */

#include "FactoryA.h"
#include "ProductClothA.h"
#include "ProductPantsA.h"

FactoryA::FactoryA() {
}

FactoryA::FactoryA(const FactoryA& orig) {
}

FactoryA::~FactoryA() {
}

ProductClothBase* FactoryA::createCloth(void) {
    return new ProductClothA();
}

ProductPantsBase* FactoryA::createPants(void) {
    return new ProductPantsA();
}    

