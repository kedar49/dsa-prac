#include<iostream>
using namespace std;

// switch case example to evaluate grades
int main() {
    char grade;
    cout << "Enter your grade (A, B, C, D, F): ";
    cin >> grade;
    switch (grade) {
        case 'A':
            cout << "Excellent!" << endl;
            break;
        case 'B':
            cout << "Good job!" << endl;
            break;
        case 'C':
            cout << "You passed." << endl;
            break;
        case 'D':
            cout << "You need to improve." << endl;
            break;
        case 'F':
            cout << "Failed. Better luck next time." << endl;
            break;
        default:
            cout << "Invalid grade entered." << endl;
    }

    return 0;
}