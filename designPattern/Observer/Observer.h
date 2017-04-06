/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Observer.h
 * Author: eddy
 *
 * Created on March 26, 2017, 8:50 AM
 */

#ifndef OBSERVER_H
#define OBSERVER_H

class Observer {
public:
    Observer();
    Observer(const Observer& orig) = delete;
    virtual ~Observer();
    
    virtual void update(int state) = 0;
    
private:

};

#endif /* OBSERVER_H */

