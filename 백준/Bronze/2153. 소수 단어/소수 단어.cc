#include <iostream>
#include <cmath>

using namespace std;

bool checkPrime(int num) {
	for (int i=2; i<=sqrt(num); i++) 
		if (num % i == 0) return false;

	return true;
}

int main() {
	bool isPrime = true;
	int num = 0;
	string str;
	cin >> str;

	for (int i=0; i<str.length(); i++) {
		if ('a' <= str[i] && str[i] <= 'z')
			num += str[i] - 'a' + 1;
		else
			num += str[i] - 'A' + 27;
	}

	if (checkPrime(num))
		cout << "It is a prime word.";
	else
		cout << "It is not a prime word.";
}