#include <iostream>
#include <fstream>
#include <string>

//This code will display a bar chart using "*" to represent the population within a town between years. It will get this information from a file but need to ask the user for the town name and file name.

using namespace std;

int main() {
string townName, fileName;
int year, population;

cout << "Enter the name of the town: ";
cin >> townName;
cout << "Enter the name of the data file: ";
cin >> fileName;

ifstream dataFile(fileName);

if (!dataFile.is_open()) {
cout << "Error opening file: " << fileName << endl;
return 1;
}

cout << townName << " Population Growth" << endl;

while (dataFile >> year >> population) {
population = (population + 500) / 1000;

cout << year << " ";

for (int i = 0; i < population; i++) {
cout << "*";
}
cout << endl;
}
dataFile.close();

return 0;
}