#include <iostream>
using namespace std;

int list[100000] = {0,}, stack[100000] = {0,}, size=0, max_num=1, loc=0, NO=0;
string answer = "";

void push() {
    
    stack[size] = max_num;
    
    size++;
    max_num++;
    
    answer += '+';
    
    return;
}

void pop() {
    
    if (list[loc] != stack[size-1]) {
        NO++;
    } else {
        size--;
    }
    
    loc++;
    
    answer += '-';
    
    return;
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int num;
    cin >> num;
    
    for (int i=0; i<num; i++) {
        cin >> list[i];
    }
    
    for (int i=0; i<num*2; i++) {
        
        if (NO != 0) {
            break;
        }
        
        if (list[loc] >= max_num) {
            push();
        } else {
            pop();
        }
    }
    
    if (NO != 0) {
        cout << "NO";
    } else {
        for (int i=0; i<answer.length(); i++) {
            cout << answer[i] << "\n";
        }
    }
    
}
