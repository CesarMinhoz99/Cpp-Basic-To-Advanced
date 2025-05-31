#include <iostream>
using namespace std;

class BankAccount {
private:
    // Private variable: cannot be accessed directly outside the class
    // It protects the balance from being changed directly, ensuring data safety
    double balance;

    // Example of a resource that might need allocation:
    // For example, if we used dynamic memory or opened a file,
    // we would need to allocate it in the constructor and release it in the destructor.
    // This is called "allocating resources" (like memory, files, connections),
    // which must be properly managed to avoid problems like memory leaks or locked files.

public:
    // Public constructor to initialize the balance
    // Constructors are used to set initial values or allocate resources
    BankAccount(double initialBalance) {
        if (initialBalance >= 0)
            balance = initialBalance;
        else
            balance = 0;
    }

    // If we had allocated resources, we would define a destructor to free them here:
    // ~BankAccount() {
    //     // free allocated resources, like delete[] or file close
    // }

    // Public method to deposit money safely
    void deposit(double amount) {
        if (amount > 0)
            balance += amount;
        else
            cout << "Deposit amount must be positive." << endl;
    }

    // Public method to withdraw money safely
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance)
            balance -= amount;
        else
            cout << "Invalid withdrawal amount." << endl;
    }

    // Public method to get the current balance (read-only access)
    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount myAccount(100);  // Create account with initial balance 100

    // Direct access to balance is not allowed:
    // myAccount.balance = 500; // ERROR: balance is private

    myAccount.deposit(50);       // Deposit 50
    myAccount.withdraw(30);      // Withdraw 30

    cout << "Current balance: " << myAccount.getBalance() << endl;

    return 0;
}
