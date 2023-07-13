#include <iostream>
#include <set>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int num;
	set<string, greater<>> employeeList;

	cin >> num;

	for (int i=0; i<num; i++) {
		string employee, type;
		cin >> employee >> type;

		if (type == "enter")
			employeeList.insert(employee);
		else
			employeeList.erase(employee);
	}

	for (string e:employeeList)
		cout << e << "\n";
}