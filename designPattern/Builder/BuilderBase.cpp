/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BuilderBase.cpp
 * Author: eddy
 * 
 * Created on March 18, 2017, 9:49 PM
 */

#include "BuilderBase.h"

BuilderBase::BuilderBase() {
    p_Product = new Product();
}

BuilderBase::BuilderBase(const BuilderBase& orig) {
}

BuilderBase::~BuilderBase() {
}

Product* BuilderBase::getProduct(void) {
    return p_Product;
}

