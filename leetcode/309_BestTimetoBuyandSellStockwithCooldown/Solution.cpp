/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on June 4, 2017, 11:22 AM
 */

#include "Solution.h"
#include <algorithm>
#include <limits.h>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::maxProfit(vector<int>& prices) {
    int buy = INT_MIN, pre_buy = 0, sell = 0, pre_sell = 0;
    for (int price : prices) {
        pre_buy = buy;
        buy = max(pre_sell - price, pre_buy);
        pre_sell = sell;
        sell = max(pre_buy + price, pre_sell);
    }
    return sell;
}

