/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   AbtractClass.cpp
 * Author: eddy
 * 
 * Created on March 27, 2017, 10:02 AM
 */

#include "AbtractClass.h"

AbtractClass::AbtractClass() {
}

AbtractClass::~AbtractClass() {
}

void AbtractClass::DownloadFile(string srcFile, string destFile) {
    BeginDownload(srcFile, destFile);
    DoDownloadFile(srcFile, destFile);
    EndDownload(srcFile, destFile);
}

