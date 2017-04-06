/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ProductClothB.h
 * Author: eddy
 *
 * Created on March 17, 2017, 9:42 AM
 */

#ifndef PRODUCTCLOTHB_H
#define PRODUCTCLOTHB_H

#include "ProductClothBase.h"

class ProductClothB: public ProductClothBase {
public:
    ProductClothB();
    ProductClothB(const ProductClothB& orig);
    virtual ~ProductClothB();
    
    void show(void);
    
private:

};

#endif /* PRODUCTCLOTHB_H */

