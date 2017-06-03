/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: eddy
 *
 * Created on May 22, 2017, 10:22 AM
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
    
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4);
    
private:
    
    int calculateDistance(vector<int>& p1, vector<int>& p2);
    
};

#endif /* SOLUTION_H */

