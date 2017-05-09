/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: eddy
 *
 * Created on May 9, 2017, 10:16 AM
 */

#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solution {
public:
    Solution();
    Solution(const Solution& orig);
    virtual ~Solution();
    
    int splitArray(vector<int>& nums, int m);
    
private:

    int help(vector<int>& nums, int begin, int m, int sum, unordered_map<int, int>& history);
    
    
};

#endif /* SOLUTION_H */

