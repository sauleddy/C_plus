/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on February 25, 2017, 8:36 PM
 */

#include <cstdlib>
#include <iostream>
#include "DoubleLink.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    DoubleLink<int> dlink;
    
    for (int i = 0; i < 10; i++)
    {
        dlink.insert(0, i+10);
    }
    dlink.insert(0,  100);
    dlink.insert_tail(1000);
    
    dlink.del_head();
    dlink.del_tail();
    dlink.del(3);
 
    cout<< "length:"<< dlink.size()<< endl;
    dlink.print();
    
    return 0;
}

