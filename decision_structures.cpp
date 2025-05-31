/*
    ---------------------------------------------------------
    DECISION STRUCTURES IN C++: IF, ELSE, AND SWITCH
    ---------------------------------------------------------

    Decision structures allow the program to choose different 
    paths of execution based on conditions.

    - if: Executes a block of code if a condition is true.
    - else if: Checks another condition if the previous if was false.
    - else: Executes a block if all previous conditions were false.
    - switch: Selects one code block to execute among many based on 
      the value of a variable.

    These structures help make programs dynamic and responsive 
    to different inputs or situations.
*/

#include <iostream>
using namespace std;

int main() {
    int number = 7;

    // if-else structure
    /*
        Checks if 'number' is positive, negative, or zero.

        if (number > 0)
            Executes this block only if 'number' is greater than zero.

        else if (number < 0)
            Executes this block only if the first condition is false and
            'number' is less than zero.

        else
            Executes this block if neither of the above conditions were true
            (i.e., number is zero).
    */
    if (number > 0) {
        cout << number << " is positive." << endl;
    } else if (number < 0) {
        cout << number << " is negative." << endl;
    } else {
        cout << number << " is zero." << endl;
    }

    // switch structure
    /*
        The switch statement evaluates the variable 'grade'.

        Each 'case' compares 'grade' to a specific value:

        - If grade == 'A', print "Excellent!" and exit switch.
        - If grade == 'B' or 'C', print "Well done!" and exit switch.
        - If grade == 'D', print "You passed." and exit switch.
        - If grade == 'F', print "Better try again." and exit switch.
        - If none matches, the 'default' block runs, printing "Invalid grade."
        
        'break' statements prevent execution from falling through 
        to the next case.
    */
    char grade = 'B';

    switch (grade) {
        case 'A':
            cout << "Excellent!" << endl;
            break;
        case 'B':
        case 'C':
            cout << "Well done!" << endl;
            break;
        case 'D':
            cout << "You passed." << endl;
            break;
        case 'F':
            cout << "Better try again." << endl;
            break;
        default:
            cout << "Invalid grade." << endl;
    }

    return 0;
}
