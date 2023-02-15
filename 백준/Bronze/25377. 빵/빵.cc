#include <iostream>

using namespace std;

int main() {
	int num, result = 1001;
	cin >> num;

	for (int i=0, a, b; i<num; i++) {
		cin >> a >> b;
		int time = (a<=b) ? b : 1001;
		if (result>time) result=time;
	}

	cout << (result!=1001 ? result : -1);
}