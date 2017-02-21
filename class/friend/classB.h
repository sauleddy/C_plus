/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   classB.h
 * Author: eddy
 *
 * Created on February 21, 2017, 4:20 PM
 */

#ifndef CLASSB_H
#define CLASSB_H

#include "classA.h"

class classA;

class classB {
public:
    classB();
    classB(const classB& orig);
    virtual ~classB();
    void printA(classA& m_A);
private:

};

#endif /* CLASSB_H */

