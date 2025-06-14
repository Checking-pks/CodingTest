#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, result=0;
	string s;
	cin >> N >> s;

	for (int i=0; i<N; i++) {
		int count;
		string now;
		cin >> now >> count;

		bool isFind = false;
		int idx = 0;
		auto t = now.find('_', idx);
		
		while (t != string::npos) {
			string y = now.substr(idx, t - idx);
			if (y == s) {
				isFind = true;
				break;
			}
			idx = t + 1;
			t = now.find('_', idx);
		}

		string y = now.substr(idx, t - idx);
		if (y == s) isFind = true;

		if (isFind) result += count;
	}
	
	cout << result;
}