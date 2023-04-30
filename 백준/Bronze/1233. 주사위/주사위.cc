#include <iostream>
#include <vector>

using namespace std;

int main() {
	int a, b, c, result=0, max=0;
	cin >> a >> b >> c;

	vector<int> num(a*b*c+1, 0);

	for (int i=1; i<=a; i++) {
		for (int j=1; j<=b; j++) {
			for (int k=1; k<=c; k++) {
				num[i+j+k]++;

				if (max < num[i+j+k]) max = num[i+j+k];
			}
		}
	}

	for (int i=0; i<num.size(); i++) {
		if (num[i] == max) {
			cout << i;
			break;
		}
	}
}