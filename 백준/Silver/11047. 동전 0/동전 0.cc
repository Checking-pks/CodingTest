#include <iostream>
#include <list>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	list <int> coins;
	int coinNum, sum, result = 0;
	cin >> coinNum >> sum;

	for (int i=0; i<coinNum; i++) {
		int nowCoin;
		cin >> nowCoin;

		coins.push_back(nowCoin);
	}

	coins.sort(greater<>());

	for (int c:coins) {
		if (sum / c) {
			result += sum / c;
			sum -= (sum / c) * c;
		}
	}

	cout << result;
	
	return 0;
}