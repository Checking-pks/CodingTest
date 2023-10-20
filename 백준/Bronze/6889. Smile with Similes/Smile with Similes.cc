#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	vector<string> nList(n), mList(m);

	for (int i=0; i<n; i++)	cin >> nList[i];
	for (int i=0; i<m; i++) cin >> mList[i];

	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			cout << nList[i] << " as " << mList[j] << "\n";
		}
	}
}