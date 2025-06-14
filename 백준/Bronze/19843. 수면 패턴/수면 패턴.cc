#include <iostream>
#include <map>

using namespace std;

map<string, int> week = {
{"Mon", 0}, {"Tue", 1}, {"Wed", 2}, {"Thu", 3}, {"Fri", 4}};

int main() {
	int T, N;
	cin >> T >> N;

	for (int i=0; i<N; i++) {
		string before, after;
		int beforeTime, afterTime;

		cin >> before >> beforeTime
			>> after >> afterTime;

		int dayDiff = week[after] - week[before] - 1;

		if (dayDiff > 0)
			T -= 24 * dayDiff;
		
		if (before == after) 
			T -= afterTime - beforeTime;
		else 
			T -= 24 - beforeTime + afterTime;
	}

	if (T > 48)
		cout << -1;
	else
		cout << max(T, 0);
}