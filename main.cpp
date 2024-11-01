#include <iostream>
#include <iomanip>
#include <cmath>
#include <limits>
using namespace std;


int main() {
int choice;
double radius, length, width, base, height;

// This is the main menu which is where the user is given their different options

do {
cout << "Geometry Calculator" << endl;
cout << "    1. Calculate the Area of a Circle" << endl;
cout << "    2. Calculate the Area of a Rectangle" << endl;
cout << "    3. Calculate the Area of a Triangle" << endl;
cout << "    4. Quit" << endl;
cout << "    Enter your choice (1-4): ";
cin >> choice;

// These are the multiple cases for each option

switch (choice) {
case 1:
cout << "Enter the radius of the circle: ";
cin >> radius;

//This is if an invalid number is entered
  
while (cin.fail() || radius < 0) {
cout << "Invalid radius. Please enter a non-negative value: ";
cin.clear();
cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
cin >> radius;
}

//This is what gets displayed

cout << "The area of the circle is: " << fixed << setprecision(2) << 3.14159 * radius * radius << endl;
break;

//This is the second case, for the rectangle.

case 2:
cout << "Enter the length of the rectangle: ";
cin >> length;


while (cin.fail() || length < 0) {
cout << "Invalid length. Please enter a non-negative value: ";
cin.clear();
cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
cin >> length;
}

cout << "Enter the width of the rectangle: ";
cin >> width;

while (cin.fail() || width < 0) {
cout << "Invalid width. Please enter a non-negative value: ";
cin.clear();
cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
cin >> width;
}

cout << "The area of the rectangle is: " << fixed << setprecision(2) << length * width << endl;
break;

case 3:
cout << "Enter the base of the triangle: ";
cin >> base;

while (cin.fail() || base < 0) {
cout << "Invalid base. Please enter a non-negative value: ";
cin.clear();
cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
cin >> base;
}

cout << "Enter the height of the triangle: ";
cin >> height;

while (cin.fail() || height < 0) {
cout << "Invalid height. Please enter a non-negative value: ";
cin.clear();
cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
cin >> height;
}

cout << "The area of the triangle is: " << fixed << setprecision(2) << base * height * 0.5 << endl;
break;

// This is the quit option
  
case 4:
cout << "Goodbye!" << endl;
break;

//This is if an invalid number is entered

default:
cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
}

} while (choice != 4);

return 0;
}