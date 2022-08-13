#include <iostream>
using namespace std;


int fivonach(int num) {

	if (num == 1) {
		return 1;
	}
	else if (num <= 0) {
		return 0;
	}
	else {
	return fivonach(num - 1) + fivonach(num - 2);
	}
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int num;
	cin >> num;

	cout << fivonach(num);

}