/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 22, 2017, 10:22 AM
 */

#include "Solution.h"
#include <math.h>
#include <algorithm>
#include <unordered_map>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

bool Solution::validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
    int dist2 = calculateDistance(p1, p2);
    int dist3 = calculateDistance(p1, p3);
    int dist4 = calculateDistance(p1, p4);
    std::unordered_map<int,vector<vector<int>>> mapping;
    mapping[dist2].push_back(p2);
    mapping[dist3].push_back(p3);
    mapping[dist4].push_back(p4);
    vector<int> distance = {dist2, dist3, dist4};
    std::sort(distance.begin(), distance.end());
    if(distance[0] == 0 || distance[0] != distance[1] || distance[0] + distance[1] != distance[2]) return false;
    
    int length1 = calculateDistance(mapping[distance[2]][0], mapping[distance[0]][0]);
    int length2 = calculateDistance(mapping[distance[2]][0], mapping[distance[0]][1]);
    if(length1 != length2 || length1 != distance[0]) return false;
    
    return true;
}

int Solution::calculateDistance(vector<int>& p1, vector<int>& p2) {
    return pow(p2[0] - p1[0], 2) + pow(p2[1] - p1[1], 2);
}

