/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: eddy
 *
 * Created on May 8, 2017, 11:17 AM
 */

#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    Solution();
    Solution(const Solution& orig);
    virtual ~Solution();
    
    int longestConsecutive(vector<int>& nums);
    
private:

};

#endif /* SOLUTION_H */

