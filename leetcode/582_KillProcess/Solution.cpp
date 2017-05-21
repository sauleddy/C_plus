/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 17, 2017, 9:35 AM
 */

#include "Solution.h"
#include <unordered_map>
#include <queue>

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

vector<int> Solution::killProcess(vector<int>& pid, vector<int>& ppid, int kill) {
    vector<int> killedProcess;
    unordered_map<int, vector<int>> ppidMapPids;
    for(int i=0; i<ppid.size(); ++i) {
        ppidMapPids[ppid[i]].push_back(pid[i]);
    }
    queue<int> ppids;
    killedProcess.push_back(kill);
    ppids.push(kill);
    while(!ppids.empty()) {
        int ppidThis = ppids.front();
        ppids.pop();
        vector<int> vecPidThis = ppidMapPids[ppidThis];
        for(int i=0; i<vecPidThis.size(); ++i) {
            killedProcess.push_back(vecPidThis[i]);
            ppids.push(vecPidThis[i]);
        }
    }
    return killedProcess;
}

