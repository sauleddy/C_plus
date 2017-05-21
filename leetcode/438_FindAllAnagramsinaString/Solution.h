/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: eddy
 *
 * Created on May 17, 2017, 8:54 AM
 */

#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    Solution();
    Solution(const Solution& orig);
    virtual ~Solution();
    
    vector<int> findAnagrams(string s, string p);
    
private:
    
    bool help(unordered_map<char, int>& table, string& s);

};

#endif /* SOLUTION_H */

