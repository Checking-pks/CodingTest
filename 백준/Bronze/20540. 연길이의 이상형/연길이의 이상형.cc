#include <iostream>

using namespace std;

int main() {
	string mbti;
	cin >> mbti;

	mbti[0] = (mbti[0] == 'E') ? 'I' : 'E';
	mbti[1] = (mbti[1] == 'S') ? 'N' : 'S';
	mbti[2] = (mbti[2] == 'T') ? 'F' : 'T';
	mbti[3] = (mbti[3] == 'J') ? 'P' : 'J';

	cout << mbti;
}