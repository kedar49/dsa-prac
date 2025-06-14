#include<iostream>
#include<cmath>
using namespace std;
// this will calculate the hypotenuse of a right triangle using the Pythagorean theorem

int main() {
 
    double a,b,c;
    cout << " enter the size of A : ";
    cin >> a;
    cout << " enter the size of B : ";
    cin >> b;

    a = pow(a, 2);
    b = pow(b, 2);
    c = sqrt(a + b);
    cout << "The hypotenuse is: " << c << endl;

}