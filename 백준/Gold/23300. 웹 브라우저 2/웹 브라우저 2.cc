#include <iostream>
#include <list>

using namespace std;

int main() {
	int N, Q;
	cin >> N >> Q;

	int now = -1;
	list<int> backList;
	list<int> frontList;
	for (int i=0; i<Q; i++) {
		char c;
		cin >> c;

		switch(c) {
			case 'B':
				if (backList.empty())
					break;
				
				if (now != -1) 
					frontList.push_back(now);
				
				now = backList.back();
				backList.pop_back();
				
				break;
			
			case 'F':
				if (frontList.empty())
					break;

				if (now != -1) 
					backList.push_back(now);

				now = frontList.back();
				frontList.pop_back();
				
				break;
			
			case 'A':
				int num;
				cin >> num;

				if (now != -1) 
					backList.push_back(now);

				now = num;
				frontList.clear();

				break;
			
			case 'C':
				backList.unique();
				break;
		}
	}

	cout << now << "\n";

	if (backList.empty())
		cout << -1;
	
	while (backList.size()) {
		cout << backList.back() << " ";
		backList.pop_back();
	}

	cout << "\n";

	if (frontList.empty())
		cout << -1;

	while (frontList.size()) {
		cout << frontList.back() << " ";
		frontList.pop_back();
	}
}