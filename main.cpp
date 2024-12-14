#include <iostream>
#include <string>
#include <limits>

using namespace std;

//This program will ask the user for the number of accidents in each region and then tell the region with the least number of accidents.

int main() {
int northAccidents, southAccidents, eastAccidents, westAccidents, centralAccidents;

do {
cout << "Enter the number of accidents in the North region: ";
cin >> northAccidents;
if (northAccidents < 0) {
cout << "Invalid input. Please enter a non-negative value." << endl;
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
} while (northAccidents < 0);

do {
cout << "Enter the number of accidents in the South region: ";
cin >> southAccidents;
if (southAccidents < 0) {
cout << "Invalid input. Please enter a non-negative value." << endl;
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
}
} while (southAccidents < 0);

do {
cout << "Enter the number of accidents in the East region: ";
cin >> eastAccidents;
if (eastAccidents < 0) {
cout << "Invalid input. Please enter a non-negative value." << endl;
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
}
} while (eastAccidents < 0);

do {
cout << "Enter the number of accidents in the West region: ";
cin >> westAccidents;
if (westAccidents < 0) {
cout << "Invalid input. Please enter a non-negative value." << endl;
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
}
} while (westAccidents < 0);

do {
cout << "Enter the number of accidents in the Central region: ";
cin >> centralAccidents;
if (centralAccidents < 0) {
cout << "Invalid input. Please enter a non-negative value." << endl;
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
}
} while (centralAccidents < 0);

int minAccidents = min(northAccidents, min(southAccidents, min(eastAccidents, min(westAccidents, centralAccidents))));

cout << "Regions with the fewest accidents:" << endl;
if (northAccidents == minAccidents) {
cout << "North" << endl;
}
if (southAccidents == minAccidents) {
cout << "South" << endl;
}
if (eastAccidents == minAccidents) {
cout << "East" << endl;
}
if (westAccidents == minAccidents) {
cout << "West" << endl;
}
  if (centralAccidents == minAccidents) {
cout << "Central" << endl;
}

return 0;
}