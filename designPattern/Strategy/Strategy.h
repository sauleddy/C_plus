/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Strategy.h
 * Author: eddy
 *
 * Created on March 24, 2017, 9:14 AM
 */

#ifndef STRATEGY_H
#define STRATEGY_H

#include <iostream>

using namespace std;

class Strategy {
public:
    Strategy();
    Strategy(const Strategy& orig) =  delete;
    virtual ~Strategy();
    
    virtual void AlgorithmInterface(void) = 0;
    
private:
    
};

#endif /* STRATEGY_H */

