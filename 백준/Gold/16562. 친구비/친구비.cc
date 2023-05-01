#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, m, k;
	int result = 0, groupNum=1;

	cin >> n >> m >> k;

	vector<int> friendGroup(n, 0);
	vector<int> price(n, 0);

	for (int i=0; i<n; i++) 
		cin >> price[i];

	for (int i=0, a, b; i<m; i++) {
		cin >> a >> b;

		int g1 = friendGroup[--a], g2 = friendGroup[--b];

		if (g1 && g2) {
			for (int j=0; j<friendGroup.size(); j++) 
				if (friendGroup[j] == g2)
					friendGroup[j] = g1;
		} else if (g1) {
			friendGroup[b] = g1;
		} else if (g2) {
			friendGroup[a] = g2;
		} else {
			friendGroup[b] = groupNum;
			friendGroup[a] = groupNum++;
		}
	}

	vector<int> groupPrice(groupNum, 0);

	for (int i=0; i<friendGroup.size(); i++) {
		int g = friendGroup[i];

		if (g == 0) 
			groupPrice[g] += price[i];
		else if (groupPrice[g] == 0 || groupPrice[g] > price[i])
			groupPrice[g] = price[i];
	}

	for (int i=0; i<groupPrice.size(); i++) 
		result += groupPrice[i];

	if (result <= k) cout << result;
	else cout << "Oh no";
}