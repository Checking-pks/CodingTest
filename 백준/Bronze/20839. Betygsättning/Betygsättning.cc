#include <iostream>

using namespace std;

int main() {
  	float a, b, c;
	int s1, s2, s3;
	cin >> a >> b >> c;
	cin >> s1 >> s2 >> s3;

	if (a == s1 && b == s2) cout << "A";
	else if (a/2 <= s1 && b == s2) cout << "B";
	else if (b == s2) cout << "C";
	else if (b/2 <= s2) cout << "D";
	else cout << "E";
}