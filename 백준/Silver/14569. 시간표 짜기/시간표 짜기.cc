#include <iostream>
#include <vector>

using namespace std;

long long getTimeNum() {
	int timeCount;
	cin >> timeCount;

	long long time, result = 0;
	for (int i=0; i<timeCount; i++) {
		cin >> time;
		result += 1ll << time;
	}

	return result;
}

int main() {
	int N, M;
	cin >> N;

	vector<long long> subjectList;
	for (int i=0; i<N; i++) 
		subjectList.push_back(getTimeNum());

	cin >> M;
	for (int i=0; i<M; i++) {
		long long studentTime = getTimeNum();
		
		int result = 0;
		for (int j=0; j<N; j++) 
			result += (studentTime & subjectList[j]) == subjectList[j];

		cout << result << "\n";
	}
}