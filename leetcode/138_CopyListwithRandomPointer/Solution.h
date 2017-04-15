/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: eddy
 *
 * Created on April 14, 2017, 4:24 PM
 */

#ifndef SOLUTION_H
#define SOLUTION_H

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

struct RandomListNode {
    int label;
    RandomListNode *next, *random;
    RandomListNode(int x) : label(x), next(nullptr), random(nullptr) {}
};

class Solution {
public:
    Solution();
    Solution(const Solution& orig);
    virtual ~Solution();
    
    RandomListNode *copyRandomList(RandomListNode *head);
    
private:

};

#endif /* SOLUTION_H */

