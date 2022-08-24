#include <iostream>
#include <set>

using namespace std;

int main() {
    int testcase;
	cin >> testcase;

	for (int i=0; i<testcase; i++) {
		multiset<int> numList;
		int command;
		cin >> command;

		for (int j=0; j<command; j++) {
			char type;
			int value;
			cin >> type >> value;

			switch (type) {
				case 'I':
					numList.insert(value);
					break;
				case 'D':
					if (numList.empty())
						break;

					if (value == 1)
						numList.erase(--numList.end());
					else
						numList.erase(numList.begin());
			}
		}

		if (numList.empty())
			cout << "EMPTY\n";
		else 
			cout << *--numList.end() << " " << *numList.begin() << "\n";
	}
}