#include <iostream>

using namespace std;

int main() {
	int num, result=0;
	cin >> num;

	for (int i=1; i<=num; i++) 
		for (int j=1; j<=i; j++) 
			if (i*j <= num) 
				result++;

	cout << result;
}