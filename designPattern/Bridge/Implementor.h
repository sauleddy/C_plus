/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Implementor.h
 * Author: eddy
 *
 * Created on March 21, 2017, 9:31 AM
 */

#ifndef IMPLEMENTOR_H
#define IMPLEMENTOR_H

class Implementor {
public:
    Implementor();
    Implementor(const Implementor& orig);
    virtual ~Implementor();
    
    virtual void operatorImple(void) = 0;
    
private:

};

#endif /* IMPLEMENTOR_H */

