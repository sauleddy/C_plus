/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 22, 2017, 1:54 PM
 */

#include <cstdlib>
#include "Solution.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    Solution m_Solution;
    
    TreeNode* Node1 = new TreeNode(5);
    TreeNode* Node2 = new TreeNode(2);
    TreeNode* Node3 = new TreeNode(-5);
    Node1->left = Node2;
    Node1->right = Node3;
    
    vector<int> vecSubSum = m_Solution.findFrequentTreeSum(Node1);
    
    return 0;
}

