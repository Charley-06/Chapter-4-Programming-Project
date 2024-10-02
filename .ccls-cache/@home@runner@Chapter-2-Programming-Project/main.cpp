#include <iostream>

int main() {
// this program will show the rate of ocean level increase at 5, 7, and 10 years.
const double rise_per_year = 1.5;
double rise_in_5_years = rise_per_year * 5;
double rise_in_7_years = rise_per_year * 7;
double rise_in_10_years = rise_per_year * 10;
std::cout << "The ocean's level will be " << rise_in_5_years << " millimeters higher in 5 years.\n";
std::cout << "The ocean's level will be " << rise_in_7_years << " millimeters higher in 7 years.\n";
std::cout << "The ocean's level will be " << rise_in_10_years << " millimeters higher in 10 years.\n";}