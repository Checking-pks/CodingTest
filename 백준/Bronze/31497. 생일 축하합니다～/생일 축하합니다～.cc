#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N;
	cin >> N;

	vector<string> nameList(N);
	for (int i=0; i<N; i++)
		cin >> nameList[i];

	for (int i=0; i<N; i++) {
		string s = nameList[i];

		int r1, r2;
		cout << "? " << s << "\n";
		cin >> r1;
		cout << "? " << s << "\n";
		cin >> r2;

		if (r1 | r2) {
			cout << "! " << s;
			cout << flush;
			return 0;
		}
	}
}