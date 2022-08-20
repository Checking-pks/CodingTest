#include <iostream>

using namespace std;

int main() {
    int total, num;
	cin >> total >> num;

	for (int i=0; i<num; i++) {
		int nowPrice, nowCount;
		cin >> nowPrice >> nowCount;

		total -= nowPrice * nowCount;
	}

	cout << ((total) ? "No" : "Yes");
}