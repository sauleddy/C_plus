/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ConcreteObserver.h
 * Author: eddy
 *
 * Created on March 26, 2017, 8:50 AM
 */

#ifndef CONCRETEOBSERVER_H
#define CONCRETEOBSERVER_H

#include "Observer.h"

class ConcreteObserver: public Observer {
public:
    ConcreteObserver();
    ConcreteObserver(const ConcreteObserver& orig) = delete;
    virtual ~ConcreteObserver();
    
    void update(int state);
    
private:

};

#endif /* CONCRETEOBSERVER_H */

