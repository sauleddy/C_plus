/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: eddy
 *
 * Created on May 18, 2017, 8:51 AM
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
    
    bool isPalindrome(ListNode* head);
    
private:

};

#endif /* SOLUTION_H */

