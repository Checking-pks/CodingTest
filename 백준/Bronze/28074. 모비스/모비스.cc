#include <iostream>

using namespace std;

int main() {
	string s;
	cin >> s;
	cout << ((s.find('M')!=string::npos) && 
		(s.find('O')!=string::npos) && 
		(s.find('B')!=string::npos) && 
		(s.find('I')!=string::npos) && 
		(s.find('S')!=string::npos) 
		? "YES" : "NO");
}