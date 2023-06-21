#include <iostream>
#include <vector>

using namespace std;

int main() {
	pair<int, int> result;
	int min = 36;
	
	int n;
	cin >> n;

	vector<string> pictures(n, "");

	for (int i=0; i<n; i++) {
		for (int j=0; j<5; j++) {
			string line;
			cin >> line;

			pictures[i] += line;
		}
	}

	for (int i=0; i<n-1; i++) {
		for (int j=i+1; j<n; j++) {
			int nowDiff = 0;
			
			for (int k=0; k<35; k++) {
				nowDiff += (pictures[i][k] != pictures[j][k]);
			}

			if (min > nowDiff) {
				min = nowDiff;
				result.first = i;
				result.second = j;
			}
		}
	}

	cout << ++result.first << " " << ++result.second;
}