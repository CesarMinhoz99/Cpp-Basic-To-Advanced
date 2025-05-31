#include <iostream>
using namespace std;

// Function that modifies value using pointer parameter
void changeValue(int* n) {
    *n = 100; // Change the value at the memory address pointed by n to 100
}

// Copy value using return (no pointers or references)
int copyValue(int source) {
    return source;
}

// Copy value using pointers
void copyValuePtr(int* source, int* destination) {
    *destination = *source;
}

int main() {
    // 1. int n = 10;
    int n = 10; // n is a normal integer variable storing value 10
    cout << "Value of n: " << n << endl; // Output: 10

    // 2. int* ptr; (uninitialized pointer)
    int* ptr; // ptr is a pointer to int, but it is NOT initialized
    // *ptr = 20; // This would cause a runtime error! ptr points to invalid memory

    // 3. Correct usage of pointer:
    int x = 5;      // Normal integer variable
    ptr = &x;       // ptr now points to x (stores the address of x)
    cout << "Value of x before change: " << x << endl; // Output: 5

    *ptr = 20;      // Change the value of x via the pointer ptr
    cout << "Value of x after change via pointer: " << x << endl; // Output: 20

    // 4. Using pointer in a function to modify variable
    changeValue(ptr); // Function call, will change x to 100
    cout << "Value of x after changeValue function: " << x << endl; // Output: 100

    // 5. Using copyValue (return method)
    int a = 10;
    int b = 0;
    b = copyValue(a);
    cout << "After copyValue (return): b = " << b << endl; // b = 10

    // 6. Using copyValuePtr (pointer method)
    int m = 30;
    int n2 = 0;
    copyValuePtr(&m, &n2);
    cout << "After copyValuePtr (pointers): n2 = " << n2 << endl; // n2 = 30

    return 0;
}
