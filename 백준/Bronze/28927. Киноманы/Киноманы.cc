#include <iostream>

using namespace std;

int main() {
	int max = 0, maxT, maxE, maxF;
	int mel = 0, melT, melE, melF;

	cin >> maxT >> maxE >> maxF;
	cin >> melT >> melE >> melF;

	max = maxT * 3 + maxE * 20 + maxF * 120;
	mel = melT * 3 + melE * 20 + melF * 120;

	if (max > mel) cout << "Max";
	else if (max < mel) cout << "Mel";
	else cout << "Draw";
}