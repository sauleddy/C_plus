/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   myClass.h
 * Author: eddy
 *
 * Created on March 13, 2017, 9:23 AM
 */

#ifndef MYCLASS_H
#define MYCLASS_H

class myClass {
public:
    myClass();
    myClass(const myClass& orig);
    virtual ~myClass();
    
    void operator() (int iA);
    
private:

};

#endif /* MYCLASS_H */

