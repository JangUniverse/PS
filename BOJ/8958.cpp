#include <iostream>
using namespace std;

int main() {
	int t;
	string quiz;
	cin >> t;

	for (int i = 0; i < t; i++) {
		int sum = 0;
		int score = 0;
		cin >> quiz;
		
		for(int j = 0; j < quiz.length(); j++) {
			if(quiz[j] == 'O') {
				score++;
				sum += score;
			} else {
				score = 0;
			}
		}
		cout << sum << endl;
	}
	return 0;
}