#include <iostream>
#include <cmath>

using namespace std;

//This code will ask for the principle amout, interest rate, and the number of times the interest is compounded. It will then give the amount of interest earned.

int main() {
double principle;
double interest;
double compounded;
double insavings;

cout << "Enter the principle amount: ";
cin >> principle;
cout << "Enter the interest rate: ";
cin >> interest;
cout << "Enter the number of times compounded: ";
cin >> compounded;

insavings = principle * pow((1 + interest / compounded), compounded);

cout << "Amount in savings: $" << insavings << endl;
}