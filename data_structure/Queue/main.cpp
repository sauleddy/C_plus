/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on February 28, 2017, 5:46 PM
 */

#include <cstdlib>
#include <iostream>

#include "LoopQueue.h"
#include "LinkQueue.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    cout <<"LoopQueue" << endl;
    LoopQueue<string> queue(6);
    queue.push("one");
    queue.push("two");
    queue.push("three");
    queue.push("four");
    queue.push("five");
    queue.push("six");
    queue.push("seven");
    queue.push("eight");
    cout << "size of queue:" << queue.size() << endl;
    while (!queue.isEmpty())
    {
        cout << queue.front() << endl;
        queue.pop();
    }
    
    cout <<"LinkQueue" << endl;
    LinkQueue<string> lqueue;
    lqueue.push("one");
    lqueue.push("two");
    lqueue.push("three");
    lqueue.push("four");
    lqueue.push("five");
    cout << "size of queue:" << lqueue.size() << endl;
    while (!lqueue.isEmpty())
    {
        cout << lqueue.front() << endl;
        lqueue.pop();
    }
    
    return 0;
}

