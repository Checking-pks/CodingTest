#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N;
	cin >> N;

	pair<int, int> top = {0, 0};
	vector<pair<int, int>> field(N);
	for (int i=0; i<N; i++) {
		cin >> field[i].first >> field[i].second;
		if (top.second < field[i].second) 
			top = field[i];
	}

	sort(field.begin(), field.end());

	int result = top.second;
	auto last = field[0];
	for (int i=1; field[i].first <= top.first; i++) {
		auto now = field[i];
		if (last.second <= now.second) {
			result += (now.first - last.first) * last.second;
			last = now;
		}
	}
	
	last = field[N-1];
	for (int i=N-2; field[i].first >= top.first; i--) {
		auto now = field[i];
		if (last.second <= now.second) {
			result += (last.first - now.first) * last.second;
			last = now;
		}
	}

	cout << result;
}