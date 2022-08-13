#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    unordered_set <int> numList;
    
    for (int i=0; i<28; i++) {
        int num;
        cin >> num;
        
        numList.insert(num);
    }

    for (int i=1; i<=30; i++)
        if (numList.find(i) == numList.end())
            cout << i << "\n";
    
    return 0;
}