/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   myClass.h
 * Author: eddy
 *
 * Created on March 8, 2017, 5:10 PM
 */

#ifndef MYCLASS_H
#define MYCLASS_H

#include <vector>

class myClass {
public:
    myClass(): min(0) {
        
    }
    
    void push(int x) {
        if(vecData.size() <= 0) {
            min = x;
        } else {
            if(x < min)
                min = x;
        }
        vecData.push_back(x);
    }
    
    void pop() {
        if(vecData.size() == 0)
            return;
        int data = vecData.back();
        vecData.pop_back();
        if(data == min)
            findMin();
    }
    
    int top() {
        vecData.back();
    }
    
    int getMin() {
        return min;
    }
    
    void findMin() {
        std::vector<int>::iterator iter = vecData.begin();
        min = *iter;
        for(iter; iter!=vecData.end(); ++iter) {
            if(*iter < min) {
                min = *iter;
            }
        }
    }
    
    int min;
    std::vector<int> vecData;
private:

};

#endif /* MYCLASS_H */

