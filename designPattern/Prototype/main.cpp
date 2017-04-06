/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 19, 2017, 10:32 AM
 */

#include <cstdlib>
#include "PrototypeConcrete.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    PrototypeConcrete* protoA = new PrototypeConcrete();
    
    PrototypeConcrete* protoB = (PrototypeConcrete*)protoA->clone();
   
    delete protoB;
    delete protoA;
    
    return 0;
}

