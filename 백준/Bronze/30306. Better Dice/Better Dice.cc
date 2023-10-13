#include <iostream>
#include <vector>

using namespace std;

int main() {
	int num, fScore=0, sScore=0;
	cin >> num;

	vector<int> first(num, 0), second(num, 0);

	for (int i=0; i<num; i++) cin >> first[i];
	for (int i=0; i<num; i++) cin >> second[i];

	for (int i=0; i<num; i++) {
		for (int j=0; j<num; j++) {
			if (first[i] > second[j]) fScore++;
			if (first[i] < second[j]) sScore++;
		}
	}

	if (fScore > sScore) cout << "first";
	else if (fScore < sScore) cout << "second";
	else cout << "tie";
}