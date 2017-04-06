/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: eddy
 *
 * Created on March 17, 2017, 4:36 PM
 */

#ifndef SOLUTION_H
#define SOLUTION_H

#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
    Solution();
    Solution(const Solution& orig);
    virtual ~Solution();
    
    string encode(string longUrl);
    string decode(string shortUrl);
    
private:

    std::unordered_map<string, string> mapLongToShort;
    std::unordered_map<int, string> mapIdToLong;
    int count;

};

#endif /* SOLUTION_H */

