#include <iostream>
#include <list>

using namespace std;

int main() {
    int times;
    list <int> numList;
    cin >> times;

    for (int i=0; i<times; i++) {
        int num;
        cin >> num;
        
        numList.push_back(num);
    }

    numList.sort();

    for (int n:numList)
        cout << n << "\n";
    
    return 0;
}