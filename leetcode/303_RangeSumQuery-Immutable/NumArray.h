/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NumArray.h
 * Author: eddy
 *
 * Created on May 21, 2017, 3:03 PM
 */

#ifndef NUMARRAY_H
#define NUMARRAY_H

#include <vector>

using namespace std;

class NumArray {
public:
    NumArray() = delete;
    NumArray(vector<int> nums);
    NumArray(const NumArray& orig);
    virtual ~NumArray();
    
    int sumRange(int i, int j);
    
private:

    vector<int> dp;
    
};

#endif /* NUMARRAY_H */

