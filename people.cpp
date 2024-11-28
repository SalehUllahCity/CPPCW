#include "people.h"
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <iostream>

using namespace std;

//  code body for all functions here

bool isValidNumber(const string &s) {
    istringstream iss(s);
    float d;
    return (iss >> d) && iss.eof();
} // come back