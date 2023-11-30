#include <iostream>
#include <list>

using namespace std;

int main(){
	int num;
	cin >> num;

	list<long long> numList = {1, 1, 1};

	for (int i=3; i<num; i++) {
		numList.push_back(numList.front() + numList.back());
		numList.pop_front();
	}

	cout << numList.back();
}