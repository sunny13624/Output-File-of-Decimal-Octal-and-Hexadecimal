// Author: Riggie Lin
// Date: 10/13/2020
// This program displays a table of decimal, octal and hexadecimal numbers from 1 to 256 in an output file.

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
    ofstream output;// Output reference
    string filename = "Conversions.txt"; // Defines which file to be used

    if (!output) {
        cout << "Cannot open!" << filename << endl; // user output
        return 1;
    }

    output.open(filename); 
    output << "Decimal" << setw(8) << "Octal" << setw(12) << "Hexadecimal" << endl; // user output 

    int n = 1;

    cout << "The filename is " << filename << endl; // user output for the filename

    while (n <= 256) {
   
        output << setw(7) << dec << showbase << n << setw(8) << oct << showbase << n << setw(12) << hex << showbase << n << endl; // user output
        n++;
    }

    output.close(); // Close the output file
    return 0; // Exit the program
}
