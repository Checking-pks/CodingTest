#include <iostream>
using namespace std;

int list[10000] = {0,}, size=0;

void push() {
    int num;
    cin >> num;
    
    size++;
    list[size-1] = num;
    
    return;
}

void pop() {
    if (size == 0) {
        cout << "-1\n";
    } else {
        cout << list[size-1] << "\n";
        size--;
    }
    
    return;
}

void length() {
    cout << size << "\n";
    
    return;
}

void empty() {
    if (size == 0) {
        cout << "1\n";
    } else {
        cout << "0\n";
    }
    
    return;
}

void top() {
    if (size == 0) {
        cout << "-1\n";
    } else {
        cout << list[size-1] << "\n";
    }
    
    return;
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int testcase;
    cin >> testcase;
    
    for (int i=0; i<testcase; i++) {
        
        string command;
        cin >> command;
        
        if (command == "push") {
            push();
        } else if (command == "pop") {
            pop();
        } else if (command == "size") {
            length();
        } else if (command == "empty") {
            empty();
        } else if (command == "top") {
            top();
        }
    }
    
    return 0;
}
