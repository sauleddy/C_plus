/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 13, 2017, 9:58 AM
 */

#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    std::vector<int> vecA = {1, 3, 5, 4, 2};
    std::vector<int> vecB = {2, 3, 4, 5, 1};
    bool bRes = std::is_permutation(vecA.begin(), vecA.end(), vecB.begin());
    cout<< bRes<< endl;
    
    return 0;
}

