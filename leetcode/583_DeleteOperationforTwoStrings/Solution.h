/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: eddy
 *
 * Created on May 17, 2017, 9:51 AM
 */

#ifndef SOLUTION_H
#define SOLUTION_H

#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    Solution();
    Solution(const Solution& orig);
    virtual ~Solution();
    
    int minDistance(string word1, string word2);
    
private:
    
    int help(string& word1, string& word2, unordered_map<char, vector<int>>& map1 
        , int pos1, int pos2, unordered_map<int, int>& history);
    

};

#endif /* SOLUTION_H */

