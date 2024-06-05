#include <iostream>
#include <vector>

using namespace std;

int main() {
	int T;
	cin >> T;

	for (int i=1; i<=T; i++) {
		int N;
		cin >> N;
		
		string s;
		cin >> s;

		vector<int> leftMove(N+2, 1'000'000), 
					rightMove(N+2, 1'000'000);
		
		for (int j=1; j<=N; j++) {
			leftMove[j] = 
				s[j-1] == '1' ?	
				0 : 
				leftMove[j-1] + 1;

			rightMove[N-j+1] =
				s[N-j] == '1' ?
				0 :
				rightMove[N-j+2] + 1;
		}

		long long result = 0;
		for (int j=1; j<=N; j++) 
			result += min(leftMove[j], rightMove[j]);

		cout << "Case #" << i << ": " << result << "\n";
	}
}