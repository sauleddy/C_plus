/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Adapter.h
 * Author: eddy
 *
 * Created on March 20, 2017, 9:08 AM
 */

#ifndef ADAPTER_H
#define ADAPTER_H

#include "Target.h"
#include "Adaptee.h"

class Adapter: public Target {
public:
    Adapter();
    Adapter(const Adapter& orig);
    virtual ~Adapter();
    
    void request(void);
    
private:

    Adaptee* p_Adaptee;
};

#endif /* ADAPTER_H */

