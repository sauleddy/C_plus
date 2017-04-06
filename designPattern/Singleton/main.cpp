/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 17, 2017, 10:09 AM
 */

#include <cstdlib>
#include <thread>
#include <iostream>
#include "Logger.h"

using namespace std;

void showLog() 
{
    Logger::getInstance()->show();
}

/*
 * 
 */
int main(int argc, char** argv) {

    std::thread thread1(showLog);
    std::thread thread2(showLog);
    
    thread1.join();
    thread2.join();
    
    
    return 0;
}

