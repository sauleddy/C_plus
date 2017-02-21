/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   demo.h
 * Author: eddy
 *
 * Created on February 21, 2017, 3:38 PM
 */

#ifndef DEMO_H
#define DEMO_H

class demo {
public:
    demo();
    explicit demo(int iInput);
    //demo(int iInput);
    demo(const demo& orig);
    virtual ~demo();
    
    void print(void);
private:
    int iTemp;
};

#endif /* DEMO_H */

