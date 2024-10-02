#include <iostream>

int main() {
// This program will calculate this differences in distance a car will drive through town and on the highway.
const double gallon_tank = 20;
double town_miles = gallon_tank * 23.5;
double highway_miles = gallon_tank * 28.9;
std::cout << "When driven in town, the car will travel " << town_miles << " miles.\n";
std::cout << "When driven on the highway, the car will travel " << highway_miles << " miles.\n";}