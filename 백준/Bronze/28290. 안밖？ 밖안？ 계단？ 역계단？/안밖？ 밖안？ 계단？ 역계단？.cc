#include <iostream>

using namespace std;

int main() {
	string str;
	cin >> str;

	if (str == "fdsajkl;" || str == "jkl;fdsa")
		cout << "in-out";
	else if (str == "asdf;lkj" || str == ";lkjasdf")
		cout << "out-in";
	else if (str == "asdfjkl;")
		cout << "stairs";
	else if (str == ";lkjfdsa")
		cout << "reverse";
	else
		cout << "molu";
}