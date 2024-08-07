#include <iostream>

using namespace std;

int main() {
	string S;
	cin >> S;

	S.push_back('/');
	
	int result = 0;
	string now = "";
	for (int i=0; i<S.length(); i++) {
		if (now.empty() || now.back() == char(S[i] - 1)) {
			now.push_back(S[i]);
			continue;
		}

		result += (now.length() == 3);
		now = S[i];
	}

	cout << result;
}