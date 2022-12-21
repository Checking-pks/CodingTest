#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    map<string, int> bookList;
	string result = "";
    int num, max = 0;
    cin >> num;
    
    for (int i=0; i<num; i++) {
        string book;
		cin >> book;
        bookList[book]++;
    }
    
    for (pair<string, int> b:bookList) {
		if (max < b.second) {
			max = b.second;
			result = b.first;
		} else if (max == b.second) {
			result = (result < b.first) ? result : b.first;
		}
	}

	cout << result;
}