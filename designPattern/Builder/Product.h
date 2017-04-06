/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Product.h
 * Author: eddy
 *
 * Created on March 18, 2017, 9:49 PM
 */

#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <vector>

using namespace std;

class Product {
public:
    Product();
    Product(const Product& orig);
    virtual ~Product();
    
    void addPart(string part);
    void showProduct(void) const;
    
private:

    std::vector<string> vecParts;
    
};

#endif /* PRODUCT_H */

