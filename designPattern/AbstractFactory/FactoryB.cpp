/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FactoryB.cpp
 * Author: eddy
 * 
 * Created on March 17, 2017, 9:43 AM
 */

#include "FactoryB.h"
#include "ProductClothB.h"
#include "ProductPantsB.h"

FactoryB::FactoryB() {
}

FactoryB::FactoryB(const FactoryB& orig) {
}

FactoryB::~FactoryB() {
}

ProductClothBase* FactoryB::createCloth(void) {
    return new ProductClothB();
}

ProductPantsBase* FactoryB::createPants(void) {
    return new ProductPantsB();
}    

