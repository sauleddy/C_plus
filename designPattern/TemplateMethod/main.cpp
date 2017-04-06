/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 27, 2017, 10:01 AM
 */

#include <cstdlib>

#include "ConcreteClass.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    AbtractClass* p_Downloader = new ConcreteClass();
    p_Downloader->DownloadFile("srcPath", "targetPath");
    delete p_Downloader;
    
    return 0;
}

