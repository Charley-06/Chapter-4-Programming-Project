#include <iostream>

using namespace std;

//This program will calculate the length and width of a rectangle and then give the area and perimeter of the rectangle.

double calculatePerimeter(double length, double width) {
return 2 * (length + width);
}

double calculateArea(double length, double width) {
return length * width;
}

int main() {
char anotherRectangle = 'y';

while (anotherRectangle == 'y') {
double length, width;


do {
cout << "Enter the length of the rectangle: ";
cin >> length;
if (length < 0) {
cout << "Invalid length. Please enter a non-negative value." << endl;
}
} while (length < 0);

do {
cout << "Enter the width of the rectangle: ";
cin >> width;
if (width < 0) {
cout << "Invalid width. Please enter a non-negative value." << endl;
}
} while (width < 0);

double perimeter = calculatePerimeter(length, width);
double area = calculateArea(length, width);
cout << "Perimeter: " << perimeter << endl;
cout << "Area: " << area << endl;

cout << "Do you want to process another rectangle (y/n)? ";
cin >> anotherRectangle;
}

return 0;
}