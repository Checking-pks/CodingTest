#include <iostream>

using namespace std;

int main() {
	int time, flow;
	cin >> time >> flow;
	cout << (--time+flow)%12+1;
}