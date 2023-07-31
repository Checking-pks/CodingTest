#include <iostream>
#include <queue>

using namespace std;

int main() {
	long long result = 0;
	int card;
	cin >> card;

	priority_queue<int,vector<int>,greater<int>> cards;

	for (int i=0, nowCard; i<card; i++) {
		cin >> nowCard;
		cards.push(nowCard);
	}

	while (cards.size() > 1) {
		int c1 = cards.top();
		cards.pop();
		int c2 = cards.top();
		cards.pop();
		
		result += c1 + c2;
		cards.push(c1+c2);
	}

	cout << result;
}