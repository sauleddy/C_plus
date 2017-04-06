/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ProductB.h
 * Author: eddy
 *
 * Created on March 14, 2017, 2:05 PM
 */

#ifndef PRODUCTB_H
#define PRODUCTB_H

#include "ProductBase.h"

class ProductB: public ProductBase {
public:
    ProductB();
    ProductB(const ProductB& orig);
    virtual ~ProductB();
    
    void showProduct(void);
    
private:

};

#endif /* PRODUCTB_H */

