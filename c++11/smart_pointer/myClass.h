/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   myClass.h
 * Author: eddy
 *
 * Created on March 13, 2017, 2:10 PM
 */

#ifndef MYCLASS_H
#define MYCLASS_H

#include <memory>
#include "derivedClass.h"

using namespace std;

class myClass {
public:
    myClass();
    myClass(const myClass& orig);
    virtual ~myClass();
    
    void print(int value);
    
    //shared_ptr<derivedClass> sptr;
    
private:

};

#endif /* MYCLASS_H */

