/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Component.h
 * Author: eddy
 *
 * Created on March 23, 2017, 9:12 AM
 */

#ifndef COMPONENT_H
#define COMPONENT_H

#include <iostream>

using namespace std;

class Component {
public:
    Component();
    Component(const Component& orig);
    virtual ~Component();
    
    virtual void operation(void) = 0;
    
private:

};

#endif /* COMPONENT_H */

