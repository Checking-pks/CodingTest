#include <iostream>
#include <deque>

using namespace std;

int main() {
	deque<char> result;
	string str, bang;
	cin >> str >> bang;

	for (int i=0; i<str.length(); i++) {
		result.push_back(str[i]);

		for (int j=bang.length()-1; j>=0; j--) {
			if (result.size() && result.back() == bang[j]) result.pop_back();
			else {
				for (int k=j+1; k<bang.length(); k++)
					result.push_back(bang[k]);
				break;
			}
		}
	}

	if (result.size()) {
		for(char c:result)
			cout << c;
	} else
		cout << "FRULA";
}