#pragma once
#ifndef GUARD_payment_h
#define GUARD_payment_h

#include <ostream>
#include <vector>
#include <string>
#include <map>
#include <iostream>


// Never put using declarations in header files – that would force names on clients. e.g. using... hence use std::
// Write code for the signatures of the functions in the stats.cpp file here


// record of person's______
class Consumer {
// may change to private - data members as private

public:
    Consumer(const std::string& name) : name(name) {}

    std::string name; // consumer's name
    std::map<std::string, double> purchases; // item string -> sum spent on the item
    double sum = 0; // total sum to be updated per consumer
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

    void readPaymentFile(const std::string &fileName);

    void readPeopleFile(const std::string &fileName);

    void produceStatements() const;

};

bool isValidNumber(const std::string &s);





#endif
