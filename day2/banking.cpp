#include<bits/stdc++.h>
using namespace std;

void printBalance(int balance) {
    cout << "Your current balance is: $" << balance << endl;
}
void deposit(int &balance) {
    int amount;
    cout << "Enter the amount to deposit: $";
    cin >> amount;
    if (amount > 0) {
        balance += amount;
        cout << "Deposited: $" << amount << endl;
    } else {
        cout << "Invalid deposit amount." << endl;
    }
}
void withdraw(int &balance) {
    int amount;
    cout << "Enter the amount to withdraw: $";
    cin >> amount;
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        cout << "Withdrawn: $" << amount << endl;
    } else if (amount > balance) {
        cout << "Insufficient funds." << endl;
    } else {
        cout << "Invalid withdrawal amount." << endl;
    }
}

int main() {
    int balance = 0;
    int choice;

    do {
        cout << "\nBanking System Menu:\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                printBalance(balance);
                break;
            case 2:
                deposit(balance);
                break;
            case 3:
                withdraw(balance);
                break;
            case 4:
                cout << "Exiting the banking system. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}