#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;
	cin.ignore(32767, '\n');
    
    for (int i=1; i<=num; i++) {
		string s;
        getline(cin, s);

		cout << i << ". " << s << "\n";
    }
}