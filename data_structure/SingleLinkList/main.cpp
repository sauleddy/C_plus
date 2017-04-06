/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on February 25, 2017, 12:20 PM
 */

#include <cstdlib>
#include <iostream>
#include "SingleLink.h"

using namespace std;


/*
 * 
 */
int main(int argc, char** argv) {

    SingleLink<int> link;
    for (int i = 0; i < 10; i++)
    {
        link.insert(i, i);
    }
    link.insert_head(1111);
    link.insert_last(2222);
    
    link.del(1);
    
    cout << link.size() << endl;
    link.print();
    
    return 0;
}

