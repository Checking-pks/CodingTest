#include <iostream>

using namespace std;

int main() {
	int n, result = 0;
	cin >> n;
	
	while (n--) {
		int now;
		cin >> now;
		result += now;
	}

	if (result>0) cout << "Right";
	if (result==0) cout << "Stay";
	if (result<0) cout << "Left";
}