#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <cmath>
using namespace std;

double a;
double b;
double P;
double r;
double t;
int change = 0;
string done = "n";
int main() {
    while(done == "n") {
    cout << "Enter 1 to go to Pythagorean Theorem calculator, Enter 2 to go to Addition calculator, Enter 3 to go to Subtraction calculator, Enter 4 to go to Multiplication calculator, Enter 5 to go to Division calculator, Enter 6 for Simple Interest, Enter 7 for Compound Interest" << endl;
    cin >> change;
    switch(change) {
    case 2: {
    cout << "calculator chosen... Addition calculator" << endl;
    cout << "enter first number" << endl;
    cin >> a;
    cout << "enter second number" << endl;
    cin >> b;
    double sum = a + b;
    cout << a << " + " << b << " = " << sum << endl;
    cout << endl;
    cout << "Are you done? (y/n)" << endl;
    cin >> done;
    break;
}
    case 3: {
cout << "calculator chosen... Subtraction calculator" << endl;
    cout << "enter first number" << endl;
    cin >> a;
    cout << "enter second number" << endl;
    cin >> b;
    double sum = a - b;
    cout << a << " - " << b << " = " << sum << endl;cout << endl;
    cout << "Are you done? (y/n)" << endl;
    cin >> done;
    break;
}
    case 4: {
cout << "calculator chosen... Multiplication calculator" << endl;
    cout << "enter first number" << endl;
    cin >> a;
    cout << "enter second number" << endl;
    cin >> b;
    double sum = a * b;
    cout << a << " × " << b << " = " << sum << endl;
cout << endl;
    cout << "Are you done? (y/n)" << endl;
    cin >> done;
    break;
}
    case 5: {
cout << "calculator chosen... Division calculator" << endl;
    cout << "enter first number" << endl;
    cin >> a;
    cout << "enter second number" << endl;
    cin >> b;
    if (b == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
        return 1; // Return a non-zero value to indicate an error
    }
    double sum = a / b;
    cout << a << " ÷ " << b << " = " << sum << endl;
 cout << endl;
    cout << "Are you done? (y/n)" << endl;
    cin >> done;
    break;
}
    case 1: {
cout << "calculator chosen... Pythagorean Theorem calculator" << endl;
cout << "Enter value of a" << endl;
    cin >> a;
    a = pow(a, 2);
    cout << "Enter value of b" << endl;
    cin >> b;
    b = pow(b, 2);
    double c = sqrt(a + b);
    cout << "The value of c is " << c << endl;
    cout << endl;
    cout << "Are you done? (y/n)" << endl;
    cin >> done;
    break;
}
case 6: {
cout << "calculator chosen... Simple Interest calculator" << endl;
cout << endl;
cout << "Enter the principal amount (P): ";
cin >> P;
cout << "Enter the annual interest rate (r) in percentage: ";
cin >> r;
cout << "Enter the time (t) in years: ";
cin >> t;
double simpleInterest = (P * r * t);
cout << "The simple interest is: " << simpleInterest << endl;
    cout << endl;
    cout << "Are you done? (y/n)" << endl;
    cin >> done;
    break;
}
case 7: {
cout << "calculator chosen... Compound Interest calculator" << endl;
cout << endl;
cout << "Enter the principal amount (P): ";
cin >> P;
cout << "Enter the annual interest rate (r) in percentage: ";
cin >> r;
cout << "Enter the time (t) in years: ";
cin >> t;
double compoundInterest = P * pow((1 + r), t) - P;
cout << "The compound interest is: " << compoundInterest << endl;
cout << "The total amount after " << t << " years is: " << P + compoundInterest << endl;
    cout << endl;
    cout << "Are you done? (y/n)" << endl;
    cin >> done;
    break;
}
    default:
    cout << "Invalid input, please try again." << endl;
    break;
}
    if(done == "y") {
        cout << "Ending calculator..." << endl;
        return 0;
    }
    if(done != "y" && done != "n") {
        cout << "Invalid input, please try again." << endl;
        done = "n"; // Reset to 'n' to continue the loop
    }
}
}
