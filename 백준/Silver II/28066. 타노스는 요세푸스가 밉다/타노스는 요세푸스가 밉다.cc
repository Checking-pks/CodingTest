#include <iostream>
#include <queue>

using namespace std;

int main() {
	int N, K;
	cin >> N >> K;
	
	queue<int> nList;
	for (int i=1; i<=N; i++) 
		nList.push(i);

	while (nList.size() > 1) {
		int now = nList.front();
		for (int i=0; i<K; i++) 
			if (nList.size()) 
				nList.pop();
		nList.push(now);
	}

	cout << nList.front();
}