#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int commandNum;
	vector<bool> numList(21, false);
	cin >> commandNum;

	for (int i=0; i<commandNum; i++) {
		int num;
		string command;
		cin >> command;

		if (command == "add") {
			cin >> num;

			numList[num] = true;
		} 
		
		if (command == "remove") {
			cin >> num;

			numList[num] = false;
		} 
		
		if (command == "check") {
			cin >> num;

			cout << numList[num] << "\n";
		} 

		if (command == "toggle") {
			cin >> num;

			numList[num] = !numList[num];
		}

		if (command == "all") {
			for (int j=1; j<=20; j++)
				numList[j] = true;
		}

		if (command == "empty") {
			for (int j=1; j<=20; j++)
				numList[j] = false;
		}
	}
	
	return 0;
}