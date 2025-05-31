/*
    ---------------------------------------------------------
    INPUT (cin) AND OUTPUT (cout) IN C++
    ---------------------------------------------------------

    In C++, the standard library provides:
    - cin  : for reading input from the user (standard input)
    - cout : for writing output to the console (standard output)

    Key points:
    1. cin extracts formatted data (whitespace-delimited) into variables.
    2. cout inserts data into the output stream.
    3. Use the insertion operator (<<) with cout.
    4. Use the extraction operator (>>) with cin.
    5. Always prompt the user before reading input.

    This program demonstrates:
    - Prompting the user for various variable types
    - Reading values using cin
    - Displaying values using cout
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    // Example variables for different types
    int     age;
    float   salary;
    char    grade;
    string  name;
    bool    likesProgramming;

    // 1) Read an integer
    cout << "Enter your age: ";
    cin >> age; 
    // cin skips whitespace and reads a valid integer into 'age'

    // 2) Read a floating-point number
    cout << "Enter your monthly salary: ";
    cin >> salary; 
    // Reads a float (e.g., 3500.50)

    // 3) Read a single character
    cout << "Enter your grade (A-F): ";
    cin >> grade; 
    // Reads one non-whitespace character into 'grade'

    // 4) Read a string (single word)
    cout << "Enter your first name: ";
    cin >> name; 
    // Reads a word (up to first space) into 'name'

    // 5) Read a boolean (1 or 0)
    cout << "Do you like programming? (1 for yes, 0 for no): ";
    cin >> likesProgramming; 
    // Reads an integer and converts 0→false, nonzero→true

    // Display the values back to the user
    cout << "\n--- You Entered ---" << endl;
    cout << "Age               : " << age << endl;
    cout << "Monthly Salary    : " << salary << endl;
    cout << "Grade             : " << grade << endl;
    cout << "First Name        : " << name << endl;
    cout << "Likes Programming : " 
         << boolalpha << likesProgramming << endl;
    // boolalpha makes true/false print as words instead of 1/0

    return 0;
}
