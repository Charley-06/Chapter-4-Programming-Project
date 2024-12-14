#include <iostream>
#include <iomanip>

using namespace std;

// Uses a chart to covert the temperature from Fahrenheit to Celsius using a formula

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