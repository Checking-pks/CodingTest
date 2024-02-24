#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int T;
	cin >> T;

	while (T--) {
		int N;
		string P;
		cin >> N >> P;

		int sum = 0;
		for (int i=0; i<N; i++)
			sum += P[i] - '0';
		
		for (int i=N-1, c=0; c < N; i--) {
			int now = sum - (P[i] - '0');
			for (int j=0; j<=9; j++) {
				if (i == 0 && j == 0) 
					continue;
				if (N == 1 && j == 3)
					continue;
				if ((now + j) % 3)
					continue;
				
				string s = P;
				s[i] = '0' + j;
				cout << s << " 3\n";
				if (++c >= N) break;
			}
		}
	}
}