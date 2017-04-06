/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Derived.h
 * Author: eddy
 *
 * Created on March 27, 2017, 3:11 PM
 */

#ifndef DERIVED_H
#define DERIVED_H

#include "Base.h"

class Derived: public Base {
public:
    Derived();
    Derived(const Derived& orig);
    virtual ~Derived();
    
    static int num;
    static void my_static_func(void);
    
private:

};

#endif /* DERIVED_H */

