/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   PrototypeBase.h
 * Author: eddy
 *
 * Created on March 19, 2017, 10:33 AM
 */

#ifndef PROTOTYPEBASE_H
#define PROTOTYPEBASE_H

class PrototypeBase {
public:
    PrototypeBase();
    PrototypeBase(const PrototypeBase& orig);
    virtual ~PrototypeBase();
    
    virtual PrototypeBase* clone(void) = 0;
    
private:

};

#endif /* PROTOTYPEBASE_H */

