/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   myClass.h
 * Author: eddy
 *
 * Created on March 8, 2017, 3:48 PM
 */

#ifndef MYCLASS_H
#define MYCLASS_H

class myClass {
public:
    myClass();
    //explicit myClass(int iA);
    myClass(int iA);
    myClass(const myClass& orig);
    virtual ~myClass();
    
    void myFunc(myClass m_Class);
    
private:
    int iA;
};

#endif /* MYCLASS_H */

