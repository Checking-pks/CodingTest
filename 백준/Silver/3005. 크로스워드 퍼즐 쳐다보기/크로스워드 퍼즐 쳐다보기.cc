#include <iostream>
#include <vector>

using namespace std;

int main() {
	int R, C;
	cin >> R >> C;

	string result = string(20, 'z');
	vector<string> sList(R);
	for (int i=0; i<R; i++)
		cin >> sList[i];

	for (int i=0; i<R; i++) {
		string s = "";
		for (int j=0; j<C; j++) {
			if (sList[i][j] == '#') {
				if (s.length() > 1)
					result = min(result, s);
				s = "";
			} else {
				s += sList[i][j];
			}
		}

		if (s.length() > 1)
			result = min(result, s);
	}

	for (int i=0; i<C; i++) {
		string s = "";
		for (int j=0; j<R; j++) {
			if (sList[j][i] == '#') {
				if (s.length() > 1)
					result = min(result, s);
				s = "";
			} else {
				s += sList[j][i];
			}
		}

		if (s.length() > 1)
			result = min(result, s);
	}

	cout << result;
}