#include <iostream>

// this code will ask for the amount of cookies desires and will calculate the amount of ingredients needed.
int main() {
  
//these are the variables for the ingredients.
  
double sugar = 1.5;
double butter = 1;
double flour = 2.75;
const double cookies = 48;
double amountofcookies = 0;
double totalsugar = 0;
double totalbutter = 0;
double totalflour = 0;
  
//this will ask how many cookies the user wants.
  
std::cout << "How many cookies do you want to make? ";
std::cin >> amountofcookies;
totalsugar = (sugar * amountofcookies) / cookies;
totalbutter = (butter * amountofcookies) / cookies;
totalflour = (flour * amountofcookies) / cookies;

// this code is what the user will see.
  
std::cout << "You will need " << totalsugar << " cups of sugar, " << totalbutter << " cups of butter, and " << totalflour << " cups of flour.";
}