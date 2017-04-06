/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 16, 2017, 9:48 AM
 */

#include <cstdlib>
#include <bitset>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    string str1("1100");
    std::bitset<32> b1(str1);
    
    string str2("1111111000000011001101");
    std::bitset<32> b2(str2, 5, 4);
    
    std::bitset<32> b3(str2, str2.size() - 4);
    
    cout<< b3.any()<< endl;
    
    b3.reset();
    cout<< b3.any()<< endl;
    
    unsigned long ul = 0xffffffffffffffff;
    std::bitset<32> b4(ul);
    cout<< b4<< endl;
    
    unsigned int ui = 0x8012;
    std::bitset<16> b5(ui);
    cout<< b5<< endl;
    
    int uiRet = b5.to_ulong();
    cout<< std::hex<< uiRet<< endl;
    
    return 0;
}

