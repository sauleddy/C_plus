/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: eddy
 *
 * Created on April 14, 2017, 9:04 AM
 */

#ifndef SOLUTION_H
#define SOLUTION_H

#include <string>
#include <list>
#include <vector>

using namespace std;

class Solution {
public:
    Solution();
    Solution(const Solution& orig);
    virtual ~Solution();
    
    string getPermutation(int n, int k);
    
private:

    string help(vector<int>& vec_nums, int start, int nth, int& num_valid);
    
};

#endif /* SOLUTION_H */

