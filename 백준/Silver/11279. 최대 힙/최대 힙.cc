#include <iostream>
#include <queue>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	priority_queue<int, vector<int>, less<int>> numList;
    int num;
	cin >> num;

	for (int i=0; i<num; i++) {
		int nowNum;
		cin >> nowNum;

		if (nowNum) 
			numList.push(nowNum);
		else {
			if (numList.empty())
				cout << "0\n";
			else {
				cout << numList.top() << "\n";
				numList.pop();
			}
		}
	}
}