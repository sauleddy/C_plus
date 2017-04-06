/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BuilderConcrete.h
 * Author: eddy
 *
 * Created on March 18, 2017, 9:50 PM
 */

#ifndef BUILDERCONCRETE_H
#define BUILDERCONCRETE_H

#include "BuilderBase.h"

class BuilderConcrete: public BuilderBase {
public:
    BuilderConcrete();
    BuilderConcrete(const BuilderConcrete& orig);
    virtual ~BuilderConcrete();
    
    void buildPartA(void);
    void buildPartB(void);
    
private:

};

#endif /* BUILDERCONCRETE_H */

