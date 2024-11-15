#include <iostream>
#include <iomanip>

using namespace std;

//This program will ask the user for the number of organisms, the average daily population increase as a percentage, and the number of days they will multiply. It will then predict the size of the population.

int main() {
int startingOrganisms, days;
double dailyIncrease;

do {
cout << "Enter the starting number of organisms (at least 2): ";
cin >> startingOrganisms;

if (startingOrganisms < 2) {
cout << "Invalid input. Please enter a number greater than or equal to 2." << endl;
}
} while (startingOrganisms < 2);

do {
cout << "Enter the average daily population increase (as a percentage): ";
cin >> dailyIncrease;

if (dailyIncrease < 0) {
cout << "Invalid input. Please enter a non-negative value." << endl;
}
} while (dailyIncrease < 0);

do {
cout << "Enter the number of days the organisms will multiply (at least 1): ";
cin >> days;

if (days < 1) {
cout << "Invalid input. Please enter a number greater than or equal to 1." << endl;
}
} while (days < 1);

cout << "\nDay\tPopulation" << endl;
cout << "-----------------" << endl;

for (int i = 1; i <= days; ++i) {
int population = startingOrganisms * (1 + (dailyIncrease / 100));
cout << i << "\t" << population << endl;
startingOrganisms = population;
}

return 0;
}