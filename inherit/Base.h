/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Base.h
 * Author: eddy
 *
 * Created on March 14, 2017, 9:27 AM
 */

#ifndef BASE_H
#define BASE_H

class Base {
public:
    Base();
    Base(const Base& orig);
    virtual ~Base();
    
    virtual void printBase();
    
    int publicA;
    
protected:
    int protecedA;
    
private:
    int privateA;
    
    
};

#endif /* BASE_H */

