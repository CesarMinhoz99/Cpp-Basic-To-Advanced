/*
    ---------------------------------------------------------
    LOOP STRUCTURES IN C++: WHILE, FOR, AND DO-WHILE
    ---------------------------------------------------------

    Loops are used to repeat a block of code multiple times 
    until a condition is met.

    - while: Repeats the code while the condition is true. 
      Checks condition before executing the loop body.

    - for: Used for counting loops; executes code a fixed number 
      of times, with initialization, condition check, and update.

    - do-while: Similar to while, but checks the condition 
      after executing the loop body, so the body runs at least once.
*/

#include <iostream>
using namespace std;

int main() {
    int count = 1;

    // while loop
    /*
        Prints numbers from 1 to 5.
        Checks condition (count <= 5) before each iteration.
    */
    cout << "while loop:" << endl;
    while (count <= 5) {
        cout << count << " ";
        count++;
    }
    cout << endl;

    // for loop
    /*
        Also prints numbers from 1 to 5.
        Has three parts:
        - initialization (int i = 1)
        - condition (i <= 5)
        - update (i++)
    */
    cout << "for loop:" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;

    // do-while loop
    /*
        Prints numbers from 1 to 5.
        Executes the loop body first, then checks condition.
        Ensures the body runs at least once.
    */
    cout << "do-while loop:" << endl;
    int j = 1;
    do {
        cout << j << " ";
        j++;
    } while (j <= 5);
    cout << endl;

    return 0;
}
