/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on May 10, 2017, 4:34 PM
 */

#include <cstdlib>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int myints[] = {10,20,30,5,15};
    std::vector<int> v(myints,myints+5);
    std::make_heap (v.begin(),v.end());
    std::cout << "initial max heap   : " << v.front() << '\n';

    std::pop_heap (v.begin(),v.end()); v.pop_back();
    std::pop_heap (v.begin(),v.end()); v.pop_back();
    std::cout << "max heap after pop : " << v.size() << '\n';
    std::cout << "max heap after pop : " << v.front() << '\n';
    return 0;
}

