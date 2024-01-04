#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>

using namespace std;

unordered_map<string, int> sieveOfEratosthenes() {
	vector<bool> numList(10001, true);
	unordered_map<string, int> result;
	
	for (int i=2; i<numList.size(); i++) 
		for (int j=2*i; numList[i] && j<numList.size(); j+=i) 
			numList[j] = false;

	for (int i=1000; i<numList.size(); i++) 
		if (numList[i])
			result[to_string(i)] = true;

	return result;
}

int main() {
	unordered_map<string, int> primeList = sieveOfEratosthenes();
	int testcase;
	cin >> testcase;

	while(testcase--) {
		string initial, target;
		cin >> initial >> target;
		queue<pair<string, int>> numList;
		unordered_map<string, bool> visit;
		numList.push({initial, 0});

		while (numList.size()) {
			auto now = numList.front();
			if (now.first == target) break;
			visit[now.first] = true;
			numList.pop();
			
			string newS;
			for (int i=0; i<4; i++) {
				newS = now.first;
				for (char c='0'; c<='9'; c++) {
					newS[i] = c;

					if (!primeList[newS])  continue;
					if (visit[newS]) 	   continue;
					if (newS == now.first) continue;
					numList.push({newS, now.second+1});
				}
			}
		}

		if (numList.size())
			cout << numList.front().second << "\n";
		else
			cout << "Impossible\n";
	}
}