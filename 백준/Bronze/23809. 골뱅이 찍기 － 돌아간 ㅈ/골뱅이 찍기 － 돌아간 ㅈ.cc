#include <iostream>

using namespace std;

void print_type1(int num)
{
	for (int i=0; i<num; i++) 
	{
		for (int j=0; j<num; j++) cout << "@";
		for (int j=0; j<num*3; j++) cout << " ";
		for (int j=0; j<num; j++) cout << "@";

		cout << "\n";
	}
}

void print_type2(int num)
{
	for (int i=0; i<num; i++) 
	{
		for (int j=0; j<num; j++) cout << "@";
		for (int j=0; j<num*2; j++) cout << " ";
		for (int j=0; j<num; j++) cout << "@";

		cout << "\n";
	}
}

void print_type3(int num)
{
	for (int i=0; i<num; i++) 
	{
		for (int j=0; j<num*3; j++) cout << "@";

		cout << "\n";
	}
}

int main() {
	int num;
	cin >> num;

	print_type1(num);
	print_type2(num);
	print_type3(num);
	print_type2(num);
	print_type1(num);
}