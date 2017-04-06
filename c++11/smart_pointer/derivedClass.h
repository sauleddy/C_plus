/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   derivedClass.h
 * Author: eddy
 *
 * Created on March 13, 2017, 3:30 PM
 */


#ifndef DERIVEDCLASS_H
#define DERIVEDCLASS_H

#include <memory>
#include "myClass.h"

using namespace std;

//class myClass;

class derivedClass/*: public myClass*/ {
public:
    derivedClass();
    derivedClass(const derivedClass& orig);
    virtual ~derivedClass();
    
    //shared_ptr<myClass> sptr;
    
private:

};

#endif /* DERIVEDCLASS_H */

