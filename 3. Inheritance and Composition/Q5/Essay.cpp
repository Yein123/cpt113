#include <iostream>
#include "Essay.h"
using namespace std;

Essay::Essay(double g, double s, double l, double c) {
	grammar = g;
	spelling = s;
	length = l;
	content = c;
	calculateScore();
}

void Essay::calculateScore() {
	score = grammar + spelling + length + content;
}

int main() {
	double grammar, spelling, length, content;

    cout << "Enter the scores for the essay:" << endl;
    cout << "Grammar (0-30): ";
    cin >> grammar;
    cout << "Spelling (0-20): ";
    cin >> spelling;
    cout << "Correct length (0-20): ";
    cin >> length;
	cout << "Content (0-30): ";
	cin >> content;

	Essay essay(grammar, spelling, length, content);

	cout << "Total Score: " << essay.getScore() << std::endl;
	cout << "Letter Grade: " << essay.getLetterGrade() << std::endl;

	return 0;
}

