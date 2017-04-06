/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Context.h
 * Author: eddy
 *
 * Created on March 24, 2017, 9:14 AM
 */

#ifndef CONTEXT_H
#define CONTEXT_H

#include "Strategy.h"

typedef enum strategyType {
    typeA, typeB
} STRATEGYTYPE; 

class Context {
public:
    Context(strategyType type);
    Context(const Context& orig) = delete;
    virtual ~Context();
    
    void ContextInterface(void);
    
private:
    Strategy* p_Strategy;
};

#endif /* CONTEXT_H */

