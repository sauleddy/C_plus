/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   myClass.h
 * Author: eddy
 *
 * Created on March 9, 2017, 1:06 PM
 */

#ifndef MYCLASS_H
#define MYCLASS_H

//int globalInt = 100;
extern int globalInt;

class myClass {
public:
    myClass();
    myClass(const myClass& orig);
    virtual ~myClass();
private:

};

#endif /* MYCLASS_H */

