#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("payments.txt");

    // Your program should generate a statement for each person listed in people.txt and
    // print it to the standard output

    // For each statement, the first line should display the person's name, the following
    // lines should list the object they purchased along with the amount paid for each object
    // (one object per line).

    // The last line should print "Total : value", where value is the sum of all payments
    // Example standard output is on the cwk file

    // program should validate the structure of the input files and display an appropriate
    // error message iif any issues are found. e.g. if people.txt is empty - error message
    // the people.txt file is empty . similar if there is a missing item in a line or the
    // payment is not a valid integer or floating point number, therefore do not need to validate

    // follow this format precisely with no additional output, this program will be ran
    // through automated tests using her own payments and people txt files with the same
    // format an examples as above but may involve different data.
    // Your solution should make appropriate use of one class and at least one container






    return 0;
}


// 70% of the marks will be for correctness and efficiency - no unnecessary copying
// 10% will be for managing error messages
// 20% for clean programming style: consistent layout, sensible identifier names,
// useful comments, avoidance of superfluous variables and data members, general clarity
// of code