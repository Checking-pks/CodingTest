#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector <string> week = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
	vector <int> month = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int day = 0;
	
	int m, d;
	cin >> m >> d;

	for (int i=0; i<m - 1; i++) day += month[i];
	day += d;
	
	cout << week[day%7];
}