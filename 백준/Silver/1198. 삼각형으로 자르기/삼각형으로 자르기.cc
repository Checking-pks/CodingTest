#include <iostream>
#include <vector>

using namespace std;

int main() {
	cout << fixed;
	cout.precision(1);
	
	double result = 0;
	int N;
	cin >> N;
	vector<pair<int, int>> posList(N);
	for (int i=0; i<N; i++)
		cin >> posList[i].first >> posList[i].second;
	
	for (int i=0; i<N-2; i++) {
		for (int j=i+1; j<N-1; j++) {
			for (int k=j+1; k<N; k++) {
				auto pos1 = posList[i], pos2 = posList[j], pos3 = posList[k];
				int first = pos1.first * pos2.second + pos2.first * pos3.second + pos3.first * pos1.second;
				int second = pos2.first * pos1.second + pos3.first * pos2.second + pos1.first * pos3.second;
				double s  = 0.5 * abs(first - second);
				result = max(result, s);
			}
		}
	}

	cout << result;
}