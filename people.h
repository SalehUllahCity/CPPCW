#pragma once
#ifndef GUARD_people_h
#define GUARD_people_h

#include <ostream>
#include <vector>
#include <string>
#include <map>
#include <iostream>
#include <iomanip>

// Never put using declarations in header files – that would force names on clients. e.g. using... hence use std::
// Write code for the signatures of the functions in the stats.cpp file here


// record of person's______
class People
{
    std::string name; // person name
    std::map<std::string, float> purchases; // product ot price********
    float sum = 0; // total sum to be updated per person


public: // may change to private - data members as private
    // initiate person name and sum
    People(const std::string name) : name(name) {}

    // Add price to person sum
    // Add price to person sum
    void addPurchase(const std::string &item, float price)
    {
        purchases[item] += price; // add the price of the item value
        sum += price;
    }

    void printStatement() const
    {
        std::cout << name << std::endl; // print out the person name
        for (const auto &item : purchases) // for item in purchase
        {
            std::cout << item.first << " " << item.second << std::endl; // print out the key and value i.e. product and price
        }
        std::cout << "Total: " << sum << std::endl;
    }

};

bool isValidNumber(const std::string &s);





#endif
