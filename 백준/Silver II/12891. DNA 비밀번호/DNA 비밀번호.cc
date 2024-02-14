#include <iostream>
#include <vector>

using namespace std;

int GetIdx(char c) {
	switch (c) {
		case 'A': return 0;
		case 'C': return 1;
		case 'G': return 2;
		case 'T': return 3;
		default : return 4;
	}
}

bool isTarget(vector<int> &target, vector<int> now) {
	if (now.back() > 0) return false;
	for (int i=0; i<4; i++) 
		if (target[i] > now[i])
			return false;
	return true;
}

int main() {
	int S, P, result=0;
	string str;
	vector<int> target(5), now(5);
	
	cin >> S >> P >> str;
	for (int i=0; i<4; i++)
		cin >> target[i];

	for (int i=0; i<P; i++) 
		now[GetIdx(str[i])]++;

	for (int i=P; i<S; i++) {
		if (isTarget(target, now)) result++;
		now[GetIdx(str[i-P])]--;
		now[GetIdx(str[i])]++;
	}

	if (isTarget(target, now)) result++;

	cout << result;
}