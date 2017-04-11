/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on April 11, 2017, 1:28 PM
 */

#include <cstdlib>
#include <iostream>
#include <vector>
#include "Solution.h"
#include <math.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    cout<< (1198 * 1198) % 1337<< endl;
    Solution m_Solution;
    int a = 2147483647;
    std::vector<int> b = {2, 0};
    cout<< m_Solution.superPow(a, b)<< endl;
    return 0;
}

