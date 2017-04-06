/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ConcreteFlyWeight.h
 * Author: eddy
 *
 * Created on March 28, 2017, 9:52 AM
 */

#ifndef CONCRETEFLYWEIGHT_H
#define CONCRETEFLYWEIGHT_H

#include "FlyWeight.h"

class ConcreteFlyWeight: public FlyWeight {
public:
    ConcreteFlyWeight();
    ConcreteFlyWeight(const ConcreteFlyWeight& orig) = delete;
    virtual ~ConcreteFlyWeight();
    
    void operation(void);
    void setExternalResource(int resource);
    
    
private:

    int internalResource;
    int externalResource;
    
};


#endif /* CONCRETEFLYWEIGHT_H */

