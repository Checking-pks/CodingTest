#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int n;
vector<int> numList;
unordered_map<int, int> bucket;

int dp(int pos) {
	if (pos >= n) return 0;
	if (bucket.find(pos) != bucket.end()) return bucket[pos];

	int now = dp(pos + numList[pos] + 1) + 1;
	bucket[pos] = now;
	return now;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;

	numList = vector<int>(n);
	for (int i=0; i<n; i++)
		cin >> numList[i];

	for (int i=0; i<n; i++) {
		dp(i);
		cout << bucket[i] << " ";
	}
}