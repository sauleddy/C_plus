/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FactoryA.h
 * Author: eddy
 *
 * Created on March 17, 2017, 9:43 AM
 */

#ifndef FACTORYA_H
#define FACTORYA_H

#include "FactoryBase.h"

class FactoryA: public FactoryBase {
public:
    FactoryA();
    FactoryA(const FactoryA& orig);
    virtual ~FactoryA();
    
    ProductClothBase* createCloth(void);
    ProductPantsBase* createPants(void);
    
private:

};

#endif /* FACTORYA_H */

