#include<iostream>
using namespace std;

int main() {
    int correct = 8;
    int questions = 10;

    int score = correct/(double)questions * 100; // using double for the type conversion 
    cout << "Your score is: " << score << "%" << endl;
}