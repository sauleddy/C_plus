/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on February 28, 2017, 3:53 PM
 */

#include <cstdlib>
#include <iostream>
#include "ArrayStack.h"
#include "LinkStack.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    ArrayStack<int> p(5);
    for (int i = 0; i < 5; i++)
    {
        p.push(i);
    }
    cout << "stack size:"<<p.size() << endl;
    cout << "is empty:"<<p.isEmpty() << endl;
    cout << "top value:"<<p.top() << endl;
    cout << "pop out:" << endl;
    while (!p.isEmpty())
    {
        cout<<p.pop() <<endl;
    }
    cout << "stack size:"<<p.size() << endl;
    
    LinkStack<string> lstack;
    lstack.push("hello");
    lstack.push("to");
    lstack.push("you！");
    lstack.print();
    cout << "size of stack:" << lstack.size() << endl;
    cout <<"top of stack:"<< lstack.top() << endl;
    while (!lstack.isEmpty())
    {
        lstack.pop();
    }
    cout << "size of stack:" << lstack.size() << endl;
    
    return 0;
}

