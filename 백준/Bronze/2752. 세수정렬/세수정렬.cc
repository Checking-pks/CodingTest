#include <iostream>
#include <list>

using namespace std;

int main() {
    int n1, n2, n3;
	cin >> n1 >> n2 >> n3;
	
	list<int> numList = {n1, n2, n3};
	numList.sort();

	for (int n:numList)
		cout << n << " ";
}