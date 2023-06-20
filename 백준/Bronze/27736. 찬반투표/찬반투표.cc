#include <iostream>

using namespace std;

int main() {
	int num, result = 0, invalidVote = 0;
	cin >> num;

	for (int i=0, now; i<num; i++) {
		cin >> now;
		result += now;

		if (!now) invalidVote++;
	}
	
	if ((num/2.f) <= invalidVote)
		cout << "INVALID";
	else if (result > 0)
		cout << "APPROVED";
	else
		cout << "REJECTED";
}