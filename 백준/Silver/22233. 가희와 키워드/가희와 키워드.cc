#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int N, M;
	cin >> N >> M;

	string s;
	unordered_set<string> notepad;
	for (int i=0; i<N; i++) {
		cin >> s;
		notepad.insert(s);
	}

	for (int i=0; i<M; i++) {
		cin >> s;

		int before = 0, after = s.find(',', before);
		while (after != string::npos) {
			string now = s.substr(before, after - before);
			notepad.erase(now);
			before = after + 1;
			after = s.find(',', before);
		}

		notepad.erase(s.substr(before));
		
		cout << notepad.size() << "\n";
	}
}