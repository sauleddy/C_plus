/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 8, 2017, 9:39 AM
 */

#include "Solution.h"
#include <unordered_map>
#include <algorithm>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

string Solution::reverseVowels(string s) {
    int begin = 0, end = s.length() - 1;
    
    unordered_map<char, int> vowels = {{'a', 1}, {'e', 1}, {'i', 1}, {'o', 1}, {'u', 1}, {'A', 1}, {'E', 1}, {'I', 1}, {'O', 1}, {'U', 1}};

    while(begin < end) {
        while(vowels[s[begin]] != 1 && begin <= s.length() - 1) ++begin;
        while(vowels[s[end]] != 1 && end >= 0) --end;
        if(begin < end) {
            std::swap(s[begin++], s[end--]);
        }
    };
    return s;
}

