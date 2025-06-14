#include <iostream>
#include <stack>

using namespace std;

bool check(string s) {
	int count = 0;
	
	for (int i=0; i<s.length(); i++) {
		count += (s[i] == '(' ? 1 : -1);
		if (count < 0) return false;
	}
	
	return (!count);
}

string simulate(string s, int pos) {
	if (s.length() <= pos) 
		return (check(s) ? s : "");
	
	if (s[pos] != 'G')
		return simulate(s, pos + 1);

	s[pos] = '(';
	string result = simulate(s, pos + 1);
	if (result != "") return result;

	s[pos] = ')';
	return simulate(s, pos + 1);
}

int main() {
	
	int N;
	string S;
	cin >> N >> S;

	cout << simulate(S, 0);
}