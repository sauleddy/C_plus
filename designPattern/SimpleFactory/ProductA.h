/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ProductA.h
 * Author: eddy
 *
 * Created on March 14, 2017, 2:05 PM
 */

#ifndef PRODUCTA_H
#define PRODUCTA_H

#include "ProductBase.h"

class ProductA: public ProductBase {
public:
    ProductA();
    ProductA(const ProductA& orig);
    virtual ~ProductA();
    
    void showProduct(void);
    
private:

};

#endif /* PRODUCTA_H */

