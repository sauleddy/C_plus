/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   RealSubject.h
 * Author: eddy
 *
 * Created on March 25, 2017, 3:41 PM
 */

#ifndef REALSUBJECT_H
#define REALSUBJECT_H

#include "Subject.h"

class RealSubject: public Subject {
public:
    RealSubject();
    RealSubject(const RealSubject& orig) = delete;
    virtual ~RealSubject();
    
    void Request(void);
    
private:

};

#endif /* REALSUBJECT_H */

