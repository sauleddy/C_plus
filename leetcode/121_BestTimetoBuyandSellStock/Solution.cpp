/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on June 4, 2017, 10:25 AM
 */

#include "Solution.h"
#include <limits.h>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::maxProfit(vector<int>& prices) {
    int profit = 0;
    if(prices.size() == 0) return profit;
    vector<int> max(prices.size(), prices[prices.size()-1]);
    for(int i=prices.size()-2; i>=0; --i) {
        if(prices[i] > max[i+1]) max[i] = prices[i];
        else max[i] = max[i+1];
    }
    int min = INT_MAX;
    for(int i=0; i<prices.size()-1; ++i) {
        if(prices[i] < prices[i+1] && prices[i] < min) {
            min = prices[i];
            if(max[i+1] - prices[i] > profit) {
                profit = max[i+1] - prices[i];
            }
        }
    }
    return profit;
}

