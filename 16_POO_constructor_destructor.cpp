#include <iostream>
using namespace std;

class MyClass {
private:
    int value;

public:
    // Constructor: called when an object is created
    MyClass(int v) {
        value = v;
        cout << "Constructor called! Value set to " << value << endl;
    }

    // Destructor: called when an object is destroyed
    ~MyClass() {
        cout << "Destructor called! Cleaning up object with value " << value << endl;
    }

    // Method to display the value
    void display() {
        cout << "Value is: " << value << endl;
    }
};

int main() {
    MyClass obj(10);  // Constructor called here
    obj.display();

    // Destructor will be called automatically when 'obj' goes out of scope (end of main)
    return 0;
}
