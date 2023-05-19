#include <iostream>

using namespace std;

int main() {
	int eight=0;
	string left, right;
	cin >> left >> right;

	if (left.length() == right.length()) {
		for (int i=0; i<right.length(); i++) {
			if (left[i] == '8' && right[i] == '8')
				eight++;
			
			if (left[i] != right[i])
				break;
 		}
	}

	cout << eight;
}