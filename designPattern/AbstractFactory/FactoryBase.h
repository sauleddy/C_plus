/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FactoryBase.h
 * Author: eddy
 *
 * Created on March 17, 2017, 9:42 AM
 */

#ifndef FACTORYBASE_H
#define FACTORYBASE_H

#include "ProductClothBase.h"
#include "ProductPantsBase.h"

class FactoryBase {
public:
    FactoryBase();
    FactoryBase(const FactoryBase& orig);
    virtual ~FactoryBase();
    
    virtual ProductClothBase* createCloth(void) = 0;
    virtual ProductPantsBase* createPants(void) = 0;
    
private:

};

#endif /* FACTORYBASE_H */

