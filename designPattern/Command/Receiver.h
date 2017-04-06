/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Receiver.h
 * Author: eddy
 *
 * Created on March 28, 2017, 9:00 AM
 */

#ifndef RECEIVER_H
#define RECEIVER_H

#include <iostream>

using namespace std;

class Receiver {
public:
    Receiver();
    Receiver(const Receiver& orig) = delete;
    virtual ~Receiver();
    
    void Action(void);
    
private:

};

#endif /* RECEIVER_H */

