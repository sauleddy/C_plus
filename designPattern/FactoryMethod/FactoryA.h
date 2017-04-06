/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FactoryA.h
 * Author: eddy
 *
 * Created on March 17, 2017, 9:14 AM
 */

#ifndef FACTORYA_H
#define FACTORYA_H

#include "FactoryBase.h"

class FactoryA: public FactoryBase {
public:
    FactoryA();
    FactoryA(const FactoryA& orig);
    virtual ~FactoryA();
    
    ProductBase* createProduct(void);
    
private:

};

#endif /* FACTORYA_H */

