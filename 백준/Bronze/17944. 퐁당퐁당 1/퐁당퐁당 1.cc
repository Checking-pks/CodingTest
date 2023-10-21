#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, t;
	cin >> n >> t;
	
	vector<int> nList;
	n *= 2;
	
	for (int i=1; i<=n; i++) nList.push_back(i);
	for (int i=n-1; i>1; i--) nList.push_back(i);

	cout << nList[(t-1) % nList.size()];
}