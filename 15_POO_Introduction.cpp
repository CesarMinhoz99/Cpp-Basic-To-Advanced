#include <iostream>
using namespace std;

/*
  Object-Oriented Programming (OOP) is a programming paradigm based on the concept of "objects",
  which can contain data (attributes) and functions (methods).

  Key concepts:
  - Class: A blueprint for creating objects. Defines attributes and methods.
  - Object: An instance of a class with actual values.
  - Encapsulation: Bundling data and methods that operate on the data within one unit.
  - Reusability: Classes can be reused to create multiple objects.

  This example shows a simple class 'Car' with attributes and a method.
*/

class Car {
  public:
    string brand;
    string model;
    int year;

    void displayInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    Car myCar;

    myCar.brand = "Toyota";
    myCar.model = "Corolla";
    myCar.year = 2020;

    myCar.displayInfo();

    return 0;
}
