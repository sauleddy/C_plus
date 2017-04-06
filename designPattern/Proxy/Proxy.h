/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Proxy.h
 * Author: eddy
 *
 * Created on March 25, 2017, 3:42 PM
 */

#ifndef PROXY_H
#define PROXY_H

#include "RealSubject.h"

class Proxy: public Subject {
public:
    Proxy();
    Proxy(const Proxy& orig) = delete;
    virtual ~Proxy();
    
    void Request(void);
    
private:

    Subject* p_Subject;
    
};

#endif /* PROXY_H */

