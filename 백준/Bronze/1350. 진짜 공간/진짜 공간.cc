#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n, size;
	cin >> n;

	int file[n];
	for (int i=0; i<n; i++)
		cin >> file[i];

	cin >> size;

	long long result = 0;
	for (int i=0; i<n; i++) 
		result += ceil(1.0 * file[i] / size) * size;

	cout << result;
}