/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ConcreteSubject.h
 * Author: eddy
 *
 * Created on March 26, 2017, 8:50 AM
 */

#ifndef CONCRETESUBJECT_H
#define CONCRETESUBJECT_H

#include "Subject.h"
#include <list>

using namespace std;

class ConcreteSubject: public Subject {
public:
    ConcreteSubject();
    ConcreteSubject(const ConcreteSubject& orig) = delete;
    virtual ~ConcreteSubject();
    
    void Attach(Observer* p_Observer);
    void Detach(Observer* p_Observer);
    void Notify(void);
    
    void SetState(int state);
    
private:

    std::list<Observer*> listObserver;
    int state;
};

#endif /* CONCRETESUBJECT_H */

