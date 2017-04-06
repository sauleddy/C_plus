/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   box.h
 * Author: eddy
 *
 * Created on March 11, 2017, 3:57 PM
 */

#ifndef BOX_H
#define BOX_H

class box {
public:
    box();
    box(const box& orig);
    virtual ~box();
private:

    int width;
    int height;
    
};

#endif /* BOX_H */

