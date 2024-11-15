#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
string townName, fileName;
int year, population;

cout << "Enter the name of the town: ";
cin >> townName;
cout << "Enter the name of the data file: ";
cin >> fileName;

ifstream dataFile(fileName);

cout << townName << " Population Growth" << endl;

while (dataFile >> year >> population) {
population = (population + 500) / 1000;

cout << year << "i";

for (int i = 0; i < population; i++) {
cout << "*";
}
cout << endl;
}
dataFile.close();

return 0;
}