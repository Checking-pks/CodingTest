#include <iostream>
#include <cmath>
using namespace std;


void hanoi(int num, int from, int by, int to) {
	if (num == 1) {
		cout << from << " " << to << "\n";
	}
	else {
		hanoi(num - 1, from, to, by);
		cout << from << " " << to << "\n";
		hanoi(num - 1, by, from, to);
	}
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int num;
	cin >> num;

	cout << int(pow(2, num)) - 1 << "\n";

	hanoi(num, 1, 2, 3);
	
}

