#include <iostream>
#include <list>
#include <map>

using namespace std;

int main() {
	long long n, p, q;
	cin >> n >> p >> q;
	
	list<long long> bucket(1, n);
	map<long long, long long> numList;

	while (bucket.size()) {
		long long now = bucket.front();
		bucket.pop_front();

		if (numList.find(now) != numList.end()) {
			continue;
		}

		numList[now] = 0;

		bucket.push_back(now/p);
		bucket.push_back(now/q);
	}

	for (pair<long long, long long> now:numList) {
		if (now.first == 0) {
			numList[now.first] = 1;
			continue;
		}

		numList[now.first] = 
			numList[now.first / p] + 
			numList[now.first / q];
	}

	cout << numList[n];
}