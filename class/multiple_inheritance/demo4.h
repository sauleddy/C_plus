/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   demo4.h
 * Author: eddy
 *
 * Created on February 21, 2017, 6:19 PM
 */

#ifndef DEMO4_H
#define DEMO4_H

#include "demo2.h"
#include "demo3.h"

class demo4: public demo2, demo3 {
public:
    demo4();
    demo4(const demo4& orig);
    virtual ~demo4();
    void func(void);
private:

};

#endif /* DEMO4_H */

