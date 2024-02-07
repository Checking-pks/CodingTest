#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	unordered_set<double> nList1, nList2;
	pair<bool, bool> xAxis, yAxis;

	for (int i=0; i<N; i++) {
		double x, y;
		cin >> x >> y;

		if (x==0 && y < 0) yAxis.first = true;
		else if (x==0 && y > 0) yAxis.second = true;
		else if (y==0 && x < 0) xAxis.first = true;
		else if (y==0 && x > 0) xAxis.second = true;
		else if (y > 0) nList1.insert(x/y);
		else nList2.insert(x/y);
	}

	int result = xAxis.first + xAxis.second + yAxis.first + yAxis.second;
	result += nList1.size() + nList2.size();
	
	cout << result;
}