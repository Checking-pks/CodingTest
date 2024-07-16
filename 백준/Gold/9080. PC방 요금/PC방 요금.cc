#include <iostream>

using namespace std;

int main() {
	int T;
	cin >> T;

	while (T--) {
		string time;
		int H, M, D, price = 0;
		cin >> time >> D;

		H = stoi(time.substr(0, 2));
		M = stoi(time.substr(3));
		
		while (D > 0) {
			if (22 <= H || H < 3) {
				if (D > 300) {
					D -= 60 - M;
					M = 0;
					H = (H + 1) % 24;

					while (22 <= H || H < 8) {
						H = (H + 1) % 24;
						D -= 60;
					}
					
					price += 5000;
					continue;
				}
			}

			H = (H + 1) % 24;
			D -= 60;
			price += 1000;
		}
		
		cout << price << "\n";
	}
}