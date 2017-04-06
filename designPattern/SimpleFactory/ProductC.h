/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ProductC.h
 * Author: eddy
 *
 * Created on March 14, 2017, 2:05 PM
 */

#ifndef PRODUCTC_H
#define PRODUCTC_H

#include "ProductBase.h"

class ProductC: public ProductBase {
public:
    ProductC();
    ProductC(const ProductC& orig);
    virtual ~ProductC();
    
    void showProduct(void);
    
private:

};

#endif /* PRODUCTC_H */

