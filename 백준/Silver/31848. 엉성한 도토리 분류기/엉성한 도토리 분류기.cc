#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, Q; 
	cin >> N;
	
	vector<int> nList(200005);

	for (int i = 0, now, stack = 0; i < N; i++) {
		cin >> now;
		now += i;
		if (stack < now) {
			stack = now;
			while (now > 0 && !nList[now]) 
				nList[now--] = i + 1;
		}
	}

	cin >> Q;
	
	while (Q--) {
		int now;
		cin >> now;
		cout << nList[now] << " ";
	}
}