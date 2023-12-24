#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	vector<int> nList1(n+1), nList2(n);
	for (int i=0, now; i<n; i++) {
		cin >> now;
		nList1[now] = i;
	}

	for (int i=0; i<n; i++) {
		cin >> nList2[i];
		nList2[i] = nList1[nList2[i]];
	}

	vector<int> stackList(1, -1);
	for (int i=0; i<n; i++) {
		if (stackList.back() < nList2[i]) {
			stackList.push_back(nList2[i]);
			continue;
		}
		
		for (int j=1; j<stackList.size(); j++) {
			if (nList2[i] < stackList[j-1]) continue;
			if (nList2[i] > stackList[j]) continue;

			stackList[j] = nList2[i];
			break;
		}
	}
    
	cout << stackList.size() - 1;
}