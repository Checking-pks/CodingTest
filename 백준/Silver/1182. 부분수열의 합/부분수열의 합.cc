#include <iostream>
#include <vector>

using namespace std;

void solution(vector<int>& numList, int target, int pos, int value, int& result) {
	value += numList[pos];
	if (value == target) result++;

	for (int i=pos+1; i<numList.size(); i++) 
		solution(numList, target, i, value, result);
}

int main() {
	int N, S, result=0;
	cin >> N >> S;

	vector<int> numList(N);
	for (int i=0; i<N; i++)
		cin >> numList[i];

	for (int i=0; i<N; i++) 
		solution(numList, S, i, 0, result);
	cout << result;
}