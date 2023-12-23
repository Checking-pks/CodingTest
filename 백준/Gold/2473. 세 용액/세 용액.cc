#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
	int n;
	cin >> n;

	long long minimum = 3000000000;
	vector<long long> result(3);
	vector<long long> numList(n);
	for (int i=0; i<n; i++)
		cin >> numList[i];

	sort(numList.begin(), numList.end());
	
	for (int i=0; i<n-2; i++) {
		for (int j=i+1; j<n-1; j++) {
			int left = j+1, right = n-1;
			long long solution = numList[i] + numList[j];

			while (left <= right) {
				int mid = (left + right) / 2;
				long long now = solution + numList[mid];
				if (minimum > abs(now))
				{
					minimum = abs(now);
					result = {numList[i], numList[j], numList[mid]};
				}

				if (now < 0) left = mid + 1;
				else right = mid - 1;
			}
		}
	}

	cout << result[0] << " " << result[1] << " " << result[2];
}