/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ConcreteStrategyB.h
 * Author: eddy
 *
 * Created on March 24, 2017, 9:15 AM
 */

#ifndef CONCRETESTRATEGYB_H
#define CONCRETESTRATEGYB_H

#include "Strategy.h"

class ConcreteStrategyB: public Strategy {
public:
    ConcreteStrategyB();
    ConcreteStrategyB(const ConcreteStrategyB& orig) = delete;
    virtual ~ConcreteStrategyB();
    
    void AlgorithmInterface(void);
    
private:

};

#endif /* CONCRETESTRATEGYB_H */

