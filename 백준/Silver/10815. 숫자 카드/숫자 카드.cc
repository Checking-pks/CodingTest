#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int num;
	cin >> num;

	unordered_set<int> numList;

	for (int i=0, nowNum; i<num; i++) {
		cin >> nowNum;
		numList.insert(nowNum);
	}

	int question;
	cin >> question;

	for (int i=0, findNum; i<question; i++) {
		cin >> findNum;
		cout << (numList.find(findNum) != numList.end()) << " ";
	}
}