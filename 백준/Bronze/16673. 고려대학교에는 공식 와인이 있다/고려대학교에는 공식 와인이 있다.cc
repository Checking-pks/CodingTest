#include <iostream>

using namespace std;

int main() {
	int result = 0;
	int year, degreeOfAttachment, degreeOfAddiction;
	cin >> year >> degreeOfAttachment >> degreeOfAddiction;

	for (int i=1; i<=year; i++) {
		result += degreeOfAttachment * i + degreeOfAddiction * i * i;
	}

	cout << result;
}