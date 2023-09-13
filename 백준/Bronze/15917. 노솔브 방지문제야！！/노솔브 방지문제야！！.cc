#include <iostream>

using namespace std;

int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int testcase;
	cin >> testcase;

	while(testcase--) {
		int num;
		cin >> num;

		bool isResult = true;

		for (int i=1; i<num; i<<=1) {
			if (i&num) {
				isResult = false;
				break;
			}
		}

		cout << (isResult ? 1 : 0) << "\n";
	}
}