/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Target.h
 * Author: eddy
 *
 * Created on March 20, 2017, 9:07 AM
 */

#ifndef TARGET_H
#define TARGET_H

class Target {
public:
    Target();
    Target(const Target& orig);
    virtual ~Target();
    
    virtual void request(void) = 0;
    
private:

};

#endif /* TARGET_H */

