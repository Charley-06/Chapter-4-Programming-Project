#include <iostream>

int main() {
// This program will calculate out of people surveyed, how many drank energy drinks and how many out of those preffered citrus flavored ones.
const double customers = 16500;
double eg_consumers = customers * 0.15;
double citrus_enjoyers = eg_consumers * 0.58;
std::cout << "Out of people surveyed, " << eg_consumers << " said they drank one or more energy drinks per week.\n";
std::cout << "Out of the people who drank energy drinks, " << citrus_enjoyers << " said they preferred citrus flavored energy drinks.\n";}