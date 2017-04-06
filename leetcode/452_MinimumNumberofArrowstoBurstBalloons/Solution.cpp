/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on April 1, 2017, 11:42 AM
 */

#include "Solution.h"
#include <algorithm>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::findMinArrowShots(vector<pair<int, int>>& points) {
    if(points.size() == 0) {
        return 0;
    }
    std::sort(points.begin(), points.end());
    int shot = 1;
    int begin = points[0].first;
    int end = points[0].second;
    for(int i=1; i<points.size(); ++i) {
        if(points[i].first <= end && points[i].second >= begin) {
            begin = max(begin, points[i].first);
            end = min(end, points[i].second);
        } else {
            ++shot;
            begin = points[i].first;
            end = points[i].second;
        }
    }
    return shot;
}

