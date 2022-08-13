#include <iostream>
#include <list>
#include <string>
#include <unordered_set>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	unordered_set<string> notHearName;
	list<string> result;
	
	int notHearNum, notSeeNum;
	cin >> notHearNum >> notSeeNum;
	
	for (int i = 0; i < notHearNum; i++) {
		string name;
		cin >> name;
		
		notHearName.insert(name);
	}
	
	for (int i = 0; i < notSeeNum; i++) {
		string name;
		cin >> name;
		
		if (notHearName.find(name) != notHearName.end())
			result.push_back(name);
	}

	result.sort();

	cout << result.size() << "\n";

	for (string n:result)
		cout << n << "\n";
	
	return 0;
}