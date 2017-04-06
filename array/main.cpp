/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 8, 2017, 3:38 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*void func(int data[2][2])
{
    for(int i = 0; i<2; ++i) {
        for(int i2 = 0; i2<2; ++i2) {
            cout<< data[i][i2]<< ","<< endl;
        }
    }
}*/

/*void func(int data[][2])
{
    for(int i = 0; i<2; ++i) {
        for(int i2 = 0; i2<2; ++i2) {
            cout<< data[i][i2]<< ","<< endl;
        }
    }
}*/

void func(int (*data)[2])
{
    for(int i = 0; i<2; ++i) {
        for(int i2 = 0; i2<2; ++i2) {
            //cout<< data[i][i2]<< ","<< endl;
            cout<< *(*(data+i)+i2)<< ","<< endl;
        }
    }
}

/*
 * 
 */
int main(int argc, char** argv) {

    
    //int data[2][3] = {{0,2,4},{1,3,5}};
    int data[2][2] = {{0,2},{1,3}};
    func(data);
    
    return 0;
}

