/*
    ---------------------------------------------------------
    FLOATING-POINT TYPES IN C++ AND THE MEMORY THEY OCCUPY
    ---------------------------------------------------------

    C++ provides three main floating-point types:
    - float       : single-precision (32 bits)
    - double      : double-precision (64 bits)
    - long double : extended precision (usually 80 or 128 bits)

    Use float/double/long double depending on how much precision
    and range your calculations require.
*/

#include <iostream>
#include <limits>

using namespace std;

int main() {
    // Example variables for each floating-point subtype
    float       sampleFloat      = 3.14159f;
    double      sampleDouble     = 2.718281828;
    long double sampleLongDouble = 1.618033988749894L;

    /*
        sizeof(x) returns the size in bytes.
        Multiply by 8 to convert to bits:
        - 1 byte = 8 bits
        - sizeof(x)   → number of bytes
        - sizeof(x)*8 → number of bits
    */
    cout << "float ("
         << sizeof(sampleFloat) * 8 << " bits): "
         << sampleFloat
         << " | size: " << sizeof(sampleFloat) * 8 << " bits"
         << endl;

    cout << "double ("
         << sizeof(sampleDouble) * 8 << " bits): "
         << sampleDouble
         << " | size: " << sizeof(sampleDouble) * 8 << " bits"
         << endl;

    cout << "long double ("
         << sizeof(sampleLongDouble) * 8 << " bits): "
         << sampleLongDouble
         << " | size: " << sizeof(sampleLongDouble) * 8 << " bits"
         << endl;

    // Display approximate representable ranges
    cout << "\nRanges (approximate):" << endl;
    cout << "float       : "
         << numeric_limits<float>::lowest()
         << " to " << numeric_limits<float>::max()
         << endl;

    cout << "double      : "
         << numeric_limits<double>::lowest()
         << " to " << numeric_limits<double>::max()
         << endl;

    cout << "long double : "
         << numeric_limits<long double>::lowest()
         << " to " << numeric_limits<long double>::max()
         << endl;

    return 0;
}
