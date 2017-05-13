/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 10, 2017, 4:35 PM
 */

#include "Solution.h"

#include <algorithm>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::findContentChildren(vector<int>& g, vector<int>& s) {
    int content = 0;
    std::make_heap(g.begin(),g.end());
    std::make_heap(s.begin(),s.end());
    
    while(s.size() > 0) {
        int cookieThis = s.front();
        while(g.size() > 0 && g.front() > cookieThis) {
            std::pop_heap(g.begin(),g.end()); g.pop_back();
        }
        if(g.size() == 0) break;
        ++content;
        std::pop_heap(g.begin(),g.end()); g.pop_back();
        std::pop_heap(s.begin(),s.end()); s.pop_back();
    }
    return content;
}

