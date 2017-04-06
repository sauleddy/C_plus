/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: eddy
 *
 * Created on March 10, 2017, 3:14 PM
 */

#include <cstdlib>
#include <map>
#include <iostream>

using namespace std;

void print(std::map<int, string>& map) {
    cout<< endl;
    std::map<int, string>::iterator iter = map.begin();
    for(iter; iter!=map.end(); ++iter) {
        cout<< iter->first<< ","<< iter->second<< ":";
    }
    cout<< endl;
}

void print(std::multimap<int, int>& map) {
    cout<< endl;
    std::multimap<int, int>::iterator iter = map.begin();
    for(iter; iter!=map.end(); ++iter) {
        cout<< iter->first<< ","<< iter->second<< ":";
    }
    cout<< endl;
}

typedef std::multimap<int, int>::iterator iterMMap;

/*
 * 
 */
int main(int argc, char** argv) {

    std::map<int, string> mapA;
    mapA.insert(std::pair<int, string>(10, "Tom"));
    mapA.insert(std::pair<int, string>(5, "Eddie"));
    print(mapA);
    
    cout<< mapA[10]<< endl;
    
    std::multimap<int, int> mmapA;
    mmapA.insert(std::pair<int, int>(10, 5));
    mmapA.insert(std::pair<int, int>(10, 10));
    mmapA.insert(std::pair<int, int>(10, 1));
    mmapA.insert(std::pair<int, int>(5, 1));
    print(mmapA);
    std::pair< iterMMap, iterMMap> pairA = mmapA.equal_range(10);
    iterMMap iterMMapA = pairA.first;
    for(iterMMapA; iterMMapA!=pairA.second; ++iterMMapA) {
        cout<< iterMMapA->first<< ","<< iterMMapA->second<< ":";
    }
    cout<< endl;
    
    return 0;
}

