#include <iostream>
#include <vector>

using namespace std;

int main() {
	int R, C;
	cin >> R >> C;
	
	string result(R*C, 'z');
	vector<string> sList(R);

	for (int i=0; i<R; i++)
		cin >> sList[i];

	for (int i=0; i<R; i++) {
		string now = "";
		for (int j=0; j<C; j++) {
			if (sList[i][j] == '#') {
				if (now.length() > 1) 
					result = min(result, now);
				now = "";
				continue;
			}

			now += sList[i][j];
		}

		if (now.length() > 1)
			result = min(result, now);
	}

	for (int i=0; i<C; i++) {
		string now = "";
		for (int j=0; j<R; j++) {
			if (sList[j][i] == '#') {
				if (now.length() > 1) 
					result = min(result, now);
				now = "";
				continue;
			}

			now += sList[j][i];
		}

		if (now.length() > 1)
			result = min(result, now);
	}

	cout << result;
}