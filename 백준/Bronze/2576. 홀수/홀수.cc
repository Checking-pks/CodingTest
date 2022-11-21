#include <iostream>

using namespace std;

int main() {
    int oddSum = 0, oddMin = 100;
    
    for (int i=0, num; i<7; i++) {
        cin >> num;
        
        if (num & 1) {
			oddSum += num;

			if (oddMin > num)
				oddMin = num;
		}
    }

	if (oddMin == 100) cout << -1;
	else cout << oddSum << "\n" << oddMin;
}