/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Product.cpp
 * Author: eddy
 * 
 * Created on March 18, 2017, 9:49 PM
 */

#include "Product.h"

Product::Product() {
}

Product::Product(const Product& orig) {
}

Product::~Product() {
}

void Product::addPart(string part) {
    vecParts.push_back(part);
}

void Product::showProduct(void) const {
    /*for(auto iter = vecParts.begin(); iter != vecParts.end(); ++iter) {
        cout<< *iter<< endl;
    }*/
    
    for(auto& iter : vecParts) {
        cout<< iter<< endl;
    }
}
    

