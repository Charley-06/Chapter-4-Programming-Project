#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//this program asks for 5 different judges scores and then uses them to find the contestants final score.

double calculateScore(const vector<double>& scores) {
double highestScore = *max_element(scores.begin(), scores.end());
double lowestScore = *min_element(scores.begin(), scores.end());

vector<double> remainingScores(scores);
remainingScores.erase(remove(remainingScores.begin(), remainingScores.end(), highestScore), remainingScores.end());
remainingScores.erase(remove(remainingScores.begin(), remainingScores.end(), lowestScore), remainingScores.end());

double sum = 0;
for (double score : remainingScores) {
sum += score;
}
return sum / remainingScores.size();
}

int main() {
vector<double> scores(5);

cout << "Enter the scores from the five judges (separated by spaces): ";
for (int i = 0; i < 5; i++) {
cin >> scores[i];
}

double finalScore = calculateScore(scores);
cout << "The contestant's final score is: " << finalScore << endl;

return 0;
}