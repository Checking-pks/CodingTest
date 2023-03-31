#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	vector<string> strList(5);

	for (int i=0; i<strList.size(); i++)
		cin >> strList[i];

	for (int i=0; i<15; i++)
		for (int j=0; j<strList.size(); j++)
			if (strList[j].length() > i)
				cout << strList[j][i];
}