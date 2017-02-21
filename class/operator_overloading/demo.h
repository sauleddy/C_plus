/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   demo.h
 * Author: eddy
 *
 * Created on February 21, 2017, 5:55 PM
 */

#ifndef DEMO_H
#define DEMO_H

class demo {
public:
    demo();
    demo(const demo& orig);
    virtual ~demo();
    demo operator+(const demo& m_demo);
    int iA;
private:

};

#endif /* DEMO_H */

