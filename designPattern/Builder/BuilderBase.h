/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BuilderBase.h
 * Author: eddy
 *
 * Created on March 18, 2017, 9:49 PM
 */

#ifndef BUILDERBASE_H
#define BUILDERBASE_H

#include "Product.h"

class BuilderBase {
public:
    BuilderBase();
    BuilderBase(const BuilderBase& orig);
    virtual ~BuilderBase();
    
    virtual void buildPartA(void){};
    virtual void buildPartB(void){};
    Product* getProduct(void);
    
protected:

    Product* p_Product;
    
};

#endif /* BUILDERBASE_H */

