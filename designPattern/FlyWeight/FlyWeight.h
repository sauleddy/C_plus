/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   FlyWeight.h
 * Author: eddy
 *
 * Created on March 28, 2017, 9:52 AM
 */

#ifndef FLYWEIGHT_H
#define FLYWEIGHT_H

#include <iostream>

using namespace std;

class FlyWeight {
public:
    FlyWeight();
    FlyWeight(const FlyWeight& orig) = delete;
    virtual ~FlyWeight();
    
    virtual void operation(void) = 0;
    
private:

};

#endif /* FLYWEIGHT_H */

