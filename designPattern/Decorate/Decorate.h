/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Decorate.h
 * Author: eddy
 *
 * Created on March 23, 2017, 9:12 AM
 */

#ifndef DECORATE_H
#define DECORATE_H

#include "Component.h"

using namespace std;

class Decorate: public Component {
public:
    Decorate(Component* component);
    Decorate(const Decorate& orig);
    virtual ~Decorate();
    
    void operation(void);
    
private:

    Component* p_Component;
    
};

#endif /* DECORATE_H */

