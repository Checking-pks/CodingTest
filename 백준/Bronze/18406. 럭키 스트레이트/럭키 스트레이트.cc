#include <iostream>

using namespace std;

int main() {
	string score;
	cin >> score;

	int l = 0, r = 0;

	for (int i=0, half=score.size()/2; i<half; i++) {
		l += (score[i] - '0');
		r += (score[half + i] - '0');
	}

	cout << (l==r ? "LUCKY" : "READY");
}