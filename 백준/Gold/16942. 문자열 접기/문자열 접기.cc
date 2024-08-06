#include <iostream>
#include <vector>

using namespace std;

int main() {
	string s;
	cin >> s;

	int result = 0;
	vector<int> stackList(s.length(), 1);
	for (int i=0; i<s.length(); i++) {
		for (int j=i-1; j >= 0; j-=2) 
			if (s[i] == s[j])
				stackList[i] = max(stackList[i], stackList[j] + 1);
		
		result = max(result, stackList[i]);
	}

	cout << result;
}