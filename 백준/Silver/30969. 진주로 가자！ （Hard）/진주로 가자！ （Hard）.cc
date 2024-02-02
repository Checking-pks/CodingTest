#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	cin >> N;

	pair<long long, long long> result = {0, 0};
	vector<int> priceList(1001);

	string nowName;
	long long nowPrice;
	for (int i=0; i<N; i++) {
		cin >> nowName >> nowPrice;
		if (nowName == "jinju") {
			result.first = nowPrice;
			priceList.push_back(-1);
		} else if (1000 < nowPrice) {
			result.second++;
		} else if (priceList.back() != -1) {
			priceList[nowPrice]++;
		} else if (result.first < nowPrice) {
			result.second++;
		}
	}

	for (int i=result.first+1; i<1001; i++) {
		result.second += priceList[i];
	}

	cout << result.first << "\n" << result.second;
}