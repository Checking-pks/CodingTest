#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main() {
    int people, dieCount, nowCount;
    deque <int> circle;
    string result = "<";
    
    cin >> people >> dieCount;
    
    for (int i=1; i<=people; i++)
        circle.push_back(i);
    
    nowCount = dieCount;
    
    while(circle.size()) {
        int nowNum = circle.front();
        circle.pop_front();
        
        if (--nowCount == 0) {
            result += to_string(nowNum);
            result += (circle.size()) ? ", " : ">";

            nowCount = dieCount;
            continue;
        }
        
        circle.push_back(nowNum);
    }

    cout << result;
    
    return 0;
}