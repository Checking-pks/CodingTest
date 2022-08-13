#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int num, pac = 1;
	cin >> num;

	for (;num > 0; num--) {
		pac = pac * num;
	}

	cout << pac;

}