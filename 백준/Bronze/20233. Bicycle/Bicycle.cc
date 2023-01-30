#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
	int a, x, b, y, time;
	cin >> a >> x >> b >> y >> time;
	cout << a + ((time > 30) ? time-30 : 0) * x * 21 << " ";
	cout << b + ((time > 45) ? time-45 : 0) * y * 21;
}