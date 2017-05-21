/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 17, 2017, 9:51 AM
 */

#include "Solution.h"
#include <algorithm>
#include <iostream>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::minDistance(string word1, string word2) {
    if(word1.length() == 0) return word2.length();
    if(word2.length() == 0) return word1.length();
    unordered_map<char, vector<int>> freq;
    for(int i=0; i<word1.length(); ++i) {
        freq[word1[i]].push_back(i);
    }
    unordered_map<int, int> history;
    int length = help(word1, word2, freq, 0, 0, history);
    return word1.length() + word2.length() - length * 2;
}

int Solution::help(string& word1, string& word2, unordered_map<char, vector<int>>& map1 
        , int pos1, int pos2, unordered_map<int, int>& history) {
    // cout<< "pos1:"<< pos1<< ",pos2:"<< pos2<< endl;
    if(pos1 >= word1.length() || pos2 >= word2.length()) return 0;
    int key = (pos1 << 16) + pos2;
    if(history[key] != 0) return history[key];

    
    int pos1New = word1.length();
    while(pos2 < word2.length()) {
        vector<int> posVec = map1[word2[pos2]];
        if(posVec.size() > 0 && posVec.back() >= pos1) {
            pos1New = *std::find_if(posVec.begin(), posVec.end(), [&pos1](int i){ return i >= pos1; });
            break;
        }
        ++pos2;
    }
    
    int result = 0;
    if(pos1New < word1.length()) {
        int resultMatch = this->help(word1, word2, map1, pos1New + 1, pos2 + 1, history) + 1;
        int resultNoMatch = this->help(word1, word2, map1, pos1, pos2 + 1, history);
        result += (resultMatch >= resultNoMatch ? resultMatch : resultNoMatch);
    }
    history[key] = result;
    // cout<< "pos1:"<< pos1<< ",pos2:"<< pos2<< endl;
    // cout<< "result:"<< result<< endl;
    return result;
}

