#include <iostream>
#include <vector>

using namespace std;

int main() {
	int koreanMelonPerMeter, widthIdx=0, heightIdx=0;
	cin >> koreanMelonPerMeter;

	vector<pair<int, int>> inputs(6, {0, 0});

	for (int i=0, maxWidth=0, maxHeight=0; i<6; i++) {
		cin >> inputs[i].first >> inputs[i].second;

		if (inputs[i].first == 1 || inputs[i].first == 2) {
			if (maxWidth < inputs[i].second) {
				maxWidth = inputs[i].second;
				widthIdx = i;
			}
		}
		if (inputs[i].first == 3 || inputs[i].first == 4) {
			if (maxHeight < inputs[i].second) {
				maxHeight = inputs[i].second;
				heightIdx = i;
			}
		}
	}

	cout << koreanMelonPerMeter * (
		inputs[widthIdx].second * inputs[heightIdx].second -
		inputs[(widthIdx+3)%6].second * inputs[(heightIdx+3)%6].second
	);
}