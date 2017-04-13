/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: eddy
 *
 * Created on April 13, 2017, 9:41 AM
 */

#ifndef SOLUTION_H
#define SOLUTION_H

class Solution {
public:
    Solution();
    Solution(const Solution& orig);
    virtual ~Solution();
    
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H);
    
private:

};

#endif /* SOLUTION_H */

