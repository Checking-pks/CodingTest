#include <iostream>

using namespace std;

int main() {
	long long N, result=1;
	cin >> N;
	
	for (int i=2; i<=N; i++) {
		result *= i;
		while (result % 10 == 0) result /= 10;
		result %= 1000000000000;
	}
	
	string s = to_string(result);
	cout << s.substr(s.length()-5);
}