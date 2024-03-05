#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int N;
	cin >> N;

	vector<int> top(N), bottom(N), mid(N);

	for (int i=0; i<N; i++) cin >> top[i];
	for (int i=0; i<N; i++) cin >> bottom[i];

	for (int i=1, now=0; i<N; i++) {
		if (now <= bottom[i])
			now = bottom[i]+1;
		if (now >= top[i])
			now = top[i]-1;

		cout << now << " ";
	}

	cout << 0;
}