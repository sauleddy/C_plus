/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 14, 2017, 7:22 PM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

vector<int> Solution::findOrder(int numCourses, vector<pair<int, int>>& prerequisites) {
    vector<vector<int>> graph(numCourses, vector<int>(0));
    for(int i=0; i<prerequisites.size(); ++i) {
        graph[prerequisites[i].second].push_back(prerequisites[i].first);
    }
    vector<int> visited(numCourses, 0);
    vector<int> result;
    for(int i=0; i<numCourses; ++i) {
        this->help(graph, visited, i, result);
    }
    return result;
}

void Solution::help(vector<vector<int>>& graph, vector<int>& visited
    , int i, vector<int>& result) {
    if(visited[i] == 1) return;
    
    result.push_back(i);
    
    visited[i] = 1;
    
    vector<int> nodeCanVisited = graph[i];
    for(int i=0; i<nodeCanVisited.size(); ++i) {
        this->help(graph, visited, nodeCanVisited[i], result);
    }
    
}

