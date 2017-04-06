/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: eddy
 *
 * Created on March 31, 2017, 9:50 AM
 */

#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <iostream>

using namespace std;

#include <unordered_map>

class Solution {
public:
    Solution();
    Solution(const Solution& orig);
    virtual ~Solution();
    
    int maxProduct(vector<string>& words);
    
private:
    
    bool haveCommonLetter(string str1, string str2);
    int calculateCommonLNum(string str);

    std::unordered_map<string, int> umapStrToMask;
};

#endif /* SOLUTION_H */

