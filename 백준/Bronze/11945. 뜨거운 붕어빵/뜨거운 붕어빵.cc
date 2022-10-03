#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    for (string nowStr;n>0;n--) {
        cin >> nowStr;
        reverse(nowStr.begin(), nowStr.end());
        cout << nowStr << "\n";
    }
}