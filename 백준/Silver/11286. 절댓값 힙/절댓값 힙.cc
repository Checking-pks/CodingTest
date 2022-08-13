#include <iostream>
#include <cstdlib>
#include <queue>

using namespace std;

struct compare {
	bool operator()(int a, int b) {
		if (abs(a) != abs(b))
			return abs(a) > abs(b);
		else 
			return a > b;
	}
};

int main() {
    priority_queue<int, vector<int>, compare> numList;
    int num;
    
    cin >> num;
    
    for (int i=0; i<num; i++) {
        int nowNum;
        
        cin >> nowNum;
        
        if (nowNum == 0) {
            if (numList.empty())
				cout << "0\n";
			else {
				cout << numList.top() << "\n";
				numList.pop();
			}
            
            continue;
        }
        
        numList.push(nowNum);
    }
    
    return 0;
}