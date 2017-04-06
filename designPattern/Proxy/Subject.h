/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Subject.h
 * Author: eddy
 *
 * Created on March 25, 2017, 3:41 PM
 */

#ifndef SUBJECT_H
#define SUBJECT_H

#include <iostream>

using namespace std;

class Subject {
public:
    Subject();
    Subject(const Subject& orig) = delete;
    virtual ~Subject();
    
    virtual void Request(void) = 0;
    
private:

};

#endif /* SUBJECT_H */

