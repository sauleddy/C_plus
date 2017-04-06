/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ConcreteComponent.h
 * Author: eddy
 *
 * Created on March 23, 2017, 9:12 AM
 */

#ifndef CONCRETECOMPONENT_H
#define CONCRETECOMPONENT_H

#include "Component.h"

class ConcreteComponent: public Component {
public:
    ConcreteComponent();
    ConcreteComponent(const ConcreteComponent& orig);
    virtual ~ConcreteComponent();
    
    void operation(void);
    
private:

};

#endif /* CONCRETECOMPONENT_H */

