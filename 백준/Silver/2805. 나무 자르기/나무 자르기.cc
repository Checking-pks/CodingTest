#include <iostream>
#include <list>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int treeNum, getHome;
	list <int> trees;

	cin >> treeNum >> getHome;

	for (int i=0; i<treeNum; i++) {
		int tree;
		cin >> tree;

		trees.push_back(tree);
	}

	trees.sort(greater<>());

	long long min = 0;
	int max = trees.front();

	while (min <= max) {
		int mid = (min + max) / 2;
		long long cutWoodLength = 0;

		for (int t:trees) {
			if (t <= mid)
				break;
			
			cutWoodLength += t - mid;
		}

		if (cutWoodLength < getHome)
			max = mid - 1;
		else
			min = mid + 1;
 	}

	cout << max;
	
	return 0;
}