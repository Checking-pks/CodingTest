#include <iostream>
#include <string>
#include <list>
#include <algorithm>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	for (int i=0; i<testcase; i++) {
		list<int> numList;
		string command, listStr;
		int num;
		bool isFront = true, isError = false;

		cin >> command >> num >> listStr;

		string nowNum = "";
		for (int j=1; j<listStr.length(); j++) {
			if (listStr[j] <= '9' && listStr[j] >= '0')
				nowNum += listStr[j];
			else {
				if (nowNum.length()) {
					numList.push_back(stoi(nowNum));
					nowNum = "";
				}
			}
		}

		for (int j=0; j<command.length(); j++) {
			switch (command[j]) {
				case 'R':
					isFront = !isFront;
					break;
				case 'D':
					if (numList.empty()) 
						isError = true;
					else
						if (isFront)
							numList.pop_front();
						else
							numList.pop_back();
			}

			if (isError)
				break;
		}

		if (isError)
			cout << "error" << "\n";
		else {
			if (!isFront) 
				reverse(numList.begin(), numList.end());
			
			string result = "";

			for (int n:numList) 
				result += to_string(n) + ',';

			if (result.length())
				result.pop_back();
			
			cout << "[" << result << "]" << "\n";
		}
	}
}