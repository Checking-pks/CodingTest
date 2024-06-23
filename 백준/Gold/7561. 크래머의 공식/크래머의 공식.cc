#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

ll getA(vector<vector<ll>> f, ll x, ll y, ll z) {
	return f[0][x] * f[1][y] * f[2][z]
			+ f[0][y] * f[1][z] * f[2][x]
			+ f[0][z] * f[1][x] * f[2][y]
			- f[0][z] * f[1][y] * f[2][x]
			- f[0][y] * f[1][x] * f[2][z]
			- f[0][x] * f[1][z] * f[2][y];
}

void cramer() {
	vector<vector<ll>> f(3, vector<ll>(4));
	for (ll i=0; i<3; i++)
		for (ll j=0; j<4; j++)
			cin >> f[i][j];

	ll A = getA(f, 0, 1, 2),
		A1 = getA(f, 3, 1, 2),
		A2 = getA(f, 0, 3, 2),
		A3 = getA(f, 0, 1, 3);

	cout << A1 << " " << A2 << " " << A3 << " " << A << "\n";

	if (A == 0) {
		cout << "No unique solution\n\n";
		return;
	}

	double x1 = 1. * A1 / A,
			x2 = 1. * A2 / A,
			x3 = 1. * A3 / A;
	
	cout << "Unique solution: ";
	cout << (-0.0005 < x1 && x1 < 0.0005 ? 0.000 : x1) << " ";
	cout << (-0.0005 < x2 && x2 < 0.0005 ? 0.000 : x2) << " ";
	cout << (-0.0005 < x3 && x3 < 0.0005 ? 0.000 : x3) << " \n\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cout.precision(3);
	cout << fixed;

	ll T;
	cin >> T;

	while (T--) 
		cramer();
}