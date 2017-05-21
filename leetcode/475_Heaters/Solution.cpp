/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 19, 2017, 9:08 AM
 */

#include "Solution.h"
#include <algorithm>
#include <iostream>
#include <limits.h>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::findRadius(vector<int>& houses, vector<int>& heaters) {
    std::sort(houses.begin(), houses.end());
    std::sort(heaters.begin(), heaters.end());
    
    if(heaters[heaters.size()-1] <= houses[0]) return houses[houses.size()-1] - heaters[heaters.size()-1];
    if(heaters[0] >= houses[houses.size()-1]) return heaters[0] - houses[0];
    
    int minRadius = 0;
    vector<int>::iterator cur = houses.begin();
    for(int i=0; i<heaters.size(); ++i) {
        if(heaters[i] <= houses[0]) {
            continue;
        }
        if(i == 0) {
            minRadius = heaters[i] - houses[0];
        } else {
            float midHeater = (float)(heaters[i] + heaters[i-1]) / 2;
            int radiusUpper = 0;
            int radiusLower = 0;
            cur = std::lower_bound(cur, houses.end(), midHeater);
            if(*cur < heaters[i] && *cur > heaters[i-1]) radiusUpper = heaters[i] - *cur;
            if(cur > houses.begin() && *(cur-1) > heaters[i-1]) radiusLower = *(cur-1) - heaters[i-1];
            int radiusNeed = max(radiusLower, radiusUpper);
            if(radiusNeed > minRadius) minRadius = radiusNeed;

            if(heaters[i] > houses[houses.size()-1]) break;
        }
        if(i == heaters.size() - 1) {
            int radiusFinal = houses[houses.size()-1] - heaters[i];
            if(radiusFinal > minRadius) minRadius = radiusFinal;
        }
    }
    return minRadius;
}

