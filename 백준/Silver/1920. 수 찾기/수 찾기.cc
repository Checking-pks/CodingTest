#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool find(vector<int> &data, int num, int left, int right) {
	int mid = (left + right) / 2;

	if (num == data[mid])
		return true;
	else if (num > data[mid]) 
		left = mid + 1;
	else if (num < data[mid])
		right = mid - 1;

	if (left > right)
		return false;

	return find(data, num, left, right);
}

int main() {
    cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	vector<int> numList;
	int times;
	
	cin >> times;
	for (int i = 0; i < times; i++) {
		int num;
		cin >> num;
		
		numList.push_back(num);
	}

	sort(numList.begin(), numList.end());
	
	cin >> times;
	for (int i = 0; i < times; i++) {
		int num;
		cin >> num;

		cout << find(numList, num, 0, numList.size()-1) << "\n";
	}
	
	return 0;
}