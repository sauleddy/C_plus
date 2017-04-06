/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Composite.h
 * Author: eddy
 *
 * Created on March 22, 2017, 8:56 AM
 */

#ifndef COMPOSITE_H
#define COMPOSITE_H

#include "Component.h"
#include <vector>

class Composite: public Component {
public:
    Composite(string name);
    Composite(const Composite& orig) = delete;
    virtual ~Composite();
    
    void operation(void);
    void add(Component* component);
    void remove(Component* component);
    Component* getChild(int index);
    void print(void);
    
private:

    std::vector<Component*> vecChildren;
    
};

#endif /* COMPOSITE_H */

