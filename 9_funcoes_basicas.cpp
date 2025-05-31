#include <iostream> // Standard library for input and output
using namespace std;

/*
  Note: The return type of a function must match the declared type.
  For example, if a function is declared as "char myFunction()", it cannot return a value of type "double".
  The compiler will generate an error if there is a type mismatch.
*/

// Function without return (void)
void greet() {
    cout << "Hello, welcome to the C++ functions program!" << endl;
}

// Function with return type (int)
int add(int a, int b) {
    return a + b; // Returns the sum of two numbers
}

// Function with return type (string)
string finalMessage() {
    return "Program finished successfully.";
}

int main() {
    // Calling the function without return
    greet(); // Executes the code inside the function

    // Declaring variables
    int x = 10;
    int y = 20;

    // Calling function with return and storing the result
    int result = add(x, y);
    cout << "The sum of " << x << " and " << y << " is: " << result << endl;

    // Calling the function that returns a string
    string message = finalMessage();
    cout << message << endl;

    return 0; // Indicates the program ended correctly
}
