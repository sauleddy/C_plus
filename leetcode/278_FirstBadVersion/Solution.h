/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: eddy
 *
 * Created on May 20, 2017, 10:39 AM
 */

#ifndef SOLUTION_H
#define SOLUTION_H

class Solution {
public:
    Solution();
    Solution(const Solution& orig);
    virtual ~Solution();
    
    int firstBadVersion(int n);
    
private:

    bool isBadVersion(int version);
};

#endif /* SOLUTION_H */

