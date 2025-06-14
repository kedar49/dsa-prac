#include<iostream>
using namespace std;

// This program demonstrates basic input and output in C++
int main (){

    int age;
    string name ;

    cout << "enter your name : ";
    cin >> name; 
    cout << "enter your age : ";
    cin >> age;
    cout << "Hello " << name << ", you are " << age << " years old." << endl;
    cout << "Now go learn OOps and DSA!" << endl;
    return 0;
}