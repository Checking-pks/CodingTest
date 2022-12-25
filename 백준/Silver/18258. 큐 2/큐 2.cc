#include <iostream>
#include <string>
#include <list>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
    list<int> queue;
    int commandNum;
	
    cin >> commandNum;
    
    for (int i=0; i<commandNum; i++) {
        string command;
        cin >> command;

		if (command == "push") {
			int num;
			cin >> num;
			queue.push_back(num);
		}
		if (command == "pop") {
			cout << ((queue.size() == 0) ? -1 : queue.front()) << "\n";
			if (queue.size() != 0) queue.pop_front();
		}
		if (command == "size") {
			cout << queue.size() << "\n";
		}
		if (command == "empty") {
			cout << queue.empty() << "\n";
		}
		if (command == "front") {
			cout << ((queue.size() == 0) ? -1 : queue.front()) << "\n";
		}
		if (command == "back") {
			cout << ((queue.size() == 0) ? -1 : queue.back()) << "\n";
		}
    }
}