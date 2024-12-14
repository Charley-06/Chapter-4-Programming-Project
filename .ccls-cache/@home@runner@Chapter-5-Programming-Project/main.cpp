#include <iostream>
#include <iomanip>
using namespace std;

int validateRooms() {
int numRooms;
do {
cout << "Enter the number of rooms: ";
cin >> numRooms;
if (numRooms < 1) {
cout << "Invalid input. Please enter a value greater than or equal to 1.\n";
}
} while (numRooms < 1);
return numRooms;
}

double validatePaintPrice() {
double paintPrice;
do {
cout << "Enter the price of paint per gallon: $";
cin >> paintPrice;
if (paintPrice < 10.00) {
cout << "Invalid input. Please enter a value greater than or equal to $10.00.\n";
}
} while (paintPrice < 10.00);
return paintPrice;
}

double validateSquareFootage() {
double squareFootage;
do {
cout << "Enter the square footage of wall space: ";
cin >> squareFootage;
if (squareFootage < 0) {
cout << "Invalid input. Please enter a non-negative value.\n";
}
} while (squareFootage < 0);
return squareFootage;
}

int main() {
int numRooms = validateRooms();

double paintPrice = validatePaintPrice();

double totalSquareFootage = 0;
for (int i = 1; i <= numRooms; i++) {
cout << "Room " << i << ":" << endl;
totalSquareFootage += validateSquareFootage();
}

double gallonsNeeded = totalSquareFootage / 110.0;

double laborHours = totalSquareFootage / 110.0 * 8.0;
  
double paintCost = gallonsNeeded * paintPrice;
  
double laborCost = laborHours * 25.00;

double totalCost = paintCost + laborCost;


cout << "\nPainting Job Summary:\n";
cout << "Number of gallons of paint required: " << fixed << setprecision(2) << gallonsNeeded << endl;
cout << "Hours of labor required: " << fixed << setprecision(2) << laborHours << endl;
cout << "Cost of paint: $" << fixed << setprecision(2) << paintCost << endl;
cout << "Labor charges: $" << fixed << setprecision(2) << laborCost << endl;
cout << "Total cost of paint job: $" << fixed << setprecision(2) << totalCost << endl;

return 0;
}