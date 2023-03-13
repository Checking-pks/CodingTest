#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;

	for (int i=0; i<num; i++) {
		bool isZack = false, isMack = false;
		
		for (int j=0, n; j<10; j++) {
			cin >> n;

			if (n == 17) isZack = true;
			if (n == 18) isMack = true;
			cout << n << " ";
		}

		if (isZack && isMack) cout << "\nboth\n\n";
		else if (isZack) cout << "\nzack\n\n";
		else if (isMack) cout << "\nmack\n\n";
		else cout << "\nnone\n\n";
	}
}