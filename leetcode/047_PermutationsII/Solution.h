/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: eddy
 *
 * Created on May 4, 2017, 9:55 AM
 */

#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>

using namespace std;

class Solution {
public:
    Solution();
    Solution(const Solution& orig);
    virtual ~Solution();
    
    vector<vector<int>> permuteUnique(vector<int>& nums);
    
private:
    
    vector<vector<int>> help(vector<int>& nums, int begin);
    

};

#endif /* SOLUTION_H */

