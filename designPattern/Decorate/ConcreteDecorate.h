/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ConcreteDecorate.h
 * Author: eddy
 *
 * Created on March 23, 2017, 9:13 AM
 */

#ifndef CONCRETEDECORATE_H
#define CONCRETEDECORATE_H

#include "Decorate.h"

class ConcreteDecorate: public Decorate {
public:
    ConcreteDecorate(Component* component);
    ConcreteDecorate(const ConcreteDecorate& orig) = delete;
    virtual ~ConcreteDecorate();
    
    void operation(void);
    
private:

    void selfBehavior(void);
    
};

#endif /* CONCRETEDECORATE_H */

