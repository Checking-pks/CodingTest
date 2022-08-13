#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	unordered_map<string, string> dictNumtoName, dictNametoNum;
	
	int input, output;
	cin >> input >> output;

	for (int i=1; i<=input; i++) {
		string name;
		cin >> name;

		dictNumtoName.insert({to_string(i), name});
		dictNametoNum.insert({name, to_string(i)});
	}

	for (int i=0; i<output; i++) {
		string name;
		cin >> name;

		cout << dictNumtoName[name] << dictNametoNum[name] << "\n";
	}
	
	return 0;
}