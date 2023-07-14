#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n, m;
	cin >> n >> m;

	vector<string> result;
	string numList;
	
	for (int i=1; i<=n; i++)
		numList += char('0'+i);

	do {
		result.push_back(numList.substr(0, m));
	} while (next_permutation(numList.begin(), numList.end()));

	sort(result.begin(), result.end());
	result.erase(unique(result.begin(), result.end()), result.end());

	for (string s:result) {
		for (char c:s) {
			cout << c << " ";
		}
		cout << "\n";
	}
}