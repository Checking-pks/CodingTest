#include <iostream>

using namespace std;

int main() {
	string t1, t2;
	cin >> t1 >> t2;
	int m1 = stoi(t1.substr(0,2))*60+stoi(t1.substr(3));
	int m2 = stoi(t2.substr(0,2))*60+stoi(t2.substr(3));
	m2 += (1440-m1);

	cout << (m2/60 < 10 ? "0" : "") << m2/60
		<< ":"
		<< (m2%60 < 10 ? "0" : "") << m2%60;
}