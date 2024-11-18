#include <iostream>
#include <fstream> // allows us to read from a file
#include <iomanip>
#include <algorithm>
/*
    Saleh Ullah C++ CW
    Checklist and notes at the bottom in comments
 */
using namespace std;

int main()
{
    int count = 0;
    // read from the file
    ifstream in("people.txt"); // declare a variable in of type istream, with the file name as the parameter
    // ifstream is an input file stream reads data in from a data file
    // ofstream is an output file stream out to a data file
    string str;
    while (in >> str)
    {
        cout << str << endl;
    }
    //if (in.is_open()) // ensures that the file is open before running the following code
    //{
    //}

    //in.close(); // ensure that the file is closed so that no further changes can be made accidentally

    /*
    string s;
    while (cin >> s)
    {
        cout << s << endl;
    }




    // reading from the input stream
    cout << "Please enter a series of numbers\n";
    count = 0;
    while (cin >> x)
    {
        ++count;
    }
    cout << count << endl;

    // to get the current precision use cout.precision()
    int prec = cout.precision();
    cout << "count precision: " << prec << endl;
    */


    return 0;
}




// Checklist and Notes

// Your program should generate a statement for each person listed in people.txt and
// print it to the standard output

// For each statement, the first line should display the person's name, the following
// lines should list the object they purchased along with the amount paid for each object
// (one object per line).
// The last line should print "Total : value", where value is the sum of all payments
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
// error message if any issues are found. e.g. if people.txt is empty - error message
// the people.txt file is empty .

// similar if there is a missing item in a line or

// the payment is not a valid integer or floating point number, therefore do not need to validate

// follow this format precisely with no additional output, this program will be ran
// through automated tests using her own payments and people txt files with the same
// format an examples as above but may involve different data.

// Your solution should make appropriate use of one class and at least one container


// 70% of the marks will be for correctness and efficiency - no unnecessary copying
// 10% will be for managing error messages
// 20% for clean programming style: consistent layout, sensible identifier names,
// useful comments, avoidance of superfluous variables and data members, general clarity
// of code