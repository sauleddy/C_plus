/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FactoryBase.h
 * Author: eddy
 *
 * Created on March 17, 2017, 9:14 AM
 */

#ifndef FACTORYBASE_H
#define FACTORYBASE_H

#include "../SimpleFactory/ProductBase.h"

class FactoryBase {
public:
    FactoryBase();
    FactoryBase(const FactoryBase& orig);
    virtual ~FactoryBase();
    
    virtual ProductBase* createProduct(void) = 0;
    
private:

};

#endif /* FACTORYBASE_H */

