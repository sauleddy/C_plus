/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   UnsharedFlyWeight.h
 * Author: eddy
 *
 * Created on March 28, 2017, 9:52 AM
 */

#ifndef UNSHAREDFLYWEIGHT_H
#define UNSHAREDFLYWEIGHT_H

#include "FlyWeight.h"

class UnsharedFlyWeight: public FlyWeight {
public:
    UnsharedFlyWeight();
    UnsharedFlyWeight(const UnsharedFlyWeight& orig) = delete;
    virtual ~UnsharedFlyWeight();
    
    void operation(void);
    
private:

};

#endif /* UNSHAREDFLYWEIGHT_H */

