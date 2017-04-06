/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 10, 2017, 11:46 AM
 */

#include <cstdlib>
#include <vector>
#include <iostream>
#include <iterator>
#include "box.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    std::vector<int> vecA(10, 0);
    cout<< "size of vecA:"<< vecA.size()<< endl;
    
    std::vector<int> vecB(10, 1);
    
    if(vecA == vecB)
        cout<< "vecA == vecB"<< endl;
    else
        cout<< "vecA != vecB"<< endl;
    
    /*
     * two dimension array 5 * 10
     */
    std::vector<int> row(10, 1);
    std::vector< std::vector<int> > array(5, row);
    cout<< "size of array:"<< array.size()<< endl;
    cout<< "size of row:"<< array[0].size()<< endl;
    
    
    
    
    std::vector<box*> vecBox;
    //box m_box;
    //vecBox.push_back(m_box);
    
    box* p_box = new box();
    vecBox.push_back(p_box);
    std::vector<box*>::iterator iter = vecBox.begin();
    delete *iter;
    vecBox.erase(vecBox.begin());
    //vecBox.clear();
    
    return 0;
}

