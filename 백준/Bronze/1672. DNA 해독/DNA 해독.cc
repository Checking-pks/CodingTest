#include <iostream>
#include <vector>

using namespace std;

int main() {
	int length;
	string str;
	cin >> length >> str;

	char result = str.back();
	
	for (int i=length-2; i>=0; i--) {
		if (result == 'A') {
			switch(str[i]) {
				case 'A':
					result = 'A';
					break;
				case 'G':
					result = 'C';
					break;
				case 'C':
					result = 'A';
					break;
				case 'T':
					result = 'G';
					break;
			}
		} else if (result == 'G') {
			switch(str[i]) {
				case 'A':
					result = 'C';
					break;
				case 'G':
					result = 'G';
					break;
				case 'C':
					result = 'T';
					break;
				case 'T':
					result = 'A';
					break;
			}
		} else if (result == 'C') {
			switch(str[i]) {
				case 'A':
					result = 'A';
					break;
				case 'G':
					result = 'T';
					break;
				case 'C':
					result = 'C';
					break;
				case 'T':
					result = 'G';
					break;
			}
		} else if (result == 'T') {
			switch(str[i]) {
				case 'A':
					result = 'G';
					break;
				case 'G':
					result = 'A';
					break;
				case 'C':
					result = 'G';
					break;
				case 'T':
					result = 'T';
					break;
			}
		} 
	}

	cout << result;
}