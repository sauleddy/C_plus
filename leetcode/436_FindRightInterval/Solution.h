/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: eddy
 *
 * Created on April 5, 2017, 8:36 AM
 */

#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>
#include <map>

using namespace std;

struct Interval {
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};

class Solution {
public:
    Solution();
    Solution(const Solution& orig);
    virtual ~Solution();
    
    vector<int> findRightInterval(vector<Interval>& intervals);
    
private:
    
};

#endif /* SOLUTION_H */

