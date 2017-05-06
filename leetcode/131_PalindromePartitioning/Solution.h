/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: eddy
 *
 * Created on May 5, 2017, 9:51 AM
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
    
    vector<vector<string>> partition(string s);
    
private:
    
    void pushAnwser(vector<vector<string>>& result, string& s, int begin, int end);
    

};

#endif /* SOLUTION_H */

