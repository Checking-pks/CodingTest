#include <iostream>

using namespace std;

int main() {
	int o, w;
	cin >> o >> w;

	for (int i=1; o + w; i++) {
		char action;
		int value;
	
		cin >> action >> value;

		while (action != '#') {
			if (w > 0) {
				if (action == 'E') w -= value;
				else w += value;
			}
			
			cin >> action >> value;
		}

		cout << i;

		if (w <= 0) cout << " RIP\n";
		else if (o/2 < w && w < o*2) cout << " :-)\n";
		else cout << " :-(\n";
		
		cin >> o >> w;
	}
}