#include <iostream>
using namespace std;

/////////////////////
// Example using struct
/////////////////////

/*
  Use 'struct' when you just want to group simple data
  and all members can be public by default.
  Ideal for data storage without behavior (no methods).
*/
struct PersonStruct {
    string name;   // public by default
    int age;
    float height;
};

/////////////////////
// Example using class
/////////////////////

/*
  Use 'class' when you need encapsulation,
  behavior (methods), and private data.
  Good for Object-Oriented Programming (OOP).
*/
class PersonClass {
private:
    string name;
    int age;
    float height;

public:
    // Constructor
    PersonClass(string n, int a, float h) {
        name = n;
        age = a;
        height = h;
    }

    // Method to display person info
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Height: " << height << " meters" << endl;
    }
};

int main() {
    // Using struct
    PersonStruct p1;
    p1.name = "Alice";
    p1.age = 25;
    p1.height = 1.68;

    cout << "--- Using struct ---" << endl;
    cout << "Name: " << p1.name << endl;
    cout << "Age: " << p1.age << endl;
    cout << "Height: " << p1.height << " meters" << endl;

    // Using class
    PersonClass p2("Bob", 30, 1.75);
    cout << "\n--- Using class ---" << endl;
    p2.displayInfo();

    return 0;
}
