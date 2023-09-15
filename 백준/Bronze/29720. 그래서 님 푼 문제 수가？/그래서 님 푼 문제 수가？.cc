#include <iostream>

using namespace std;

int main() 
{
	int n, m, k;
	cin >> n >> m >> k;

	cout << (n-m*k>0 ? n-m*k : 0) << " " << n-m*k+(m-1);
}