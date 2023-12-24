#include <iostream>
#include <vector>

using namespace std;

int main() {
	int result = 0;
	string s1, s2;
	cin >> s1 >> s2;

	vector<int> numList(s2.length()/3+1);
	for (int i=0; i<s1.length()/3; i++) {
		vector<int> newNumList = numList;

		for (int j=0; j<s2.length()/3; j++) {
			newNumList[j+1] = max(newNumList[j+1], newNumList[j]);

			if (s1.substr(i*3, 3) == s2.substr(j*3, 3)) 
				newNumList[j+1] = max(newNumList[j+1], numList[j] + 1);

			result = max(result, newNumList[j+1]);
		}
		numList = newNumList;
	}

	cout << result;
}