/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Logger.cpp
 * Author: eddy
 * 
 * Created on March 17, 2017, 10:10 AM
 */

#include <iostream>
#include <mutex>
#include <thread>
#include "Logger.h"
#include "raiiLock.h"

using namespace std;

Logger* Logger::p_Instance = nullptr;

Logger::Logger() {
}

Logger::Logger(const Logger& orig) {
}

Logger::~Logger() {
}

Logger* Logger::getInstance(void) {
    if(p_Instance == nullptr) {
        static std::mutex mtx;
        raiiLock m_lock(&mtx);
        //std::this_thread::sleep_for (std::chrono::seconds(5));
        if(p_Instance == nullptr) {
            p_Instance = new Logger();
        }
    }
    return p_Instance;
}

Logger* Logger::freeInstance(void) {
    if(p_Instance != nullptr) {
        delete p_Instance;
        p_Instance = nullptr;
    }
}

void Logger::show(void) {
    cout<< "Logger::show()"<< endl;
}
    

