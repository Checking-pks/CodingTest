#include <iostream>
#include <vector>

using namespace std;

const long long DIVISION = 1000000000000;

vector<long long> factorial(int n) {
	vector<long long> result = {1};

	for (long long i=2, start=0; i<=n; i++) {
		long long rest = 0; 
		while (result[start] == 0) start++;
		for (int j=start; j<result.size(); j++) {
			long long now = result[j];
			now *= i;
			now += rest;
			rest = now / DIVISION;
			result[j] = now % DIVISION;
		}

		if (rest) result.push_back(rest);
	}

	return result;
}

void output(vector<long long> numList) {
	cout << numList.back();

	for (int i=numList.size()-2; i>=0; i--) {
		string now = to_string(numList[i]);
		cout << string(12 - now.length(), '0');
		cout << now;
	}
}

int main() {
	int N;
	cin >> N;

	output(factorial(N));
}