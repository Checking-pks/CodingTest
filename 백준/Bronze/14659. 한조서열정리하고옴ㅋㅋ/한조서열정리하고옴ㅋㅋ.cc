#include <iostream>
#include <queue>

using namespace std;

int main() {
	int n, result=0;
	cin >> n;
	
	queue<int> bucket;

	for (int i=0, now; i<n; i++) {
		cin >> now;

		while (bucket.size() && now > bucket.front())
			bucket.pop();

		bucket.push(now);

		if (result < bucket.size() - 1)
			result = bucket.size() - 1;
	}

	cout << result;
}