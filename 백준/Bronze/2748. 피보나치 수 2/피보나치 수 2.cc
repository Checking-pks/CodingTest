#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<long long> fibb = {0, 1};
	int n;
	cin >> n;

	while (fibb.size() <= n) 
		fibb.push_back(fibb.back() + fibb[fibb.size()-2]);

	cout << fibb[n];
}