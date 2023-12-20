#include <iostream>
#include <vector>

using namespace std;

int main() {
	int result = 0;
	string s1, s2;
	cin >> s1 >> s2;

	vector<int> numList(s2.length() + 1);

	for (int i=0; i<s1.length(); i++) {
		vector<int> newNumList = numList;
		
		for (int j=0; j<s2.length(); j++) {
			newNumList[j+1] = max(newNumList[j+1], newNumList[j]);
			
			if (s1[i] == s2[j]) 
				newNumList[j+1] = max(newNumList[j+1], numList[j] + 1);
			
			result = max(result, newNumList[j+1]);
		}

		numList = newNumList;
	}

	cout << result;
}