/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 19, 2017, 11:20 AM
 */

#include <cstdlib>
#include <vector>
#include <iostream>
#include "Solution.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    std::vector<int> vec1 = {0, 1, 0, 0};
    std::vector<int> vec2 = {1, 1, 1, 0};
    std::vector<int> vec3 = {0, 1, 0, 0};
    std::vector<int> vec4 = {1, 1, 0, 0};
    std::vector<std::vector<int>> grid = {vec1, vec2, vec3, vec4};
    
    Solution m_Solution;
    cout<< m_Solution.islandPerimeter(grid)<< endl;
    
    return 0;
}

