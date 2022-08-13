#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main() {
    int commandNum;
    deque<int> intQueue;
    cin >> commandNum;

    for (int i=0; i<commandNum; i++) {
        string command;
        cin >> command;

        if (command == "push_front") {
            int num;
            cin >> num;
            intQueue.push_front(num);
        } 
        else if (command == "push_back") {
            int num;
            cin >> num;
            intQueue.push_back(num);
        } 
        else if (command == "pop_front") {
            if (intQueue.empty())
                cout << "-1\n";
            else {
                cout << intQueue.front() << "\n";
                intQueue.pop_front();
            }
        } 
        else if (command == "pop_back") {
            if (intQueue.empty())
                cout << "-1\n";
            else {
                cout << intQueue.back() << "\n";
                intQueue.pop_back();
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