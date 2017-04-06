/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ConcreteImplementator.h
 * Author: eddy
 *
 * Created on March 21, 2017, 9:32 AM
 */

#ifndef CONCRETEIMPLEMENTATOR_H
#define CONCRETEIMPLEMENTATOR_H

#include "Implementor.h"

class ConcreteImplementator: public Implementor {
public:
    ConcreteImplementator();
    ConcreteImplementator(const ConcreteImplementator& orig);
    virtual ~ConcreteImplementator();
    
    void operatorImple(void);
    
private:

};

#endif /* CONCRETEIMPLEMENTATOR_H */

