/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   demo1.h
 * Author: eddy
 *
 * Created on February 21, 2017, 6:19 PM
 */

#ifndef DEMO1_H
#define DEMO1_H

class demo1 {
public:
    demo1();
    demo1(const demo1& orig);
    virtual ~demo1();
    virtual void func(void);
protected:
    int iA;
private:

};

#endif /* DEMO1_H */

