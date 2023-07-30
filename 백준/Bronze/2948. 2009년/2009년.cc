#include <iostream>

using namespace std;

int main() {
	string week[] = {"Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday"};
	int month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	int m, d;
	cin >> d >> m;

	int result = d-1;

	for (int i=0; i<m-1; i++)
		result += month[i];

	cout << week[result%7];
}