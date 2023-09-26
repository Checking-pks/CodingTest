#include <iostream>

using namespace std;

int main() {
	int n, result=0;
	cin >> n;

	while(n--) {
		int h, w;
		cin >> h >> w;
		result = max(result, h*w);
	}

	cout << result;
}