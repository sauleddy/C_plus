/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   myClass.h
 * Author: eddy
 *
 * Created on March 11, 2017, 11:21 PM
 */

#ifndef MYCLASS_H
#define MYCLASS_H

class myClass {
public:
    myClass();
    myClass(const myClass& orig);
    virtual ~myClass();
    
    int add(int num1, int num2);
    
private:

};

#endif /* MYCLASS_H */

