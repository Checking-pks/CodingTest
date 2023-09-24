#include <iostream>
#include <map>

using namespace std;

int main() {
	map<char, int> score = {
	{'.', 0}, 
	{'K', 0}, {'k', 0}, {'P', 1}, {'p', -1}, 
	{'N', 3}, {'n', -3}, {'B', 3}, {'b', -3}, 
	{'R', 5}, {'r', -5}, {'Q', 9}, {'q', -9}
	};

	int result = 0;
	
	for (int i=0; i<8; i++) {
		string s;
		cin >> s;
		
		for (int j=0; j<8; j++) {
			result += score[s[j]];
		}
	}

	cout << result;
}