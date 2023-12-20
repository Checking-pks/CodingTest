#include <iostream>
#include <vector>

using namespace std;

int main() {
	string s1, s2, resultStr = "";
	cin >> s1 >> s2;

	vector<vector<int>> numList(s1.length()+1, vector<int>(s2.length() + 1));

	for (int i=1; i<=s1.length(); i++) {
		for (int j=1; j<=s2.length(); j++) {
			numList[i][j] = max(numList[i][j], numList[i-1][j]);
			numList[i][j] = max(numList[i][j], numList[i][j-1]);
			numList[i][j] = max(numList[i][j], numList[i-1][j-1]);
			
			if (s1[i-1] == s2[j-1]) 
				numList[i][j] = max(numList[i][j], numList[i-1][j-1] + 1);
		}
	}

	for (int i=s1.length(), j=s2.length(); i>0 && j>0;) {
		if (numList[i][j] == numList[i][j-1]) j--;
		else if (numList[i][j] == numList[i-1][j]) i--;
		else {
			i--; j--;
			resultStr = s2[j] + resultStr;
		}
	}
	
	cout << numList.back().back() << "\n" << resultStr;
}