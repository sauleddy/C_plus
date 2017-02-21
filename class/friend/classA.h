/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   classA.h
 * Author: eddy
 *
 * Created on February 21, 2017, 4:20 PM
 */

#ifndef CLASSA_H
#define CLASSA_H

#include "classB.h"

class classA {
public:
    classA();
    classA(const classA& orig);
    virtual ~classA();
    friend void fFriend(classA& m_A);
    
    friend class classB;
private:
    int iA;
    int iB;
};

#endif /* CLASSA_H */

