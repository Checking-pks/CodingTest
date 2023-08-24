#include <iostream>

using namespace std;

void print_type1(int num)
{
	cout << "@";
	
	for (int j=0; j<num; j++) cout << "@";

	cout << "@\n";
}

void print_type2(int num)
{
	for (int i=0; i<num; i++) 
	{
		cout << "@";

		for (int i=0; i<num; i++) cout << " ";
		
		cout << "@\n";
	}
}

int main() {
	int num;
	cin >> num;

	print_type1(num);
	print_type2(num);
	print_type1(num);
}