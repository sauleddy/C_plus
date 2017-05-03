/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on April 29, 2017, 11:08 AM
 */

#include <cstdlib>
#include "Solution.h"
#include <vector>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    Solution m_Solution;
    int num_people = 4;
    vector<vector<int>> vecRelation(num_people, vector<int>(num_people, 0));
    vecRelation[0][0] = 1;
    vecRelation[0][3] = 1;
    vecRelation[1][1] = 1;
    vecRelation[1][2] = 1;
    vecRelation[2][1] = 1;
    vecRelation[2][2] = 1;
    vecRelation[2][3] = 1;
    vecRelation[3][0] = 1;
    vecRelation[3][2] = 1;
    vecRelation[3][3] = 1;
    cout<< m_Solution.findCircleNum(vecRelation)<< endl;
    return 0;
}

