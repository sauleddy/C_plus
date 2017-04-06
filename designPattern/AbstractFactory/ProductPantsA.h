/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ProductPantsA.h
 * Author: eddy
 *
 * Created on March 17, 2017, 9:43 AM
 */

#ifndef PRODUCTPANTSA_H
#define PRODUCTPANTSA_H

#include "ProductPantsBase.h"

class ProductPantsA: public ProductPantsBase {
public:
    ProductPantsA();
    ProductPantsA(const ProductPantsA& orig);
    virtual ~ProductPantsA();
    
    void show(void);
    
private:

};

#endif /* PRODUCTPANTSA_H */

