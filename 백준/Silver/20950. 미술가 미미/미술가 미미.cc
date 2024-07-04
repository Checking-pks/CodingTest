#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class color{
public:
	int r=0, g=0, b=0;
};

int getColorDiff(color c1, color c2) {
	return abs(c1.r - c2.r) + abs(c1.g - c2.g) + abs(c1.b - c2.b);
}

int main() {
	int N, result = 255*3;
	cin >> N;

	color target;
	vector<color> cList(N);
	for (int i=0; i<N; i++)
		cin >> cList[i].r >> cList[i].g >> cList[i].b;

	cin >> target.r >> target.g >> target.b;
	
	for (int i=2; i<=min(N, 7); i++) {
		vector<bool> perList(N);
		for (int j=0; j<i; j++)
			perList[j] = true;

		do {
			color nowColor;
			for (int j=0; j<N; j++) {
				if (!perList[j]) continue;

				nowColor.r += cList[j].r;
				nowColor.g += cList[j].g;
				nowColor.b += cList[j].b;
			}

			nowColor.r /= i;
			nowColor.g /= i;
			nowColor.b /= i;

			result = min(result, getColorDiff(target, nowColor));
		} while (prev_permutation(perList.begin(), perList.end()));
	}

	cout << result;
}