#include <iostream>
using namespace std;

/*
  --------------------------------------------------------------------
  Brief explanation of how arrays work in C++:
  
  - An array is a collection of elements of the same type,
    stored in contiguous memory.
  - Each element is accessed by an index, starting at 0.
  - In a 1D array, valid indices range from 0 to size-1.
  - Multidimensional arrays (2D, 3D, etc.) are effectively arrays of arrays:
      • 2D: a matrix with rows and columns
      • 3D: “blocks” containing 2D matrices
  - The size of an array must be known at compile time.
  - Example declarations:
      int example1D[5];         // 1D array of 5 integers
      int matrix2D[3][4];       // 2D array with 3 rows and 4 columns
      int cube3D[2][3][2];      // 3D array with dimensions 2×3×2
  --------------------------------------------------------------------
*/

int main() {
    // 1D Array (one-dimensional array)
    int array1D[5] = {1, 2, 3, 4, 4};
    cout << "1D Array:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "array1D[" << i << "] = " << array1D[i] << endl;
    }
    cout << endl;

    // 2D Array (3x4 matrix)
    int matrix2D[3][4] = {
        { 1,  2,  3,  4},
        { 5,  6,  7,  8},
        { 9, 10, 11, 12}
    };
    cout << "2D Array:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "matrix2D[" << i << "][" << j << "] = " 
                 << matrix2D[i][j] << "   ";
        }
        cout << endl;
    }
    cout << endl;

    // 3D Array (2x3x2 block)
    int array3D[2][3][2] = {
        {   // first block (index 0)
            { 1,  2},
            { 3,  4},
            { 5,  6}
        },
        {   // second block (index 1)
            { 7,   8},
            { 9,  10},
            {11,  12}
        }
    };
    cout << "3D Array:" << endl;
    for (int i = 0; i < 2; i++) {
        cout << "Block " << i << ":" << endl;
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 2; k++) {
                cout << "array3D[" << i << "][" << j << "][" << k << "] = " 
                     << array3D[i][j][k] << "   ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
