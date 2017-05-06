/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 5, 2017, 9:51 AM
 */

#include "Solution.h"
#include <iostream>
#include <algorithm>
#include <unordered_map>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

vector<vector<string>> Solution::partition(string s) {
    vector<vector<string>> result;
    if(s.size() == 0) return result;
    
    vector<vector<string>> history;
    vector<int> historyIdx = {0};
    
    vector<vector<int>> table(s.size(), vector<int>(s.size(), 0));
    for(int i=0; i<s.size(); ++i) {
        for(int j=0; j<=i; ++j) {
            if(s[i] != s[j]) continue;
            if(i == j || i == j+1) table[j][i] = 1;
            else table[j][i] = table[j+1][i-1];
            
            if(table[j][i] == 1) {
                string str_this = s.substr(j, i-j+1);
                if(j > 0) {
                    for(int idx=historyIdx[j-1]; idx<historyIdx[j]; ++idx) {
                        vector<string> vec_this(history[idx].size());
                        std::copy(history[idx].begin(), history[idx].end(), vec_this.begin());
                        vec_this.push_back(str_this);
                        if(i == s.size() - 1) result.push_back(vec_this);
                        else history.push_back(vec_this);
                    }
                } else {
                    vector<string> vec_this = {str_this};
                    if(i == s.size() - 1) result.push_back(vec_this);
                    else history.push_back(vec_this);
                }
                
            }
        }
        historyIdx.push_back(history.size());
    }
    
    return result;
}

void Solution::pushAnwser(vector<vector<string>>& result, string& s, int begin, int end) {
    vector<string> answer;
    int idx = 0;
    while(idx < begin) {
        answer.push_back(s.substr(idx, 1));
        ++idx;
    }
    answer.push_back(s.substr(begin, end-begin+1));
    /*idx = end + 1;
    while(idx < s.size()) {
        answer.push_back(s.substr(idx, 1));
        ++idx;
    }*/
    result.push_back(answer);
}

