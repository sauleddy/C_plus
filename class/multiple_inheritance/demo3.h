/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   demo3.h
 * Author: eddy
 *
 * Created on February 21, 2017, 6:19 PM
 */

#ifndef DEMO3_H
#define DEMO3_H

#include "demo1.h"

class demo3: virtual public demo1 {
//class demo3: public demo1 {
public:
    demo3();
    demo3(const demo3& orig);
    virtual ~demo3();
    void func(void);
private:

};

#endif /* DEMO3_H */

