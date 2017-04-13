/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on April 13, 2017, 9:41 AM
 */

#include "Solution.h"
#include <vector>
#include <algorithm>

using namespace std;

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

int Solution::computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
    int total_area = (C - A) * (D - B) + (G - E) * (H - F);
    if(A >= G || E >= C || B >= H || F >= D) {
        return total_area;
    }
    int width_isect = min(C, G) - max(A, E);
    int height_isect = min(D, H) - max(B, F);
    return total_area - width_isect * height_isect;
    
    /*std::vector<int> vec_width = {A, C, E, G};
    std::vector<int> vec_height = {B, D, F, H};
    std::sort(vec_width.begin(), vec_width.end());
    std::sort(vec_height.begin(), vec_height.end());
    int width = vec_width[2] - vec_width[1];
    int height = vec_height[2] - vec_height[1];
    return total_area - width * height;*/
}

