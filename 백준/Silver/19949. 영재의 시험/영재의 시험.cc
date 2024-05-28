#include <iostream>
#include <vector>

using namespace std;

vector<int> nList(10);
int result = 0;

void solve(int depth, pair<int, int> answer, int count) {
	if (count + 10 - depth < 5)
		return;
	
	if (nList[depth] == answer.second)
		count++;
	
	if (depth >= 9) {
		if (count >= 5)
			result++;
		return;
	}

	for (int i=1; i<=5; i++) {
		if (answer.first == answer.second &&
			answer.first == i)
			continue;

		solve(
			depth + 1, 
			{answer.second, i}, 
			count
		);
	}
}

int main() {
	for (int i=0; i<10; i++)
		cin >> nList[i];

	for (int i=1; i<=5; i++) 
		solve(0, {0, i}, 0);

	cout << result;
}