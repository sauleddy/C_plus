/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ConcreteStrategyA.h
 * Author: eddy
 *
 * Created on March 24, 2017, 9:14 AM
 */

#ifndef CONCRETESTRATEGYA_H
#define CONCRETESTRATEGYA_H

#include "Strategy.h"

class ConcreteStrategyA: public Strategy {
public:
    ConcreteStrategyA();
    ConcreteStrategyA(const ConcreteStrategyA& orig) = delete;
    virtual ~ConcreteStrategyA();
    
    void AlgorithmInterface(void);
    
private:

};

#endif /* CONCRETESTRATEGYA_H */

