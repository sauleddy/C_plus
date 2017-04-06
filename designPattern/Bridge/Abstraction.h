/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Abstraction.h
 * Author: eddy
 *
 * Created on March 21, 2017, 9:31 AM
 */

#ifndef ABSTRACTION_H
#define ABSTRACTION_H

#include "Implementor.h"

class Abstraction {
public:
    Abstraction(Implementor* impl);
    Abstraction(const Abstraction& orig) = delete;
    virtual ~Abstraction();
    
    virtual void operation(void) = 0;
    
protected:

    Implementor* p_Implementor;
    
};

#endif /* ABSTRACTION_H */

