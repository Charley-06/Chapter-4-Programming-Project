#include <iostream>
#include <limits>

using namespace std;

int main() {
int month, year;

// This will ask for a month and a year
cout << "Enter a month (1-12): ";
cin >> month;

// this makes sure a valid month is entered
  
while (cin.fail() || month < 1 || month > 12) {
cout << "Invalid month. Please enter a value between 1 and 12: ";

// this makes sure the error message doesnt keep repeating

cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
cin >> month;

cout << "Enter a year: ";
cin >> year;

// This will calculate the number of days in the month and determine leap years
int days;
switch (month) {
  case 2:
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
 days = 29;
  } else {
 days = 28;
  }
break;
  
  case 4:
  case 6:
  case 9:
  case 11:
days = 30;
break;
  
default:
days = 31;
break;
}

// This is what's displayed
std::cout << "This month has " << days << " days." << std::endl;
  
}