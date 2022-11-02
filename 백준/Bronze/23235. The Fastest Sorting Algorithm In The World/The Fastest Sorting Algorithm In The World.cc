#include <iostream>

using namespace std;

int main() {
    int n, times = 1;
    cin >> n;
    
    while (n) {
        int num;
        for (int i=0; i<n; i++)
            cin >> num;
        
        cout << "Case " + to_string(times++) + ": Sorting... done!\n";
		cin >> n;
    }
}