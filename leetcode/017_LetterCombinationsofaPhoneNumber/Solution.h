/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: eddy
 *
 * Created on April 11, 2017, 2:38 PM
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
    
    vector<string> letterCombinations(string digits);
    
private:
    void help(vector<string>& vecValid, int index, vector<string>& vecResult);
    
};

#endif /* SOLUTION_H */

