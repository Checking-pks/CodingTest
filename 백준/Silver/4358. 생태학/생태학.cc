#include <iostream>
#include <map>

using namespace std;

int main() {
	cout << fixed;
	cout.precision(4);
	
	double totalTree = 0;
	map<string, double> treeList;
	string s;
	
	while (getline(cin, s)) {
		totalTree++;
		treeList[s]++;
	}

	for (auto t:treeList) 
		cout << t.first << " " << 100 * t.second / totalTree << "\n";
}