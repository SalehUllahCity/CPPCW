#pragma once
#ifndef GUARD_people_h
#define GUARD_people_h

#include <ostream>
#include <vector>
#include <string>
#include <map>

// Never put using declarations in header files – that would force names on clients.
// Write code for the signatures of the functions in the stats.cpp file here


// record of person's______
class people
{
    std::string name; // person name
    float price; // produt price
    float sum; // person's total sum
    std::map<people, float> priceMap; // Map person to sum
};










#endif
