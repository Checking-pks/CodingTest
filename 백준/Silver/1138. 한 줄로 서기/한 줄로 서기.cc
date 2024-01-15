#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> numList(n+1);
	for (int i=1; i<=n; i++)
		cin >> numList[i];

	vector<int> perList(n);
	for (int i=1; i<=n; i++)
		perList[i-1] = i;

	do {
		vector<int> now(n+1);
		for (int i=0; i<perList.size(); i++) {
			int stack = 0;
			for (int j=0; j<i; j++) 
				if (perList[i] < perList[j])
					stack++;

			now[perList[i]] = stack;
		}

		if (numList == now) {
			for (int i=0; i<perList.size(); i++) 
				cout << perList[i] << " ";
			break;
		}
	} while (next_permutation(perList.begin(), perList.end()));
}