/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: eddy
 *
 * Created on March 16, 2017, 4:19 PM
 */

#ifndef SOLUTION_H
#define SOLUTION_H

#include <unordered_map>

using namespace std;

class Solution {
public:
    Solution();
    Solution(const Solution& orig);
    virtual ~Solution();
    
    bool shouldPrintMessage(int timestamp, string message);
    
private:

    std::unordered_map<string, int> umapMsgTime;
    
};

#endif /* SOLUTION_H */

