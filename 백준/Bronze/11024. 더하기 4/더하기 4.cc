#include <iostream>

using namespace std;

int main() 
{
	int testcase;
	cin >> testcase;

	cin.ignore();

	while(testcase--) {
		int sum=0;
		string line;
		
		getline(cin, line);
		line.push_back(' ');
		
		string now = "";
		for (int i=0; i<line.size(); i++) {
			if (line[i] == ' ') {
				sum += stoi(now);
				now = "";
			} else {
				now += line[i];
			}
		}

		cout << sum << "\n";
	}
}