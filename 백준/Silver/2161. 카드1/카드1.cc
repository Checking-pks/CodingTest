#include <iostream>
#include <queue>

using namespace std;

int main() {
	queue<int> bucket;
	int num;
	cin >> num;

	for (int i=1; i<=num; i++) 
		bucket.push(i);

	for (int i=0; bucket.size(); i++) {
		if (i & 1) {
			bucket.push(bucket.front());
			bucket.pop();
		} else {
			cout << bucket.front() << " ";
			bucket.pop();
		}
	}
}