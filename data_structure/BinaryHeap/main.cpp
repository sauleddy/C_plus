/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 6, 2017, 2:00 PM
 */

#include <cstdlib>
#include <iostream>
#include "MaxHeap.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    MaxHeap<int> heap(11);
    for (int i = 0; i < 10; i++)
    {
        heap.insert(i);
    }
    heap.print();
    cout << endl;
    heap.remove(8);
    heap.print();
    cout << endl;
    
    return 0;
}

