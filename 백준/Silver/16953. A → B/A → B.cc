#include <iostream>
#include <list>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	list<pair<long long, int>> valueList;
	int before, after;
	cin >> before >> after;

	valueList.push_back({before, 1});
	
    while (valueList.size()) {
		pair<long long, int> nowValue = valueList.front();

		if (nowValue.first < after) {
			valueList.push_back({nowValue.first * 2, nowValue.second + 1});
			valueList.push_back({nowValue.first * 10 + 1, nowValue.second + 1});
		} else if (nowValue.first == after) {
			break;
		}
		
		valueList.pop_front();
	}

	cout << ((valueList.empty()) ? -1 : valueList.front().second);
}