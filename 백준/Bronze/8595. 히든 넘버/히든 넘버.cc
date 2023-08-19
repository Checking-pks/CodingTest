#include <iostream>

using namespace std;

int main() {
	int length;
	string str;
	cin >> length >> str;

	long long sum = 0;
	
	str.push_back('a');

	for (int i=0, num=0; i<=length; i++) {
		if ('0' <= str[i] && str[i] <= '9') {
			num = num * 10 + (str[i] - '0');
		} else {
			sum += num;
			num = 0;
		}
	}

	cout << sum;
}