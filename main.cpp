#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <cmath>
using namespace std;

double a;
double b;
int main() {
    cout << "Enter value of a" << endl;
    cin >> a;
    a = pow(a, 2);
    cout << "Enter value of b" << endl;
    cin >> b;
    b = pow(b, 2);
    double c = sqrt(a + b);
    cout << "The value of c is " << c << endl;
    return 0;   
}