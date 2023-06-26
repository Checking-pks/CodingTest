#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	long long start, end;
	cin >> start >> end;

	if (start > end) 
		swap(start, end);

	cout << (end - ++start > 0 ? end - start : 0) << "\n";
	
	for (long long i=start; i<end; i++)
		cout << i << " ";
}