#include "people.h" // done before other system headers to ensure that our header files
// don't assume anything has been included
#include <iostream>
#include <fstream> // allows us to read from a file
#include <iomanip>
#include <algorithm>
#include <map>
#include <string>
/*
    Saleh Ullah C++ CW
    Checklist and notes at the bottom in comments
 */
using namespace std;
using vec_size = string::size_type;

// call the functions from stats.h header file that are made in the stats.cpp + read_vector etc.

int main()
{
    // read the file
    ifstream peopleFile("people.txt");

    // domain error for quantitative and cerr for qualitative
    // std::cout << std::endl inserts a new line and flushes the stream(output buffer), whereas std::cout << “\n” just inserts a new line.

    if (!peopleFile.is_open())
    {
        cerr << "Error: Could not open people.txt file" << endl;
        return 1;
    }

    // getline() is an in-built function defined in the <string. h> header file that allows accepting and reading single and multiple line strings from the input stream.

    vector<People> people;;
    string personName;
    while (getline(peopleFile, personName))
    {
        if (!personName.empty())
        {
            people.emplace_back(personName); // If the vector type is class or struct, emplace_back is more efficient than push_back.
        }
    }

    if (people.empty())
    {
        cerr << "Error: people.txt file is empty" << endl;
    }

    // reading payment.txt file
    ifstream paymentsFile("payments.txt");
    if (!paymentsFile.is_open())
    {
        cerr << "Error: Could not open payments.txt file" << endl;
        return 1;
    }



    // close both files to ensure no further edits are made etc.

    return 0;
}




// Checklist and Notes

// Your program should generate a statement for each person listed in people.txt and
// print it to the standard output

// For each statement, the first line should display the person's name, the following
// lines should list the object they purchased along with the amount paid for each object
// (one object per line).
// The last line should print "Total : value", where value is the sum of all payments.txt
// Example standard output is on the cwk file
// It  should print:

// from me: use the type vec_size
// remove any useless header files
// sort(v.begin(),v.end())
// vector<double>::size_type n = v.size(); this is causes the size of vector v to return as a double and not as an
// using vec_size = vector<double>::size_type
// vec_size n = v.size();
// auto automatically chooses the valid type
// unsigned int as that can cause logic issues later
/*

Bob
eggs 2.5
pen 3.5
Total: 6
Alice
apple 1.5
eggs 2
Total: 3.5

*/

// the program should validate the structure of the input files and display an appropriate
// error message if any issues are found. e.g. if people.txt.txt is empty - error message
// the people.txt.txt file is empty .

// similar if there is a missing item in a line or

// the payment is not a valid integer or floating point number, therefore do not need to validate

// follow this format precisely with no additional output, this program will be ran
// through automated tests using her own payments.txt and people.txt txt files with the same
// format an examples as above but may involve different data.

// Your solution should make appropriate use of one class and at least one container


// 70% of the marks will be for correctness and efficiency - no unnecessary copying
// 10% will be for managing error messages
// 20% for clean programming style: consistent layout, sensible identifier names,
// useful comments, avoidance of superfluous variables and data members, general clarity
// of code