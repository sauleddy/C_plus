/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: eddy
 *
 * Created on April 12, 2017, 9:18 AM
 */

#ifndef SOLUTION_H
#define SOLUTION_H

#include <iostream>

using namespace std;

class Solution {
public:
    Solution();
    Solution(const Solution& orig);
    virtual ~Solution();
    
    int lengthLongestPath(string input);
    
private:
    
    int help(string& input, int& begin, int layer_cur);
    
    
    int findNextToken(string& input, int begin, string& token, int& end);
    

};

#endif /* SOLUTION_H */

