#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> bucket;
	for (int i=1; i<=n; i++) {
		bucket.push_back(i);
	}
	
	for (int i=0, start, end; i<m; i++) {
		cin >> start >> end;

		start--; end--;

		for (int j=0; j*2<=end-start; j++) {
			swap(bucket[start+j], bucket[end-j]);
		}
	}

	for (int i:bucket) {
		cout << i << " ";
	}
}