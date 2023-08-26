#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	
	int n, m;
	cin >> n >> m;

	for (int i=1; i<=n*m; i++) 
		cout << i << (i%m ? " " : "\n");
}