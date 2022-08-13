#include <iostream>
#include <vector>

using namespace std;

int main() {
    int testcase;
    cin >> testcase;
    
    for (int i=0; i<testcase; i++) {
        int n;
        cin >> n;
        
        vector<long long> numList = {1, 1, 1};

		for (int j=0; numList.size() < n; j++) 
			numList.push_back(numList[j] + numList[j+1]);

		cout << numList[n - 1] << "\n";
    }
    
    return 0;
}