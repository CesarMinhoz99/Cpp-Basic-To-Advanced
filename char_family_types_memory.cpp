/*
    ---------------------------------------------------------
    CHARACTER TYPES IN C++ AND THE MEMORY THEY OCCUPY
    ---------------------------------------------------------

    C++ defines several character‐based types:
    - char          : typically 8 bits, used for ASCII or small character sets
    - signed char   : explicitly signed 8-bit integer
    - unsigned char : explicitly unsigned 8-bit integer
    - wchar_t       : wide character (size depends on platform, often 16 or 32 bits)

    Choose the appropriate char type based on signedness or wide-character needs.
*/

#include <iostream>
#include <limits>

using namespace std;

int main() {
    // Example variables for each character subtype
    char         sampleChar        = 'A';
    signed char  sampleSignedChar  = -65;   // as integer code
    unsigned char sampleUnsignedChar= 200;  // as integer code
    wchar_t      sampleWChar       = L'Ω';  // wide‐character literal

    /*
        sizeof(x) returns size in bytes.
        Multiply by 8 to convert to bits.
    */
    cout << "char ("
         << sizeof(sampleChar) * 8 << " bits): '"
         << sampleChar << "' | size: "
         << sizeof(sampleChar) * 8 << " bits" << endl;

    cout << "signed char ("
         << sizeof(sampleSignedChar) * 8 << " bits): "
         << static_cast<int>(sampleSignedChar) << " | size: "
         << sizeof(sampleSignedChar) * 8 << " bits" << endl;

    cout << "unsigned char ("
         << sizeof(sampleUnsignedChar) * 8 << " bits): "
         << static_cast<int>(sampleUnsignedChar) << " | size: "
         << sizeof(sampleUnsignedChar) * 8 << " bits" << endl;

    cout << "wchar_t ("
         << sizeof(sampleWChar) * 8 << " bits): L'"
         << static_cast<char>(sampleWChar) << "' | size: "
         << sizeof(sampleWChar) * 8 << " bits" << endl;

    // Display representable ranges (as integer codes) where applicable
    cout << "\nRanges (as integer codes):" << endl;
    cout << "char         : "
         << static_cast<int>(numeric_limits<char>::min()) 
         << " to " << static_cast<int>(numeric_limits<char>::max()) << endl;

    cout << "signed char  : "
         << static_cast<int>(numeric_limits<signed char>::min()) 
         << " to " << static_cast<int>(numeric_limits<signed char>::max()) << endl;

    cout << "unsigned char: "
         << static_cast<int>(numeric_limits<unsigned char>::min()) 
         << " to " << static_cast<int>(numeric_limits<unsigned char>::max()) << endl;

    cout << "wchar_t      : "
         << static_cast<long long>(numeric_limits<wchar_t>::min()) 
         << " to " << static_cast<long long>(numeric_limits<wchar_t>::max()) << endl;

    return 0;
}
