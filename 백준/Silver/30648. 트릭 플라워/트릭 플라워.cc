#include <iostream>
#include <set>

using namespace std;

set<pair<int, int>> flower;

int main() {
	int a, b, R;
	cin >> a >> b >> R;

	flower.insert({a, b});

	for (int i=1; true; i++) {
		if (a + b + 2 < R) 
			a++, b++;
		else 
			a >>= 1, b >>= 1;

		if (flower.find({a, b}) != flower.end()) {
			cout << i;
			break;
		}

		flower.insert({a, b});
	}
}