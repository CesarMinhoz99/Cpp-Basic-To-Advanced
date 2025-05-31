#include <iostream>
using namespace std;

int main() {
    int a = 15;
    int b = 4;

    // Basic arithmetic operators
    cout << "a = " << a << ", b = " << b << endl;
    cout << "Addition (a + b): " << a + b << endl;
    cout << "Subtraction (a - b): " << a - b << endl;
    cout << "Multiplication (a * b): " << a * b << endl;
    cout << "Integer division (a / b): " << a / b << endl;
    cout << "Modulus (remainder of a % b): " << a % b << endl;

    // Using other integer types
    short int c = 7;
    long int d = 100000;

    cout << "\nValues: c = " << c << ", d = " << d << endl;
    cout << "Sum (c + d): " << c + d << endl;
    cout << "Multiplication (c * d): " << c * d << endl;

    return 0;
}
