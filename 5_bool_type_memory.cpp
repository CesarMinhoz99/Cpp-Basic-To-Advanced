/*
    ---------------------------------------------------------
    BOOL TYPE IN C++ AND THE MEMORY IT OCCUPIES
    ---------------------------------------------------------

    In C++, **bool** stores a boolean value: `true` or `false`. 
    Although it logically only needs 1 bit, implementations typically 
    allocate 1 byte (8 bits) for it.

    Use `bool` whenever you need a variable to hold only two states.
*/

#include <iostream>
#include <limits>

using namespace std;

int main() {
    // Example bool variable
    bool sampleBool = true;

    /*
        sizeof(sampleBool) returns size in bytes.
        Multiply by 8 to convert to bits.
    */
    cout << "bool ("
         << sizeof(sampleBool) * 8 << " bits): "
         << boolalpha << sampleBool 
         << " | size: " << sizeof(sampleBool) * 8 << " bits" << endl;

    // Display possible values explicitly
    cout << "\nPossible bool values: true or false" << endl;

    return 0;
}
