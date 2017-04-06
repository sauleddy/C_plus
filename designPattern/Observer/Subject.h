/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Subject.h
 * Author: eddy
 *
 * Created on March 26, 2017, 8:49 AM
 */

#ifndef SUBJECT_H
#define SUBJECT_H

#include "Observer.h"

class Subject {
public:
    Subject();
    Subject(const Subject& orig);
    virtual ~Subject();
    
    virtual void Attach(Observer* p_Observer) = 0;
    virtual void Detach(Observer* p_Observer) = 0;
    virtual void Notify(void) = 0;
    
private:

};

#endif /* SUBJECT_H */

