/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 10, 2017, 1:02 PM
 */

#include <cstdlib>
#include <deque>
#include <iostream>

using namespace std;

void print(std::deque<int>& deque) {
    cout<< endl;
    std::deque<int>::iterator iter = deque.begin();
    for(iter; iter!=deque.end(); ++iter) {
        cout<< *iter<< ",";
    }
    cout<< endl;
}

/*
 * 
 */
int main(int argc, char** argv) {

    std::deque<int> dequeA(3, 0);
    dequeA.push_back(10);
    dequeA.push_front(5);
    cout<< "size of dequeA:"<< dequeA.size()<< endl;
    print(dequeA);
    
    std::deque<int>::iterator iterA = dequeA.begin();
    dequeA.insert(iterA, 3);
    print(dequeA);
    
    std::deque<int> dequeB;
    dequeB.push_back(1);
    dequeB.push_back(2);
    dequeB.insert(dequeB.begin()+1, dequeA.begin()+1, dequeA.begin()+3);
    print(dequeB);
    
    std::deque<int> dequeC(dequeB.size(), 0);
    dequeC.swap(dequeB);
    
    print(dequeB);
    print(dequeC);
    
    return 0;
}

