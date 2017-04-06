/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ProductFactory.cpp
 * Author: eddy
 * 
 * Created on March 14, 2017, 2:11 PM
 */

#include "ProductFactory.h"
#include "ProductA.h"
#include "ProductB.h"
#include "ProductC.h"

ProductFactory::ProductFactory() {
}

ProductFactory::ProductFactory(const ProductFactory& orig) {
}

ProductFactory::~ProductFactory() {
}

ProductBase* ProductFactory::createProduct(type m_type) {
    ProductBase* p_Product = nullptr;
    switch(m_type) {
        case typeA:
            p_Product = new ProductA();
            break;
        case typeB:
            p_Product = new ProductB();
            break;
        case typeC:
            p_Product = new ProductC();
            break;
        default:
            break;
    }
    return p_Product;
}

