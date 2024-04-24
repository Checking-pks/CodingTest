#include <iostream>

using namespace std;

string changer(int N) {
	if (!N) return "0";
	
	string result = "";

	while (N) {
		int now = N % -2;
		N /= -2;

		result = (now ? "1" : "0") + result;
		N += (now == -1);
	}

	return result;
}

int main() {
	int N;
	cin >> N;
	cout << changer(N);
}