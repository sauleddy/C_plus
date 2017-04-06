/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on March 21, 2017, 3:32 PM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::countArrangement(int N) {
    for(int i=1; i<=N; ++i) {
        vecNums.push_back(i);
    }
    int len = vecNums.size();
    return helper(len, vecNums);
}

int Solution::helper(int n, std::vector<int>& vecNums) {
    if(n <= 1) {
        print(vecNums);
        return 1;
    }
    int res = 0; 
    for(int i=0; i<n; ++i) {
        if(vecNums[i] % n == 0 || n % vecNums[i] == 0) {
            swap(vecNums[i], vecNums[n-1]);
            res += helper(n-1, vecNums);
            swap(vecNums[i], vecNums[n-1]);
        }
    }
    return res;
}

void Solution::print(std::vector<int>& vecNums) {
    for(auto num : vecNums) {
        cout<< num<< " ";
    }
    cout<< endl;
}
