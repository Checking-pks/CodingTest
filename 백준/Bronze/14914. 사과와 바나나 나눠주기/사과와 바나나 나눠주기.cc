#include <iostream>

using namespace std;

int main() {
	int apple, banana;
	cin >> apple >> banana;

	for (int i=1;i<=min(apple, banana);i++) {
		if (!(apple%i) && !(banana%i)) 
			cout << i << " " << apple/i << " " << banana/i << "\n";
	}
}