/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Derived.h
 * Author: eddy
 *
 * Created on March 14, 2017, 10:12 AM
 */

#ifndef DERIVED_H
#define DERIVED_H

#include "Base.h"

class Derived: public Base {
public:
    Derived();
    Derived(const Derived& orig);
    virtual ~Derived();
private:

};

#endif /* DERIVED_H */

