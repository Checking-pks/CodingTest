#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int num;
	cin >> num;
	cout << ceil(sqrt(num)) << " " << ceil(num / ceil(sqrt(num)));
}