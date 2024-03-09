#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, k;
	cin >> n;

	vector<int> nList(n);
	for (int i=0; i<n; i++)
		cin >> nList[i];

	cin >> k;

	long long result=0, sum=0;
	for (int i=0, j=0; i<n; i++) {

		for (; sum <= k && j < n; j++)
			sum += nList[j];

		if (sum > k) result += n - j + 1;
		sum -= nList[i];
	}

	cout << result;
}