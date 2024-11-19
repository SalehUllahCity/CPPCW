#include "stats.h" // done before other system headers to ensure that our header files
// don't assume anything has been included

#include <iostream>
#include <fstream> // allows us to read from a file
#include <iomanip>
#include <algorithm>
#include <map>
/*
    Saleh Ullah C++ CW
    Checklist and notes at the bottom in comments
 */
using namespace std;

// call the functions from stats.h header file that are made in the stats.cpp + read_vector etc.

int main()
{
    // read from the file
    // ifstream in("people.txt.txt"); // declare a variable in of type istream, with the file name as the parameter
    // ifstream is an input file stream reads data in from a data file
    // ofstream is an output file stream out to a data file
    /*
    // Create a text string, which is used to output the text file
    string myText;

    // Read from the text file
    ifstream MyReadFile("people.txt");

    // Use a while loop together with the getline() function to read the file line by line
    if (MyReadFile.is_open()) // ensures that the file is open before running the following code
    {
        while (getline (MyReadFile, myText)) {
            // Output the text from the file
            cout << myText << endl;
        }
    }

    // Close the file
    MyReadFile.close(); // ensures that the file is closed so that no further changes can be made accidentally
    // also this saves memory
    */

    // count of occurrences of each word in the input
    // count of occurrences of each word in the input

    cout << "Please enter a series of numbers\n";
    map<string, int> count;
    string s;
    while (cin >> s)
    {
        ++count[s];
    }


    // write each word and its number of occurrences
    // for (const auto &p : count) {
       //  cout << p.first << '\t' << p.second << '\n';
        // essentially p<const string, int>
        // first, a const of type string - key
        // second - type of int - the value
        // avoid using & to not copy the pair hence use const
    // }











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