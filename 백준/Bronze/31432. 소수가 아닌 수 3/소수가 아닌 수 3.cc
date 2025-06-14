#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N;
	cin >> N;

	vector<int> nList(N);
	for (int i=0, now; i<N; i++) 
		cin >> nList[i];

	if (nList.back() == 0)
		cout << "YES" << "\n" << "0";
	else
		cout << "YES\n" << nList.back() * 1111;
}