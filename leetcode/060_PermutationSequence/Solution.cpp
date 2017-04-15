/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on April 14, 2017, 9:04 AM
 */

#include "Solution.h"
#include <stdio.h>
#include <stdlib.h>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

vector<int> vec_factorial;

string Solution::getPermutation(int n, int k) {
    vector<int> vec_nums;
    for(int i=1; i<=n; ++i) {
        vec_nums.push_back(i);
        if(i == 1) {
            vec_factorial.push_back(i);
        } else {
            int factorial = vec_factorial[vec_factorial.size()-1] * i;
            vec_factorial.push_back(factorial);
        }
    }
    int num_valid = 0;
    return this->help(vec_nums, 0, k, num_valid);
}

string Solution::help(vector<int>& vec_nums, int start, int nth, int& num_valid) {
    if(num_valid + 1 == nth) {
        std::string result = "";
        for(int i=0; i<vec_nums.size(); ++i) {
            result += std::to_string(vec_nums[i]);
        }
        return result;
    }
    int num_permutation = vec_factorial[vec_nums.size()-start-2];
    for(int i=start; i<vec_nums.size(); ++i) {
        if(num_valid + num_permutation < nth) {
            num_valid += num_permutation;
        } else {
            if(i != start) {
                int temp = vec_nums[i];
                vec_nums.erase(vec_nums.begin() + i);
                vec_nums.insert(vec_nums.begin() + start, temp);
            }
            return this->help(vec_nums, ++start, nth, num_valid);
        }
    }
}

