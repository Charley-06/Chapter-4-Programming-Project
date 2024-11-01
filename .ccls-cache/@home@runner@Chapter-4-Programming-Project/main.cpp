#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;

double calculateShippingCost (double weight, double distance) {
    double rate;

  // This part of the code is to determine the rate based on the weight of the package.
  
    if (weight <= 2) {
        rate = 1.10;
    } else if (weight <= 6) {
        rate = 2.20;
    } else if (weight <= 10) {
        rate = 3.70;
    } else if (weight <= 20) {
        rate = 4.80;
    } else {
        return -1; // This makes sure to keep what the user enters within the programs range
    }

    if (distance >= 10 && distance <= 3000) {
        return rate * (distance / 500);
    } else {
        return -1;
    }
}

// This part is what's displayed

int main() {
double weight, distance;

cout << "Enter the weight of the package in kilograms: ";
cin >> weight;

// This part is to make sure the user enters a valid weight

while (cin.fail() || weight <= 0 || weight > 20) {
  cout << "Invalid weight. Please enter a value between 0 and 20 kg: ";
  cin >> weight;
}

cout << "Enter the distance to be shipped (in miles): ";
cin >> distance;

// This part is to make sure the user enters a valid distance

while (cin.fail() || distance < 10 || distance > 3000) {
cout << "Invalid distance. Please enter a value between 10 and 3,000 miles: " << endl;
cin >> distance;
    }

// This part is to calculate the shipping cost
  
double cost = calculateShippingCost(weight, distance);

if (cost == -1) {
if (weight > 20) {

// This part is to make sure the user enters a valid weight

cout << "Invalid weight. Maximum weight allowed is 20 kg." << endl;
} else {
cout << "Invalid distance. Minimum distance is 10 miles, maximum is 3,000 miles." << endl;
}
} else {

// This part is to display the shipping cost
  
cout << "Shipping cost: $" << fixed << setprecision(2) << cost << endl;
}

return 0;
}