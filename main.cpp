#include <iostream>

using namespace std;

//This code generates 2 random numbers, letting the user press enter to see the sum of them both.

int main() {
srand(time(0));

int randomNumber = rand() % 100 + 1;
int randomNumber2 = rand() % 100 + 1;
cout << "What is " << randomNumber << " + " << randomNumber2 << "?" << endl;
cout << "Press enter to see the answer" << endl;
cin.get();

int correctAnswer = randomNumber + randomNumber2;
cout << "The answer is: " << correctAnswer << endl;
}