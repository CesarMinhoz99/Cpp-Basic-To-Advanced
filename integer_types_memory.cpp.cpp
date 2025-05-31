/*
    ---------------------------------------------------------
    INTEGER TYPES IN C++ AND THE MEMORY THEY OCCUPY
    ---------------------------------------------------------

    In C++, integer types are used to store whole numbers 
    (positive or negative, without decimal points). Each type 
    occupies a specific amount of memory, measured in bits (or bytes).

    - Bit: The smallest unit of information, which can be 0 or 1.
    - Byte: A group of 8 bits. One byte can represent values from 0 to 255 
      or a single ASCII character.

    Choosing the correct type matters for two reasons:

    1. Memory efficiency:
       Using a smaller type (like short) reduces memory usage 
       in programs that store many values.

    2. Preventing errors:
       Each type has minimum and maximum limits. Using an incorrect 
       type can cause overflow (value wrapping).

    This program shows the main integer types, their sizes in bits, 
    and their value limits.
*/

#include <iostream>
#include <limits>

using namespace std;

int main() {
    // Integer types and their values
    int number = 10;
    short int smallNumber = 100;
    long int largeNumber = 100000;
    long long int veryLargeNumber = 1000000000;
    unsigned int positiveNumber = 200;

    // Displaying values and sizes
    /*
        The sizeof(x) operator in C++ returns how many bytes 
        the variable (or type) x occupies in memory. To get 
        the number of bits, multiply sizeof(x) by 8 because:

        - 1 byte = 8 bits
        - sizeof(x)   → number of bytes occupied
        - sizeof(x)*8 → number of bits (bytes × 8)
    */
    cout << "int (32 bits): " << number 
         << " | size: " << sizeof(number) * 8 << " bits" << endl;
    cout << "short (16 bits): " << smallNumber 
         << " | size: " << sizeof(smallNumber) * 8 << " bits" << endl;
    cout << "long (system-dependent): " << largeNumber 
         << " | size: " << sizeof(largeNumber) * 8 << " bits" << endl;
    cout << "long long (64 bits): " << veryLargeNumber 
         << " | size: " << sizeof(veryLargeNumber) * 8 << " bits" << endl;
    cout << "unsigned int (32 bits): " << positiveNumber 
         << " | size: " << sizeof(positiveNumber) * 8 << " bits" << endl;

    // Displaying value limits
    cout << "\nLimits of integer types:" << endl;
    cout << "int: from " << numeric_limits<int>::min() 
         << " to " << numeric_limits<int>::max() << endl;
    cout << "short: from " << numeric_limits<short>::min() 
         << " to " << numeric_limits<short>::max() << endl;
    cout << "long: from " << numeric_limits<long>::min() 
         << " to " << numeric_limits<long>::max() << endl;
    cout << "long long: from " << numeric_limits<long long>::min() 
         << " to " << numeric_limits<long long>::max() << endl;
    cout << "unsigned int: from 0 to " 
         << numeric_limits<unsigned int>::max() << endl;

    return 0;
}
