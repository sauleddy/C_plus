/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on June 4, 2017, 10:52 AM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::maxProfit(vector<int>& prices) {
    /*
    int profit = 0;
    if(prices.size() == 0) return profit;
    int idx = 0;
    while(idx < prices.size() - 1) {
        int idx_low = idx;
        while(idx_low < prices.size()-1 && prices[idx_low] > prices[idx_low+1]) {
            ++idx_low;
        }
        if(idx_low == prices.size() - 1) break;
        int idx_high = idx_low + 1;
        while(idx_high < prices.size()) {
            if(idx_high == prices.size() - 1) break;
            if(prices[idx_high] > prices[idx_high+1]) break;
            ++idx_high;
        }
        if(idx_high == prices.size()) break;
        profit += prices[idx_high] - prices[idx_low];
        idx = idx_high + 1;
    }
    return profit;
    */
    if(prices.size() == 0) return 0;
    vector<int> sell(prices.size(), 0);
    vector<int> buy(prices.size(), 0);
    buy[0] = prices[0] * -1;
    for(int i=1; i<prices.size(); ++i) {
        sell[i] = max(buy[i-1] + prices[i], sell[i-1]);
        buy[i] = max(sell[i-1] - prices[i], buy[i-1]);
    }
    return sell[prices.size() - 1];
    
}

