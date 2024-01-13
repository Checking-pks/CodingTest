#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N, result=0;
	cin >> N;
	vector<pair<int, int>> peopleList(N);
	vector<int> happiness(101);
	for (int i=0; i<N; i++)
		cin >> peopleList[i].first;
	for (int i=0; i<N; i++)
		cin >> peopleList[i].second;

	for (int i=0; i<N; i++) {
		auto now = peopleList[i];
		for (int j=1; j<=100-now.first; j++) {
			happiness[j] = max(
				happiness[j], 
				happiness[j+now.first] + now.second
			);
			result = max(result, happiness[j]);
		}
	}

	cout << result;
}