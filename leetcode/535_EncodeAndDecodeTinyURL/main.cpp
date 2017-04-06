/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 17, 2017, 4:36 PM
 */

#include <cstdlib>
#include <iostream>
#include "Solution.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    /*string longUrl1 = "http://www.google.com";
    string longUrl2 = "http://www.yahoo.com";
    
    Solution m_Solution;
    string shortUrl1 = m_Solution.encode(longUrl1);
    cout<< shortUrl1<< endl;
    string shortUrl2 = m_Solution.encode(longUrl2);
    cout<< shortUrl2<< endl;
    
    string longRet2 = m_Solution.decode(shortUrl2);
    cout<< longRet2<< endl;*/
    
    string url = "https://leetcode.com/problems/design-tinyurl";
    
    Solution solution;
    cout<< solution.encode(url)<< endl;
    cout<< solution.decode(solution.encode(url))<< endl;
    
    return 0;
}

