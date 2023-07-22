#include <iostream>

using namespace std;

int main() {
	string n1, n2, result = "";
	cin >> n1 >> n2;

	for (int i=0; i<n1.length(); i++) {
		result += n1[i];
		result += n2[i];
	}

	while (result.length() > 2) {
		for (int i=0; i<result.length()-1; i++) {
			int nowVal = (result[i] - '0') + (result[i+1] - '0');
			
			result[i] = char(nowVal%10 + '0');
		}

		result.pop_back();
	}

	cout << result;
}