#include <iostream>

using namespace std;

void print_tft(int num)
{
	for (int i=0; i<num; i++) 
	{
		for (int j=0; j<num; j++) cout << "@";

		for (int j=0; j<num*3; j++) cout << " ";

		for (int j=0; j<num; j++) cout << "@";

		cout << "\n";
	}
}

void print_ttt(int num)
{
	for (int i=0; i<num; i++) 
	{
		for (int j=0; j<num*5; j++) cout << "@";

		cout << "\n";
	}
}

int main() {
	int num;
	cin >> num;

	print_tft(num);
	print_ttt(num);
	print_tft(num);
	print_ttt(num);
	print_tft(num);
}