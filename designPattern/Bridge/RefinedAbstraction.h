/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   RefinedAbstraction.h
 * Author: eddy
 *
 * Created on March 21, 2017, 9:31 AM
 */

#ifndef REFINEDABSTRACTION_H
#define REFINEDABSTRACTION_H

#include "Abstraction.h"

class RefinedAbstraction: public Abstraction {
public:
    RefinedAbstraction(Implementor* impl);
    RefinedAbstraction(const RefinedAbstraction& orig) = delete;
    virtual ~RefinedAbstraction();
    
    void operation(void);
    
private:

};

#endif /* REFINEDABSTRACTION_H */

