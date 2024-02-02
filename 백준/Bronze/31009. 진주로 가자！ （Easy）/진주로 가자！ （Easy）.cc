#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N;
	cin >> N;
	
	pair<int, int> result = {0, 0};
	vector<pair<string, int>> priceList(N);
	for (int i=0; i<N; i++) {
		cin >> priceList[i].first >> priceList[i].second;
		if (priceList[i].first == "jinju")
			result.first = priceList[i].second;
	}

	for (int i=0; i<N; i++) {
		if (result.first < priceList[i].second)
			result.second++;
	}

	cout << result.first << "\n" << result.second;
}