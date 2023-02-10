#include <iostream>
using namespace std;
int main() {
	int t1, w1, t2, w2;
	cin >> t1 >> w1 >> t2 >> w2;
	if (t2 < 0 && w2 >= 10) cout << "A storm warning for tomorrow! Be careful and stay home if possible!";
	else if (t1 > t2) cout << "MCHS warns! Low temperature is expected tomorrow.";
	else if (w1 < w2) cout << "MCHS warns! Strong wind is expected tomorrow.";
	else cout << "No message";
}