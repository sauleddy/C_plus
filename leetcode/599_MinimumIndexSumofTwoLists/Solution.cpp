/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on June 3, 2017, 1:20 PM
 */

#include "Solution.h"
#include <unordered_map>
#include <limits.h>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

vector<string> Solution::findRestaurant(vector<string>& list1, vector<string>& list2) {
    vector<string> result;
    if(list1.size() == 0 || list2.size() == 0) return result;
    unordered_map<string, int> mapStrToIdx;
    for(int i=0; i<list1.size(); ++i) {
        mapStrToIdx[list1[i]] = i+1;
    }
    
    int idxSum = INT_MAX;
    for(int i=0; i<list2.size(); ++i) {
        if(i > idxSum) break;
        int idxThis = mapStrToIdx[list2[i]] - 1;
        if(idxThis >= 0) {
            int idxSumThis = idxThis + i;
            if(idxSumThis == idxSum) result.push_back(list2[i]);
            else if(idxSumThis < idxSum) {
                result.clear();
                result.push_back(list2[i]);
                idxSum = idxSumThis;
            }
        }
    }
    return result;
}

