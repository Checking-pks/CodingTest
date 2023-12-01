#include <string>
#include <vector>
#include <queue>

using namespace std;

long long solution(int n, vector<int> works) {
	priority_queue<int> bucket;

	for (int i=0; i<works.size(); i++)
		bucket.push(works[i]);

	while (n--) {
		int now = bucket.top();
        if (now == 0) break;
		bucket.pop();
		bucket.push(now-1);
	}

	long long answer = 0;

	while (bucket.size()) {
		answer += 1ll * bucket.top() * bucket.top();
		bucket.pop();
	}
	
	return answer;
}