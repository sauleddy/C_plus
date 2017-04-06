/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 6, 2017, 3:31 PM
 */

#include <cstdlib>
#include "Huffman.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    Huffman<int> huffmanTree;
    int data[] = {40, 20, 10, 30}; 
    huffmanTree.create(data, 4);
    
    cout<< "inOrder:" << endl;
    huffmanTree.inOrder();
    cout<< endl;
    cout<< "preOrder:" << endl;
    huffmanTree.preOrder();
    cout<< endl;
    cout<< "postOrder:" << endl;
    huffmanTree.postOrder();
    cout<< endl;
    
    return 0;
}

