#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;
    
    while (num--) {
        bool alphabet[26] = {false};
        int sum = 0;
		string str;
        cin >> str;
        
        for (char c:str) alphabet[c-'A'] = true;
        for (int i=0; i<26; i++)
			if (!alphabet[i])
				sum += i + 65;

		cout << sum << "\n";
    }
}