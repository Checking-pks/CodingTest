#include <iostream>

using namespace std;

int main() {
	int result[] = {1, 2, 3, 4, 5, 4, 3, 2};
    int n;

    cin >> n;
	cout << result[(n - 1) % 8];
}