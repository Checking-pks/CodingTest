#include <iostream>
#include <vector>

using namespace std;

bool likeSham(string s1, string s2) {
	vector<char> a1(26, '.'), a2(26, '.');
	
	for (int i=0; i<s1.length(); i++) {
		if (a1[s2[i]-'a'] == '.') a1[s2[i]-'a'] = s1[i];
		if (a2[s1[i]-'a'] == '.') a2[s1[i]-'a'] = s2[i];

		if (a1[s2[i]-'a'] != s1[i]) return false;
		if (a2[s1[i]-'a'] != s2[i]) return false;
	}

	return true;
}

int main() {
	int N, result=0;
	cin >> N;

	vector<string> sList(N);
	for (int i=0; i<N; i++)
		cin >> sList[i];

	for (int i=0; i<N-1; i++) 
		for (int j=i+1; j<N; j++) 
			result += likeSham(sList[i], sList[j]);

	cout << result;
}