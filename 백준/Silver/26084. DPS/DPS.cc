#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> alphabet(26);
	string S;
	int N;
	cin >> S >> N;

	sort(S.begin(), S.end());
	
	for (int i=0; i<N; i++) {
		string now;
		cin >> now;
		alphabet[now[0] - 'A']++;
	}

	long long result = 1;
	for (int i=0; i<3; i++) {
		result *= alphabet[S[i] - 'A'];
		alphabet[S[i] - 'A']--;
	}

	if (S[0] == S[1] && S[1] == S[2])
		result /= 6;
	else if (S[0] == S[1] || S[1] == S[2])
		result /= 2;

	cout << result;
}