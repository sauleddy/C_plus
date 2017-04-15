/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on April 14, 2017, 4:23 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    cout<< sizeof(long)<< endl;
    
    int num_1 = 10;
    int *pnum_1 = &num_1;
    cout<< sizeof(pnum_1)<< endl;
    cout<< hex<< reinterpret_cast<unsigned long>(pnum_1)<< endl;
    cout<< hex<< (unsigned long)pnum_1<< endl;
    return 0;
}

