/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Component.h
 * Author: eddy
 *
 * Created on March 22, 2017, 8:55 AM
 */

#ifndef COMPONENT_H
#define COMPONENT_H

#include <iostream>

using namespace std;

class Component {
public:
    Component(string name);
    Component(const Component& orig) = delete;
    virtual ~Component();
    
    virtual void operation(void) = 0;
    virtual void add(Component* component) = 0;
    virtual void remove(Component* component) = 0;
    virtual Component* getChild(int index) = 0;
    string getName(void);
    virtual void print(void);
    
private:

    string name;
    
};

#endif /* COMPONENT_H */

