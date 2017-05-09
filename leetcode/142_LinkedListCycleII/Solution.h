/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: eddy
 *
 * Created on May 7, 2017, 9:11 AM
 */

#ifndef SOLUTION_H
#define SOLUTION_H

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    Solution();
    Solution(const Solution& orig);
    virtual ~Solution();
    
    ListNode *detectCycle(ListNode *head);
    
private:
    
    ListNode *help(ListNode *node1, int speed1, ListNode *node2, int speed2);
    
    

};

#endif /* SOLUTION_H */

