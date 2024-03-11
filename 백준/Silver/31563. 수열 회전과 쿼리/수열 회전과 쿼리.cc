#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int N, Q;
	cin >> N >> Q;

	vector <long long> nList(N);
	cin >> nList[0];
	for (int i=1, now; i<N; i++) {
		cin >> now;
		nList[i] = nList[i-1] + now;
	}

	for (int i=0, idx=0, now; i<Q; i++) {
		cin >> now;

		if (now == 1) {
			int k;
			cin >> k;
			idx += N - k;
			idx %= N;
		}

		if (now == 2) {
			int k;
			cin >> k;
			idx += k;
			idx %= N;
		}

		if (now == 3) {
			int a, b;
			cin >> a >> b;
			a += idx-1; a %= N;
			b += idx-1; b %= N;

			cout << nList[b] 
				- (a ? nList[a-1] : 0) 
				+ (a>b ? nList.back() : 0) 
				<< "\n";
		}
	}
}