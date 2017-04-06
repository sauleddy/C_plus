/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: eddy
 * 
 * Created on March 17, 2017, 4:36 PM
 */

#include "Solution.h"

const string dict = "abcdefghijklmnopqrstuvwxyz1234567890";
const string prefix = "http://tinyurl.com/";
    
typedef std::unordered_map<string, string>::iterator iterUMap;

Solution::Solution() {
    count = 0;
}

Solution::Solution(const Solution& orig) {
}

Solution::~Solution() {
}

// Encodes a URL to a shortened URL.
string Solution::encode(string longUrl) {
    iterUMap iterFind = mapLongToShort.find(longUrl);
    if(iterFind != mapLongToShort.end()) {
        return iterFind->second;
    }
    int dictLen = dict.length();
    string strRet = "";
    
    int thisCount = count++;
    while(thisCount > 0) {
        int thisReminder = thisCount % dictLen;
        strRet = dict[thisReminder] + strRet;
        thisCount /= dictLen;
    }
    
    while(strRet.length() < 6) {
        strRet = "0" + strRet;
    }
    
    strRet = prefix + strRet;
    
    mapLongToShort[longUrl] = strRet;
    mapIdToLong[count-1] = longUrl;

    return strRet;
}

// Decodes a shortened URL to its original URL.
string Solution::decode(string shortUrl) {
    int dictLen = dict.length();
    shortUrl.replace(0, dictLen, "");
    int id = 0;
    for(int i=0; i<shortUrl.length(); ++i) {
        int thisIdx = shortUrl.length() - i - 1;
        id += dictLen * i + dict.find(shortUrl[thisIdx]);
    }
    return mapIdToLong[id];
}
