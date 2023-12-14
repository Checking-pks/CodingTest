#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

const long long DIVISION = 1000000000;
unordered_map<long long, vector<long long>> numList;

vector<long long> sum(vector<long long> a, vector<long long> b, vector<long long> c) {
	int size = max(a.size(), max(b.size(), c.size()));
	vector<long long> result(size + 1);

	for (int i=0; i<size; i++) {
		long long now = 0;
		if (i < a.size()) now += a[i];
		if (i < b.size()) now += b[i];
		if (i < c.size()) now += c[i];
		if (now >= DIVISION) {
			result[i+1] += now / DIVISION;
			now %= DIVISION;
		}
		result[i] += now;
	}

	while (result.back() == 0) result.pop_back();
	return result;
}

vector<long long> recursive(long long n) {
	if (n<=1) return {0};
	if (numList.find(n) != numList.end()) return numList[n];

	long long nowNum = n/2 * (n/2+n%2);
	
	vector<long long> nowResult = sum(recursive(n/2), recursive(n/2+n%2), 
		{nowNum%DIVISION, nowNum/DIVISION});
	numList[n] = nowResult;
	
	return nowResult;
}

int main() {
	long long n;
	cin >> n;

	vector<long long> result = recursive(n);

	cout << result.back();
	for (int i=result.size()-2; i>=0; i--) {
		string now = to_string(result[i]);
		while (now.length() < 9) now = '0' + now;
		cout << now;
	}
}