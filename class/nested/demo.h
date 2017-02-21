/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   demo.h
 * Author: eddy
 *
 * Created on February 21, 2017, 5:26 PM
 */

#ifndef DEMO_H
#define DEMO_H

class demo {

public:  
    class demo_inner {
    public:
        demo_inner();
        demo_inner(const demo_inner& orig);
        virtual ~demo_inner();
    private:
        int innerA;
    };
    
    demo();
    demo(const demo& orig);
    virtual ~demo();
    void setInner(int iInput);
private:
    demo_inner m_demo_inner;
};

#endif /* DEMO_H */

