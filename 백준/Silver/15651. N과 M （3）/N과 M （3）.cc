#include <iostream>
#include <stack>

using namespace std;

void permutation(int n, int m, int nowNum, stack<int> bucket) {
	bucket.push(nowNum);

	if (bucket.size() == m) {
		string result = "";
		
		while (bucket.size()) {
			result = to_string(bucket.top()) + " " + result;
			bucket.pop();
		} 

		cout << result << "\n";
		return;
	}

	for (int i=1; i<=n; i++) {
		permutation(n, m, i, bucket);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n, m;
	cin >> n >> m;
	
	for (int i=1; i<=n; i++) {
		permutation(n, m, i, stack<int>());
	}
}