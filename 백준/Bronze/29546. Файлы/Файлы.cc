#include <iostream>
#include <vector>

using namespace std;

int main() {
	int num, m;
	cin >> num;
	
	vector<string> files(num, "");

	for (int i=0; i<num; i++)
		cin >> files[i];

	cin >> m;
	
	for (int i=0, a, b; i<m; i++) {
		cin >> a >> b;

		for (int j=a-1; j<b; j++)
			cout << files[j] << "\n";
	}
}