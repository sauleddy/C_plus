/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FactoryB.h
 * Author: eddy
 *
 * Created on March 17, 2017, 9:43 AM
 */

#ifndef FACTORYB_H
#define FACTORYB_H

#include "FactoryBase.h"

class FactoryB: public FactoryBase {
public:
    FactoryB();
    FactoryB(const FactoryB& orig);
    virtual ~FactoryB();
    
    ProductClothBase* createCloth(void);
    ProductPantsBase* createPants(void);
    
private:

};

#endif /* FACTORYB_H */

