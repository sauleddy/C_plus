/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: eddy
 *
 * Created on March 16, 2017, 3:15 PM
 */

#ifndef SOLUTION_H
#define SOLUTION_H

class Solution {
public:
    Solution();
    Solution(const Solution& orig);
    virtual ~Solution();
    
    int hammingDistance(int x, int y);
    
private:

};

#endif /* SOLUTION_H */

