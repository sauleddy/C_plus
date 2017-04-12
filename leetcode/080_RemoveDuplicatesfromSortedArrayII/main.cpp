/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on April 12, 2017, 2:30 PM
 */

#include <cstdlib>
#include <iostream>

#include "Solution.h"

using namespace std;

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Solution m_Solution;
    vector<int> vecNums = {1, 1, 1, 2, 2, 3, 3, 4};
    cout<< m_Solution.removeDuplicates(vecNums)<< endl;
    return 0;
}

