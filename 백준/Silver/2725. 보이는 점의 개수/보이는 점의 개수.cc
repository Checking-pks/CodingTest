#include <iostream>
#include <vector>

using namespace std;

vector<vector<bool>> field(1001, vector<bool>(1001, true));
vector<int> result(1001);

void fieldMarking() {
	field[0][0] = false;
	
	for (int i=0; i<=1000; i++) {
		for (int j=0; j<=1000; j++) {
			if (!field[i][j]) continue;

			for (int k=2, xPos, yPos; true; k++) {
				xPos = i*k; yPos = j*k;
				if (xPos > 1000) break;
				if (yPos > 1000) break;

				field[xPos][yPos] = false;
			}
		}
	}

	for (int i=1; i<=1000; i++) {
		result[i] = result[i-1];
		for (int j=0; j<=i; j++) {
			result[i] += field[i][j];
			result[i] += field[j][i];
		}
		result[i] -= field[i][i];
	}
}

int main() {
	fieldMarking();
	int testcase;
	cin >> testcase;

	while(testcase--) {
		int N;
		cin >> N;
		cout << result[N] << "\n";
	}
}