/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on May 7, 2017, 9:11 AM
 */

#include "Solution.h"

Solution::Solution() {
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

ListNode *Solution::detectCycle(ListNode *head) {
    ListNode *node1 = head;
    ListNode *node2 = head;
    ListNode *nodeMeet = this->help(node1, 1, node2, 2);
    if(nodeMeet == nullptr || nodeMeet == head) return nodeMeet;
    node1 = head;
    node2 = nodeMeet;
    nodeMeet = this->help(node1, 1, node2, 1);
    return nodeMeet;
}

ListNode *Solution::help(ListNode *node1, int speed1, ListNode *node2, int speed2) {
    while(node1 != nullptr && node2 != nullptr) {
        for(int i=0; i<speed1; ++i) {
            if(node1 == nullptr) break;
            node1 = node1->next;
        }
        for(int i=0; i<speed2; ++i) {
            if(node2 == nullptr) break;
            node2 = node2->next;
        }
        if(node1 == node2) break;
    }
    if(node1 == nullptr || node2 == nullptr) return nullptr;
    return node1;
}

