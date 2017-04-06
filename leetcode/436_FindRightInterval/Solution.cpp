/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on April 5, 2017, 8:36 AM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

vector<int> Solution::findRightInterval(vector<Interval>& intervals) {
    vector<int> vecRes(intervals.size(), -1);
    if(intervals.size() == 0) {
        return vecRes;
    }
    
    std::map<int, int> mapStartToIdx;
    std::multimap<int, int> mapEndToIdx;
    for(int i=0; i<intervals.size(); ++i) {
        mapStartToIdx.insert(std::pair<int, int>(intervals[i].start, i));
        mapEndToIdx.insert(std::pair<int, int>(intervals[i].end, i));
    }
    
    auto iterStart = mapStartToIdx.begin();
    for(auto iterEnd=mapEndToIdx.begin(); iterEnd!=mapEndToIdx.end(); ++iterEnd) {
        while(iterStart->first < iterEnd->first) {
            ++iterStart;
            if(iterStart == mapStartToIdx.end()) {
                return vecRes;
            }
        }
        vecRes[iterEnd->second] = iterStart->second;
    }
    return vecRes;
}

