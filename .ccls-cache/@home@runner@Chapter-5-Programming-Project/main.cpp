#include <iostream>
#include <iomanip>

using namespace std;

//This program displays a chart of degrees fro Fahrenheit and Celsius, using a formula to calculate the difference.

double fahrenheitToCelsius(double fahrenheit) {
return (5.0 / 9.0) * (fahrenheit - 32);
}

int main() {
cout << "Fahrenheit\tCelsius" << endl;
cout << "-------------------" << endl;

for (int fahrenheit = 0; fahrenheit <= 20; fahrenheit++) {
double celsius = fahrenheitToCelsius(fahrenheit);
cout << fahrenheit << "\t" << fixed << setprecision(2) << celsius << endl;
}

return 0;
}