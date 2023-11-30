#include <iostream>

using namespace std;

const int DIVISION = 1000000007;

int main(){
	int num;
	cin >> num;

	pair<int, int> numList = {1, 1};

	for (int i=1; i<num; i++) {
		numList = {
			numList.second % DIVISION,
			(numList.first + numList.second + 1) % DIVISION
		};
	}

	cout << numList.second;
}