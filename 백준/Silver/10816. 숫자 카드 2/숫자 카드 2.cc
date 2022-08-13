#include <iostream>
#include <map>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	map<int, int> haveCards;
	int inputCardNum, outputCardNum;
	
	cin >> inputCardNum;
	
	for (int i = 0; i < inputCardNum; i++) {
		int nowCard;
		cin >> nowCard;
		
		haveCards[nowCard]++;
	}
	
	cin >> outputCardNum;
	
	for (int i = 0; i < outputCardNum; i++) {
		int nowCard;
		cin >> nowCard;
		
		cout << haveCards[nowCard] << " ";
	}
	
	return 0;
}