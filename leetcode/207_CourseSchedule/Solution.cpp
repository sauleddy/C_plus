/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 14, 2017, 1:17 PM
 */

#include "Solution.h"
#include <unordered_map>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

bool Solution::canFinish(int numCourses, vector<pair<int, int>>& prerequisites) {
    vector<vector<int>> graph(numCourses, vector<int>(0));
    for(int i=0; i<prerequisites.size(); ++i) {
        graph[prerequisites[i].second].push_back(prerequisites[i].first);
    }
    vector<int> visited(numCourses, 0);
    for(int i=0; i<numCourses; ++i) {
        if(this->help(graph, visited, i) == false) return false;
    }
    return true;
}

bool Solution::help(vector<vector<int>>& graph, vector<int>& visited, int i) {
    if(visited[i] == -1) return false;
    if(visited[i] == 1) return true;
    visited[i] = -1;
    
    vector<int> nodeCanVisited = graph[i];
    for(int i=0; i<nodeCanVisited.size(); ++i) {
        if(this->help(graph, visited, nodeCanVisited[i]) == false) return false;
    }
    visited[i] = 1;
    return true;
}

