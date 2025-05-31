#include <iostream> // Import the input/output stream library

// Function to print each element of an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) { // Loop from 0 to size - 1
        std::cout << "Element " << i << ": " << arr[i] << std::endl; // Print current element
    }
}

// Function to calculate and return the sum of array elements
int sumArray(int arr[], int size) {
    int sum = 0; // Initialize sum to 0
    for (int i = 0; i < size; ++i) { // Loop through each element
        sum += arr[i]; // Add current element to sum
    }
    return sum; // Return the final sum
}

int main() {
    int numbers[5] = {10, 20, 30, 40, 50}; // Declare and initialize an array with 5 integers

    int size = sizeof(numbers) / sizeof(numbers[0]); // Calculate array size (number of elements)

    std::cout << "Printing array elements:" << std::endl;
    printArray(numbers, size); // Call function to print array elements

    int total = sumArray(numbers, size); // Call function to sum elements and store result
    std::cout << "Sum of array elements: " << total << std::endl; // Print the sum

    // Accessing valid indices: 0 to 4
    std::cout << "\nAccessing each element manually:\n";
    std::cout << "numbers[0] = " << numbers[0] << std::endl;
    std::cout << "numbers[1] = " << numbers[1] << std::endl;
    std::cout << "numbers[2] = " << numbers[2] << std::endl;
    std::cout << "numbers[3] = " << numbers[3] << std::endl;
    std::cout << "numbers[4] = " << numbers[4] << std::endl;

    // ⚠️ Warning: numbers[5] is out of bounds!
    // This access is invalid because the array has only 5 elements (index 0 to 4).
    // Uncommenting the line below may print garbage or cause a crash.
    // std::cout << "numbers[5] = " << numbers[5] << std::endl;
    std::cout << "numbers[5] = " << numbers[5] << std::endl;

    return 0; // End of program
}

/*
---------------------------------------------
✅ Safe array access example (commented code):

// Function to safely access an array element
void safeAccess(int arr[], int size, int index) {
    // Check if index is valid
    if (index >= 0 && index < size) {
        std::cout << "Value at index " << index << ": " << arr[index] << std::endl;
    } else {
        std::cout << "Error: index " << index << " is out of bounds!" << std::endl;
    }
}

Use like this in main():

safeAccess(numbers, size, 2);  // OK
safeAccess(numbers, size, 5);  // Error: out of bounds
safeAccess(numbers, size, -1); // Error: out of bounds

This prevents invalid access and keeps your program safe!
---------------------------------------------
*/
