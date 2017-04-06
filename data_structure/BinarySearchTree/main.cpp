/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 1, 2017, 2:36 PM
 */

#include <cstdlib>
#include <iostream>
#include "BSTree.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    BSTree<int> t;
    /*t.insert(62);
    t.insert(58);
    t.insert(47);
    t.insert(51);
    t.insert(35);
    t.insert(37);
    t.insert(88);
    t.insert(73);
    t.insert(99);
    t.insert(93);
    t.insert(95);*/
    
    t.insert(3);
    t.insert(1);
    t.insert(0);
    t.insert(2);
    t.insert(7);
    t.insert(5);
    t.insert(4);
    t.insert(6);
    t.insert(8);
    t.insert(9);
    
    cout << endl << "inOrder：" << endl;
    t.inOrder();
    cout << endl;
    
    cout << endl << "preOrder：" << endl;
    t.preOrder();
    cout << endl;
    
    cout << endl << "postOrder：" << endl;
    t.postOrder();
    cout << endl;
    
    cout << "Max:" << t.searchMax() << endl;
    cout << "Min:" << t.searchMin() << endl;
 
    /*cout << "remove 99 88 37:" << endl;
    t.remove(99);
    t.remove(88);
    t.remove(37);*/
    
    cout << "remove 7:" << endl;
    t.remove(7);
 
    cout << "Max:" << t.searchMax() << endl;
    cout << "Min:" << t.searchMin() << endl;
 
    cout << endl << "inOrder：" << endl;
    t.inOrder();
    cout << endl;
    
    t.destroy();
    
    return 0;
}

