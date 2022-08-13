#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    int n, result = 0;
    stack <int> bucket;
    cin >> n;

    for (int i=0; i<n; i++) {
        int nowNum;
        cin >> nowNum;

        if (nowNum)
            bucket.push(nowNum);
        else
            bucket.pop();
    }

    while (bucket.size()) {
        result += bucket.top();
        bucket.pop();
    }

    cout << result;
    
    return 0;
}