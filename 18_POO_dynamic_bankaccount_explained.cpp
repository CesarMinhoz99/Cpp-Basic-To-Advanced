#include <iostream>
using namespace std;

// Summary of concepts:
// - Stack: fast, automatic memory (e.g., local variables)
// - Heap: slower, manual memory (use 'new' and 'delete')
// - Use heap for large or dynamic data (e.g., big arrays, persistent objects)
// - Always 'delete' what you 'new' to avoid memory leaks

class DynamicBankAccount {
private:
    double* balance;  // Pointer to dynamically allocated memory (on the heap)

public:
    // Constructor: allocates memory and sets the initial balance
    DynamicBankAccount(double initialBalance) {
        balance = new double; // Allocate memory on the heap

        if (initialBalance >= 0)
            *balance = initialBalance;
        else
            *balance = 0;

        // This is an example of resource allocation.
        // Instead of storing the value directly (stack), we store it in heap memory.
        // This is useful if the object is large or needs to persist longer than the function scope.
    }

    // Destructor: releases the allocated memory
    ~DynamicBankAccount() {
        delete balance; // Free memory on the heap
        // This prevents memory leaks (forgetting this will keep memory reserved)
    }

    // Method to deposit money
    void deposit(double amount) {
        if (amount > 0)
            *balance += amount;
        else
            cout << "Deposit amount must be positive." << endl;
    }

    // Method to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= *balance)
            *balance -= amount;
        else
            cout << "Invalid withdrawal amount." << endl;
    }

    // Method to get the balance
    double getBalance() {
        return *balance;
    }
};

int main() {
    // Stack memory: 'myAccount' is created on the stack
    // Heap memory: 'balance' inside it is created on the heap
    DynamicBankAccount myAccount(100);

    myAccount.deposit(50);
    myAccount.withdraw(30);

    cout << "Current balance: " << myAccount.getBalance() << endl;

    // When 'myAccount' goes out of scope, the destructor is automatically called
    // It will call 'delete' to free the heap memory

    return 0;
}
