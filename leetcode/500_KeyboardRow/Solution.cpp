/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on March 9, 2017, 4:33 PM
 */

#include <unordered_set>
#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

vector<string> Solution::findWords(vector<string>& words) {
    
    unordered_set<char> setRow1 = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'};
    unordered_set<char> setRow2 = {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'};
    unordered_set<char> setRow3 = {'z', 'x', 'c', 'v', 'b', 'n', 'm'};
    vector<unordered_set<char>> vecRows = {setRow1, setRow2, setRow3};
    
    vector<string> vecRet;
    vector<string>::iterator iter = words.begin();
    for(iter; iter!=words.end(); ++iter) {
        string strThis = *iter;
        int iFindRow = 0;
        for(int i=0; i<3; ++i) {
            if(vecRows[i].count(tolower((char)strThis[0])) > 0)
                iFindRow = i;
        }
        
        vecRet.push_back(strThis);
        for(int j=1; j<strThis.size(); ++j) {
            if(vecRows[iFindRow].count(tolower((char)strThis[j])) <= 0) {
                vecRet.pop_back();
                break;
            }
        }
    }
    return vecRet;
}

