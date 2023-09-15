#include <iostream>

using namespace std;

int main() 
{
	int testcase;
	cin >> testcase;

	while (testcase--) {
		int n, m, result = 0;
		cin >> n >> m;

		for (int i=1; i<n; i++) {
			for (int j=i+1; j<n; j++) {
				result += ((i*i+j*j+m)%(i*j) == 0);
			}
		}

		cout << result << "\n";
	}
}