#include <iostream>
#include <fstream>
#include <string>

//This program reads student names from a file, and then says which student will be in the front of the line, as well as the back. It will also use this data to determine how many students are in the class.

using namespace std;

int main() {
ifstream inputFile("LineUp.txt");

string name;
string firstStudent, lastStudent;
int studentCount = 0;

while (getline(inputFile, name)) {
studentCount++;

if (studentCount == 1) {
firstStudent = name;
} else {
if (name < lastStudent) {
lastStudent = name;
}
}

lastStudent = name;
}

inputFile.close();

cout << "Number of students in the class: " << studentCount << endl;
cout << "Student at the front of the line: " << firstStudent << endl;
cout << "Student at the end of the line: " << lastStudent << endl;

return 0;
}