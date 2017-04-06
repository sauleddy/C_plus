/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   rectangle.h
 * Author: eddy
 *
 * Created on March 8, 2017, 2:03 PM
 */

#ifndef RECTANGLE_H
#define RECTANGLE_H

class rectangle {
public:
    rectangle(unsigned int width, unsigned int height);
    rectangle(const rectangle& orig);
    virtual ~rectangle();
    
    rectangle operator+(const rectangle& rect);
    
    friend rectangle operator-(const rectangle& rect1, const rectangle& rect2);
    
    void print(void);
    
private:

    unsigned int width;
    unsigned int height;
    
};

#endif /* RECTANGLE_H */

