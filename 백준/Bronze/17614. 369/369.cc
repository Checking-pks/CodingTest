#include <iostream>

using namespace std;

int isClap(string str) {
	int result = 0;
	for(char c:str) {
		result += (c=='3')
			+ (c=='6')
			+ (c=='9');
	}
	return result;
}

int main() {
	int clapList[] = {3, 57, 840, 11100, 138000, 1650000};
	int num, result = 0, ten = 10;
	cin >> num;

	for (int i=0; num >= ten; ten *= 10) 
		result += clapList[i++];
	
	for (int i=ten/10; i<=num; i++) {
		result += isClap(to_string(i));
	}

	cout << result;
}
