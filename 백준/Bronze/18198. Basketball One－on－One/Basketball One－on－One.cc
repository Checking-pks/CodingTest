#include <iostream>

using namespace std;

int main() {
	int s=0;
	string score;
	cin >> score;

	for (int i=0; i<score.length(); i+=2) {
		s += (score[i] == 'A' ? 1 : -1) * (score[i+1] - '0');
	}

	cout << ((s > 0) ? 'A' : 'B');
}