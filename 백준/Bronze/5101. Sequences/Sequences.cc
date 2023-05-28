#include <iostream>

using namespace std;

int main() {
	int start, add, target;
	cin >> start >> add >> target;

	while (!(start == 0 && add == 0 && target == 0)) {
		int i = 1;
		
		if (add < 0) 
			for (; start > target; i++)
				start += add;

		if (add > 0) 
			for (; start < target; i++)
				start += add;

		if (start == target)
			cout << i << "\n";
		else
			cout << "X\n";

		cin >> start >> add >> target;
	}
}