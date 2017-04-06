/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PrototypeConcrete.h
 * Author: eddy
 *
 * Created on March 19, 2017, 10:33 AM
 */

#ifndef PROTOTYPECONCRETE_H
#define PROTOTYPECONCRETE_H

#include "PrototypeBase.h"

class PrototypeConcrete: public PrototypeBase {
public:
    PrototypeConcrete();
    PrototypeConcrete(const PrototypeConcrete& orig);
    virtual ~PrototypeConcrete();
    
    PrototypeBase* clone(void);
   
private:

    int property;
    
};

#endif /* PROTOTYPECONCRETE_H */

