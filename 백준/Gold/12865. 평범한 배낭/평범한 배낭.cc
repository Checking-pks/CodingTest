#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, k, result=0;
	cin >> n >> k;
	vector<pair<int, int>> items(n);
	vector<int> valueList(k+1);
	
	for (int i=0; i<n; i++) 
		cin >> items[i].first >> items[i].second;

	for (int i=0; i<items.size(); i++) {
		for (int j=k; j>=items[i].first; j--) {
			int nowValue = valueList[j];
			int newValue = valueList[j-items[i].first] + items[i].second;

			if (nowValue <= newValue) {
				valueList[j] = newValue;
				result = max(result, newValue);
			}
		}
	}

	cout << result;
}