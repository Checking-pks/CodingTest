#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	bool isResult = false;
	string num;
	cin >> num;

	for (int i=0; i<num.length()-1; i++) {
		int front = 1, back = 1;

		for (int j=0; j<=i; j++)
			front *= num[j] - '0';

		for (int j=i+1; j<num.length(); j++)
			back *= num[j] - '0';
		
		if (front == back) {
			isResult = true;
			break;
		}
	}


	cout << (isResult ? "YES" : "NO");
}