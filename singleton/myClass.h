/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   myClass.h
 * Author: eddy
 *
 * Created on February 24, 2017, 4:04 PM
 */

#ifndef MYCLASS_H
#define MYCLASS_H

class myClass {
public:
    static myClass* getInstance(void);
private:
    myClass();
    virtual ~myClass();
    static myClass* p_Instance; 
};

#endif /* MYCLASS_H */

