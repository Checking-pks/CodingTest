#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	double result = 0;
	vector<int> l(8);
	for (int i=0; i<8; i++)
		cin >> l[i];

	sort(l.begin(), l.end());

	do {
		vector<double> t;
		for (int i=0; i<8; i+=2) 
			t.push_back((l[i] + l[i+1]) * .5);

		sort(t.begin(), t.end());

		result = max(result, min(
			1 - abs(t[0] - t[1]) * .1,
			1 - abs(t[2] - t[3]) * .1
		));
	} while (next_permutation(l.begin(), l.end()));

	if (result == (int)result)
		cout << result << ".0";
	else
		cout << result;
}