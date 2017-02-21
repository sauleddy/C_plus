/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   demo.h
 * Author: eddy
 *
 * Created on February 21, 2017, 4:50 PM
 */

#ifndef DEMO_H
#define DEMO_H

class demo {
public:
    demo();
    demo(const demo& orig);
    virtual ~demo();
    void print(void);
    static void static_print(void);
    void const_setter(int iInput) const;
private:
    static int iA;
    int iB;
    static const int iC = 500;
    mutable int iD;
};

#endif /* DEMO_H */

