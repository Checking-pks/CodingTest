#include <iostream>
#include <vector>

using namespace std;

const int DIVISION = 1000;

vector<vector<int>> matrixMultiple(vector<vector<int>> m1, vector<vector<int>> m2) {
	if (m1.empty()) return m2;
	vector<vector<int>> result(m1.size(), vector<int>(m1[0].size()));

	for (int i=0; i<result.size(); i++) {
		for (int j=0; j<result.size(); j++) {
			int sum = 0;
			for (int k=0; k<result.size(); k++)
				sum += m1[i][k] * m2[k][j];
			result[i][j] = sum % DIVISION;
		}
	}

	return result;
}

int main() {
	int n;
	long long b;
	cin >> n >> b;

	vector<vector<int>> field(n, vector<int>(n));
	vector<vector<vector<int>>> multipleList;
	
	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			cin >> field[i][j];
			field[i][j] %= DIVISION;
		}
	}

	multipleList.push_back(field);

	for (long long i=1; i<=b; i<<=1) {
		auto now = multipleList.back();
		multipleList.push_back(
			matrixMultiple(now, now)
		);
	}

	vector<vector<int>> result;

	for (long long i=1, idx=0; i<=b; i<<=1, idx++) {
		if (!(b & i)) continue;
		result = matrixMultiple(result, multipleList[idx]);
	}

	for (int i=0; i<n; i++) {
		for (int j=0; j<n; j++) {
			cout << result[i][j] << " ";
		}
		cout << "\n";
	}
}