#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N;
	double totalPeople=0, countPeople=0;
	cin >> N;

	vector<pair<int, int>> villiage(N);

	for (int i=0; i<N; i++) {
		cin >> villiage[i].first >> villiage[i].second;
		totalPeople += villiage[i].second;
	}

	sort(villiage.begin(), villiage.end());

	for (int i=0; i<N; i++) {
		countPeople += villiage[i].second;
		if (countPeople >= totalPeople/2) {
			cout << villiage[i].first;
			break;
		}
	}
}