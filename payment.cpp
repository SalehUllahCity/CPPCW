#include "payment.h"

#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

//  code body for all functions here

bool isValidNumber(const string &s) {
    istringstream iss(s);
    float d;
    return (iss >> d) && iss.eof();
}

void readPaymentsFile(const string &fileName)
{
    // reading payment.txt file
    ifstream paymentsFile("payments.txt");
    if (!paymentsFile.is_open())
    {
        cerr << "Error: Could not open payments.txt file." << endl;

    }

    string line;
    while (getline(paymentsFile, line)) {
        istringstream iss(line);
        string person, item, priceStr;
        // double price;


        // for each line of payments.txt
        if(!(iss >> person >> item >> priceStr)) {
            cerr << "Error: The line is missing an item or invalid price." << endl;

        }

        // validate that the price is a valid number

        if (!isValidNumber(priceStr)) {
            cerr << "Error: Invalid price value.";

        }

        // price = stod(priceStr); // Parses str interpreting its content as a floating-point number, which is returned
        // as a value of type double.
    }
}

void readPeopleFile(const string &fileName)
{

}

void produceStatements() {

}