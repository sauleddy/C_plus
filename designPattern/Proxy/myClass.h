/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   myClass.h
 * Author: eddy
 *
 * Created on March 25, 2017, 4:21 PM
 */

#ifndef MYCLASS_H
#define MYCLASS_H

class myClass {
public:
    myClass(int input);
    myClass(const myClass& orig) = delete;
    virtual ~myClass();
    
    int GetNum(void);
    
private:

    int num;
};

#endif /* MYCLASS_H */

