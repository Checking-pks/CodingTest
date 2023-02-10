#include <iostream>
#include <vector>

using namespace std;

int main() {
	int problem;
	cin >> problem;

	for (int i=0; i<problem; i++) {
		bool isSimple = false;
		int conditional, repeating;
		cin >> conditional >> repeating;

		if (conditional <= 2 && repeating <= 1)
			isSimple = true;
		if (conditional <= 1 && repeating <= 2)
			isSimple = true;

		cout << (isSimple ? "Yes" : "No") << "\n";
	}
}