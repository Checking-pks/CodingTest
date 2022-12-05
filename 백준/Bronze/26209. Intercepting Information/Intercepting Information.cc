#include <iostream>
using namespace std;

int main() {
	bool isSuccess = true;
	
	for (int i=0, num; i<8; i++) {
		cin >> num;
		if (num == 9) isSuccess = false;
	}

	cout << (isSuccess ? "S" : "F");
}