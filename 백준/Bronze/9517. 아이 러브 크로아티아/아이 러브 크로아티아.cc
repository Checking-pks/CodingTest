#include <iostream>

using namespace std;

int main() {
	int bombNum, questionNum, time = 3 * 60 + 30, result = 0;
	cin >> bombNum >> questionNum;
	
	for (int i=0; i<questionNum; i++) {
		int t;
		char z;
		cin >> t >> z;

		time -= t;

		bombNum += (z == 'T' && time >= 0);
		if (bombNum > 8)
			bombNum = 1;

		if (result) continue;
		if (time > 0) continue;
		
		result = bombNum;
	}

	cout << result;
}