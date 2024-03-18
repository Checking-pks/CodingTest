#include <iostream>
#include <vector>

using namespace std;

int main() {
	cout.precision(9);
	cout << fixed;

	vector<vector<double>> rate(8, vector<double>(8));
	vector<double> result(8);
	
	for (int i=0; i<7; i++) {
		for (int j=i+1; j<8; j++) {
			cin >> rate[i][j];
			rate[i][j] *= 0.01;
			rate[j][i] = 1 - rate[i][j];
		}
	}

	result = {
		rate[0][1], rate[1][0],
		rate[2][3], rate[3][2],
		rate[4][5], rate[5][4],
		rate[6][7],	rate[7][6]
	};

	result = {
		result[0] * (
			result[2] * rate[0][2] + 
			result[3] * rate[0][3]
		),
		result[1] * (
			result[2] * rate[1][2] + 
			result[3] * rate[1][3]
		),
		result[2] * (
			result[0] * rate[2][0] + 
			result[1] * rate[2][1]
		),
		result[3] * (
			result[0] * rate[3][0] + 
			result[1] * rate[3][1]
		),
		result[4] * (
			result[6] * rate[4][6] + 
			result[7] * rate[4][7]
		),
		result[5] * (
			result[6] * rate[5][6] + 
			result[7] * rate[5][7]
		),
		result[6] * (
			result[4] * rate[6][4] + 
			result[5] * rate[6][5]
		),
		result[7] * (
			result[4] * rate[7][4] + 
			result[5] * rate[7][5]
		)
	};

	result = {
		result[0] * (
			result[4] * rate[0][4] + 
			result[5] * rate[0][5] +
			result[6] * rate[0][6] +
			result[7] * rate[0][7]
		),
		result[1] * (
			result[4] * rate[1][4] + 
			result[5] * rate[1][5] +
			result[6] * rate[1][6] +
			result[7] * rate[1][7]
		),
		result[2] * (
			result[4] * rate[2][4] + 
			result[5] * rate[2][5] +
			result[6] * rate[2][6] +
			result[7] * rate[2][7]
		),
		result[3] * (
			result[4] * rate[3][4] + 
			result[5] * rate[3][5] +
			result[6] * rate[3][6] +
			result[7] * rate[3][7]
		),
		result[4] * (
			result[0] * rate[4][0] + 
			result[1] * rate[4][1] +
			result[2] * rate[4][2] +
			result[3] * rate[4][3]
		),
		result[5] * (
			result[0] * rate[5][0] + 
			result[1] * rate[5][1] +
			result[2] * rate[5][2] +
			result[3] * rate[5][3]
		),
		result[6] * (
			result[0] * rate[6][0] + 
			result[1] * rate[6][1] +
			result[2] * rate[6][2] +
			result[3] * rate[6][3]
		),
		result[7] * (
			result[0] * rate[7][0] + 
			result[1] * rate[7][1] +
			result[2] * rate[7][2] +
			result[3] * rate[7][3]
		)
	};

	for (auto a:result)
		cout << a << " ";
}