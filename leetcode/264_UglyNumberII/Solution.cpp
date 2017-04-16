/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on April 16, 2017, 1:35 PM
 */

#include "Solution.h"
#include <set>
#include <vector>
#include <algorithm>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::nthUglyNumber(int n) {
    if(n == 0) {
        return 0;
    }
    int num_ugly = 1;
    std::vector<int> vec_ugly = {1};
    std::vector<int> vec_temp = {2, 3, 5, 1, 1, 1, 2, 3, 5};
    while(num_ugly < n) {
        int lastest_ugly = std::min(std::min(vec_temp[0], vec_temp[1]), vec_temp[2]);
        vec_ugly.push_back(lastest_ugly);
        ++num_ugly;
        for(int i=0; i<3; ++i) {
            if(vec_temp[i] == lastest_ugly) {
                vec_temp[i] = vec_ugly[vec_temp[i+3]] * vec_temp[i+6];
                ++vec_temp[i+3];
            }
        }
    }
    return vec_ugly[vec_ugly.size()-1];
}

