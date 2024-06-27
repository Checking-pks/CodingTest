#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;

int main() {
	ll N;
	cin >> N;

	int length = to_string(N).length();

	if (length > 10) {
		cout << "9876543210";
		return 0;
	}

	string s = string(10 - length, '.'), result;
	ll resDiff = 1'000'000'000;

	for (int i=0; i<length; i++) 
		s += char(i + '0');

	do {
		string now = string(length, '0');
		for (int i=0; i<10; i++) 
			if (s[i] != '.')
				now[s[i] - '0'] = char(i + '0');

		ll nowDiff = abs(stoll(now) - N);

		if (resDiff > nowDiff) {
			resDiff = nowDiff;
			result = now;
		} else if (resDiff == nowDiff) {
			result = min(result, now);
		}
	} while (next_permutation(s.begin(), s.end()));

	cout << stoll(result);
}