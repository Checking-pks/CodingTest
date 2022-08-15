#include <iostream>
#include <string>

using namespace std;

int main() {
    while(true) {
        string str;
		int vowelCount = 0;

		getline(cin, str);

		if (str[0] == '#') break;

		for (int i=0; i<str.length(); i++) {
			switch(str[i]) {
				case 'a':
				case 'A':
				case 'e':
				case 'E':
				case 'i':
				case 'I':
				case 'o':
				case 'O':
				case 'u':
				case 'U':	
					vowelCount++;
				default:
					break;
			}
		}

		cout << vowelCount << "\n";
    }
    
    return 0;
}