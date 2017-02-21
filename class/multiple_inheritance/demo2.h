/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   demo2.h
 * Author: eddy
 *
 * Created on February 21, 2017, 6:19 PM
 */

#ifndef DEMO2_H
#define DEMO2_H

#include "demo1.h"

class demo2: virtual public demo1 {
//class demo2: public demo1 {
public:
    demo2();
    demo2(const demo2& orig);
    virtual ~demo2();
    void func(void);
private:

};

#endif /* DEMO2_H */

