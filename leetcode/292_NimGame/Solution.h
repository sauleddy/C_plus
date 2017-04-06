/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: eddy
 *
 * Created on March 19, 2017, 8:20 PM
 */

#ifndef SOLUTION_H
#define SOLUTION_H

class Solution {
public:
    Solution();
    Solution(const Solution& orig);
    virtual ~Solution();
    
    bool canWinNim(int n);
    
private:

};

#endif /* SOLUTION_H */

