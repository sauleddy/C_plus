/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on April 14, 2017, 11:34 AM
 */

#include "Solution.h"
#include <vector>

using namespace std;

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

string Solution::multiply(string num1, string num2) {
    int len_num1 = num1.size();
    int len_num2 = num2.size();
    if(len_num1 * len_num2 == 0) {
        return "0";
    }
    int len_max = max(len_num1, len_num2);
    std::vector<int> vec_result(len_max * 2, 0);
    
    for(int i=0; i<len_num2; ++i) {
        int num2_this = num2[len_num2-1-i] - '0';
        int carry = 0;
        for(int j=0; j<len_num1; ++j) {
            int idx_this = i + j;
            int num1_this = num1[len_num1-1-j] - '0';
            int multiply = num1_this * num2_this + carry + vec_result[idx_this];
            vec_result[idx_this] = multiply % 10;
            carry = multiply / 10;
        }
        vec_result[i + len_num1] += carry;
    }
    string result(vec_result.size(), '\0');
    bool find_valid = false;
    int idx = 0;
    for(auto iter=vec_result.rbegin(); iter!=vec_result.rend(); ++iter) {
        if(find_valid == false && *iter == 0) {
            if(iter == vec_result.rend()-1) {
                result[idx++] = '0';
            }
            continue;
        }
        find_valid = true;
        result[idx++] = *iter + 48;
    }
    return result;
}

