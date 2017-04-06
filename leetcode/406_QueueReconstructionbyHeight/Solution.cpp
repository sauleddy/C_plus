/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on March 20, 2017, 3:20 PM
 */

#include "Solution.h"
#include <algorithm>
#include <list>

bool compareHeight(pair<int, int> pair1, pair<int, int> pair2) {
    if(pair1.first == pair2.first) {
        return pair1.second < pair2.second ? true : false;
    } else {
        return pair1.first > pair2.first ? true : false;
    }
}

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

vector<pair<int, int>> Solution::reconstructQueue(vector<pair<int, int>>& people) {
    if(people.size() == 0) {
        return people;
    }
    
    std::sort(people.begin(), people.end(), compareHeight);
    vector<pair<int, int>> result;
    for (const auto& p : people) {
        result.emplace(result.begin() + p.second, p);
    }
    return result;
}

