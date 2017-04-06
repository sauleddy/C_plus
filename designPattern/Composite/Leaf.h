/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Leaf.h
 * Author: eddy
 *
 * Created on March 22, 2017, 8:56 AM
 */

#ifndef LEAF_H
#define LEAF_H

#include "Component.h"

class Leaf: public Component {
public:
    Leaf(string name);
    Leaf(const Leaf& orig) = delete;
    virtual ~Leaf();
    
    void operation(void);
    void add(Component* component){}
    void remove(Component* component){}
    Component* getChild(int index){return nullptr;}
    
private:

};

#endif /* LEAF_H */

