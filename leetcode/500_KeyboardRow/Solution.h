/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: eddy
 *
 * Created on March 9, 2017, 4:33 PM
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
    
    vector<string> findWords(vector<string>& words);
    
private:

};

#endif /* SOLUTION_H */

