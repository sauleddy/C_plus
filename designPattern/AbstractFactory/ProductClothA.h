/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ProductClothA.h
 * Author: eddy
 *
 * Created on March 17, 2017, 9:42 AM
 */

#ifndef PRODUCTCLOTHA_H
#define PRODUCTCLOTHA_H

#include "ProductClothBase.h"

class ProductClothA: public ProductClothBase {
public:
    ProductClothA();
    ProductClothA(const ProductClothA& orig);
    virtual ~ProductClothA();
    
    void show(void);
    
private:

};

#endif /* PRODUCTCLOTHA_H */

