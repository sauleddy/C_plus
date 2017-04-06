/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: eddy
 *
 * Created on March 21, 2017, 3:32 PM
 */

#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    Solution();
    Solution(const Solution& orig);
    virtual ~Solution();
    
    int countArrangement(int N);
     
private:
    int helper(int n, std::vector<int>& vecNums);
    void print(std::vector<int>& vecNums);
    std::vector<int> vecNums;
    
};

#endif /* SOLUTION_H */

