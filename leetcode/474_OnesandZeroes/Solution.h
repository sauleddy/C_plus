/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: eddy
 *
 * Created on April 19, 2017, 11:15 AM
 */

#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    Solution();
    Solution(const Solution& orig);
    virtual ~Solution();
    
    int findMaxForm(vector<string>& strs, int m, int n);
    
private:

};

#endif /* SOLUTION_H */

