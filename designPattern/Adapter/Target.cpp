/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Target.cpp
 * Author: eddy
 * 
 * Created on March 20, 2017, 9:07 AM
 */

#include <iostream>
#include "Target.h"

using namespace std;

Target::Target() {
    cout<< "::Target()"<< endl;
}

Target::Target(const Target& orig) {
    cout<< "::Target(const Target& orig)"<< endl;
}

Target::~Target() {
    cout<< "::~Target()"<< endl;
}

