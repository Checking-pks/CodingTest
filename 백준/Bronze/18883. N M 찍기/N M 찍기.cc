#include <iostream>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	for (int i=1; i<=n*m; i++) 
		cout << i << (i%m ? " " : "\n");
}