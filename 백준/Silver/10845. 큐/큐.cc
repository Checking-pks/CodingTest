#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    int commandNum;
    queue<int> intQueue;
    cin >> commandNum;

    for (int i=0; i<commandNum; i++) {
        string command;
        cin >> command;

        if (command == "push") {
            int num;
            cin >> num;
            intQueue.push(num);
        } 
        else if (command == "pop") {
            if (intQueue.empty())
                cout << "-1\n";
            else {
                cout << intQueue.front() << "\n";
                intQueue.pop();
            }
        } 
        else if (command == "size") {
            cout << intQueue.size() << "\n";
        }
        else if (command == "empty") {
            cout << intQueue.empty() << "\n";
        }
        else if (command == "front") {
            if (intQueue.empty())
                cout << "-1\n";
            else 
                cout << intQueue.front() << "\n";
        }
        else if (command == "back") {
            if (intQueue.empty())
                cout << "-1\n";
            else 
                cout << intQueue.back() << "\n";
        }
    }
    
    return 0;
}