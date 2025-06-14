#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;

	cout << " @@@   @@@ ";
	for (int i=1; i<num; i++) 
		cout << "  @@@   @@@ ";

	cout << "\n@   @ @   @";
	for (int i=1; i<num; i++)
		cout << " @   @ @   @";

	cout << "\n@    @    @";
	for (int i=1; i<num; i++)
		cout << " @    @    @";

	cout << "\n@         @";
	for (int i=1; i<num; i++)
		cout << " @         @";

	cout << "\n @       @ ";
	for (int i=1; i<num; i++)
		cout << "  @       @ ";

	cout << "\n  @     @  ";
	for (int i=1; i<num; i++)
		cout << "   @     @  ";

	cout << "\n   @   @   ";
	for (int i=1; i<num; i++)
		cout << "    @   @   ";

	cout << "\n    @ @    ";
	for (int i=1; i<num; i++)
		cout << "     @ @    ";

	cout << "\n     @     ";
	for (int i=1; i<num; i++)
		cout << "      @     ";
}