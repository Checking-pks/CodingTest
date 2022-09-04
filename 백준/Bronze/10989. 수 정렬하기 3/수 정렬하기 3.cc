#include <iostream>
#include <vector>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int testCase;
    vector <int> numList(10001, 0);
    
    cin >> testCase;
    
    for (int i=0; i<testCase; i++) {
        int num;
        cin >> num;

        numList[num]++;
    }
    
    for (int i=1; i<=10000; i++)
        for (int j=0; j<numList[i]; j++) 
            cout << i << "\n";
    
    return 0;
}