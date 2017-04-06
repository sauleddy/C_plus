/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 10, 2017, 10:38 AM
 */

#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    char* szA = "123456";
    cout<< sizeof(szA)<< endl;
    
    char szB[] = "123456";
    cout<< sizeof(szB)<< endl;
    
    string strA = szA;
    cout<< strA.length()<< endl;
    
    string strB = "abcd";
    string strC = "efghij";
    if(strB < strC)
        cout<< "strB < strC"<< endl;
    
    string strD;
    strD.assign(strC, 2, 3);
    cout<< strD<< endl;
    
    strD.append(strB, 2, 1);
    cout<< strD<< endl;
    
    int index = strD.find("hi", 2);
    cout<< index<< endl;
    
    strD.insert(2, strB);
    cout<< strD<< endl;
    
    return 0;
}

