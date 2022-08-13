#include <iostream>
#include <queue>
using namespace std;

queue<int> q;

int go_left(int num) {
    int times=0;
    queue<int> left;
    left = q;
    
    while (left.front() != num) {
        times++;
        left.push(left.front());
        left.pop();
    }
    
    return times;
}

int go_right(int num) {
    int times=0;
    queue<int> right;
    right = q;
    
    while (right.front() != num) {
        times++;
        for (int i=0; i<right.size()-1; i++) {
            right.push(right.front());
            right.pop();
            
        }
    }
    
    return times;
}

int main() {
    
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int queue_size, list_size, result = 0;
    cin >> queue_size >> list_size;
    
    for (int i=1; i<=queue_size; i++) {
        q.push(i);
    }
    
    for (int i=0; i<list_size; i++) {
        int num;
        cin >> num;
        
        if (num != q.front()) {
            if (go_left(num) <= go_right(num)) {
                while (q.front() != num) {
                    result++;
                    q.push(q.front());
                    q.pop();
                }
                q.pop();
            } else {
                while (q.front() != num) {
                    result++;
                    for (int j=0; j<q.size()-1; j++) {
                        q.push(q.front());
                        q.pop();
                    }
                }
                q.pop();
            }
        } else {
            q.pop();
        }
    }
    
    cout << result;
}
