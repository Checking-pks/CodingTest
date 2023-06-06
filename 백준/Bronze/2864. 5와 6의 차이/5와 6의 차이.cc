#include <iostream>

using namespace std;

int main() {
	string n1, n2;
	cin >> n1 >> n2;

	string max1 = n1, max2 = n2;
	string min1 = n1, min2 = n2;

	for (int i=0; i<n1.length(); i++) {
		if (max1[i] == '5')	max1[i] = '6';
		if (min1[i] == '6') min1[i] = '5';
	}

	for (int i=0; i<n2.length(); i++) {
		if (max2[i] == '5')	max2[i] = '6';
		if (min2[i] == '6') min2[i] = '5';
	}

	cout << stoi(min1) + stoi(min2) << " "
		<< stoi(max1) + stoi(max2);
}