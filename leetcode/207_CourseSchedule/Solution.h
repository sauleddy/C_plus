/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: eddy
 *
 * Created on May 14, 2017, 1:17 PM
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
    
    bool canFinish(int numCourses, vector<pair<int, int>>& prerequisites);
    
private:
    
    bool help(vector<vector<int>>& graph, vector<int>& visited, int i);    

};

#endif /* SOLUTION_H */

