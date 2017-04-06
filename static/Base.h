/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Base.h
 * Author: eddy
 *
 * Created on March 27, 2017, 3:11 PM
 */

#ifndef BASE_H
#define BASE_H

#include <iostream>

using namespace std;

class Base {
public:
    Base();
    Base(const Base& orig);
    virtual ~Base();
    
    static int num;
    static void my_static_func(void);
    
private:    
    
};

#endif /* BASE_H */

