/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on April 14, 2017, 2:33 PM
 */

#include "Solution.h"
#include <iostream>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

bool Solution::isAdditiveNumber(string num) {
    num.erase(0, num.find_first_not_of('0'));
    int len_num = num.length();
    for(int i=0; i<len_num/2+1; ++i) {
        string str_num1 = num.substr(0, i+1);
        long long ll_num1 = std::stoull(str_num1, nullptr, 10);
        for(int j=i+str_num1.length(); j<len_num; ++j) {
            string str_num2 = num.substr(i+1, j-i);
            if(str_num2[0] == '0' && str_num2.length() > 1) {
                break;
            }
            long long ll_num2 = std::stoull(str_num2, nullptr, 10);
            if(ll_num2 < ll_num1) {
                continue;
            }
            string str_num12 = str_num1 + str_num2;
            long long ll_pre_pre = ll_num1;
            long long ll_pre = ll_num2;
            string str_total = str_num12;
            cout<< ll_num1<< ","<< ll_num2<< endl;
            cout<< str_total<< endl;
            while(str_total.length() < len_num) {
                long long ll_sum = ll_pre_pre + ll_pre;
                string str_sum = std::to_string(ll_sum);
                str_total += str_sum;
                cout<< str_total<< endl;
                int len_total = str_total.length();
                if(len_total > len_num) {
                    break;
                }
                string str_sub = num.substr(0, len_total);
                if(str_total.compare(str_sub) != 0) {
                    break;
                }
                if(str_total.length() == len_num) {
                    return true;
                }
                ll_pre_pre = ll_pre;
                ll_pre = ll_sum;
            }
        }
        
    }
    return false;
}