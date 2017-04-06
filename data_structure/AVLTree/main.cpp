/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 5, 2017, 5:56 PM
 */

#include <cstdlib>
#include "AVLTree.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    AVLTree<int> a;
    for (int i = 0; i < 10; i++)
        a.insert(i);
    cout<< "Tree Height：" << a.height() << endl;
 
    cout<< "inOrder:" << endl;
    a.inOrder();
    cout<< endl;
    cout<< "preOrder:" << endl;
    a.preOrder();
    cout<< endl;
    cout<< "postOrder:" << endl;
    a.postOrder();
    cout<< endl;
    cout << "delete 7"<<endl;
    a.remove(7);
 
    cout<< "inOrder:" << endl;
    a.inOrder();
    cout<< endl;
    cout<< "preOrder:" << endl;
    a.preOrder();
    cout<< endl;
    cout<< "postOrder:" << endl;
    a.postOrder();
    cout<< endl;
    
    int iDelValue = 7;
    NodeBase<int>* b = a.search_iterator(iDelValue);
    if (b != nullptr)
        cout<< b->value<< endl;
    else
        cout<< "Cannot find:"<< iDelValue<< endl;
    
    return 0;
}

