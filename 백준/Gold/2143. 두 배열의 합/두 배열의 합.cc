#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

unordered_map<int, long long> getMap() {
	int n;
	cin >> n;
	
	vector<int> nList(n);
	for (int i=0; i<n; i++) 
		cin >> nList[i];

	unordered_map<int, long long> nMap;
	for (int i=0; i<nList.size(); i++) {
		for (int j=i, sum=0; j<nList.size(); j++) {
			sum += nList[j];
			nMap[sum]++;
		}
	}

	return nMap;
}

int main() {
	int T, A, B;
	cin >> T;

	auto aMap = getMap(), bMap = getMap();

	long long result = 0;
	for (auto n:aMap) {
		auto now = bMap.find(T - n.first);
		if (now != bMap.end()) 
			result += n.second * now->second;
	}

	cout << result;
}