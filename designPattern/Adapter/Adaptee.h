/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Adaptee.h
 * Author: eddy
 *
 * Created on March 20, 2017, 9:08 AM
 */

#ifndef ADAPTEE_H
#define ADAPTEE_H

class Adaptee {
public:
    Adaptee();
    Adaptee(const Adaptee& orig);
    virtual ~Adaptee();
    
    void specialRequest(void);
    
private:

};

#endif /* ADAPTEE_H */

