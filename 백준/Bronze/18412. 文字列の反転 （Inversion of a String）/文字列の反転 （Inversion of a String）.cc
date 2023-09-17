#include <iostream>

using namespace std;

int main() 
{
	int n, a, b;
	string s;
	cin >> n >> a >> b >> s;

	for (int i=0; i<a-1; i++) cout << s[i];
	for (int i=b-1; i>=a-1; i--) cout << s[i];
	for (int i=b; i<n; i++) cout << s[i];
}