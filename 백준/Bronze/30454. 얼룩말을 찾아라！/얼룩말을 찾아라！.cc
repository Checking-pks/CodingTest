#include <iostream>

using namespace std;

int main() {
	int N, L;
	cin >> N >> L;
	
	int maxLine = 0, maxCount = 0;

	for (int i=0; i<N; i++) {
		string s;
		cin >> s;

		int lineCount = s[0] == '1';
		for (int j=1; j<L; j++) 
			if (s[j-1] < s[j])
				lineCount++;

		if (maxLine == lineCount)
			maxCount++;

		if (maxLine < lineCount) {
			maxLine = lineCount;
			maxCount = 1;
		}
	}

	cout << maxLine << " " << maxCount;
}