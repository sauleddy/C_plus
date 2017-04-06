/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 22, 2017, 8:55 AM
 */

#include <cstdlib>
#include "Leaf.h"
#include "Composite.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    Component *pNode = new Composite("Beijing Head Office");
    Component *pNodeHr = new Leaf("Beijing Human Resources Department");
    Component *pSubNodeSh = new Composite("Shanghai Branch");
    Component *pSubNodeCd = new Composite("Chengdu Branch");
    Component *pSubNodeBt = new Composite("Baotou Branch");
    pNode->add(pNodeHr);
    pNode->add(pSubNodeSh);
    pNode->add(pSubNodeCd);
    pNode->add(pSubNodeBt);
    pNode->print();
    
    Component *pSubNodeShHr = new Leaf("Shanghai Human Resources Department");
    Component *pSubNodeShCg = new Leaf("Shanghai Purchasing Department");
    Component *pSubNodeShXs = new Leaf("Shanghai Sales department");
    Component *pSubNodeShZb = new Leaf("Shanghai Quality supervision Department");
    pSubNodeSh->add(pSubNodeShHr);
    pSubNodeSh->add(pSubNodeShCg);
    pSubNodeSh->add(pSubNodeShXs);
    pSubNodeSh->add(pSubNodeShZb);
    pNode->print();
    
    pSubNodeSh->remove(pSubNodeShZb);
    
    pNode->print();
    
    if (pNode != NULL)
    {
         delete pNode;
         pNode = NULL;
    }
    
    return 0;
}

