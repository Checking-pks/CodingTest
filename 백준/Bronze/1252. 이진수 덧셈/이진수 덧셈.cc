#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string n1, n2, result = "";
    cin >> n1 >> n2;
    
	reverse(n1.begin(), n1.end());
	reverse(n2.begin(), n2.end());
	
	for (int i=0, up=0, length=max(n1.length(), n2.length()); i<=length; i++) {
		up += (i < n1.length() && n1[i] == '1') + (i < n2.length() && n2[i] == '1');

		if (up & 1) result = "1" + result;
		else result = "0" + result;
	
		if (up > 1) up = 1;
		else up = 0;
	}

	for (int i=0, isOne = 0; i<result.length(); i++) {
		if (result[i] == '1') isOne = 1;

		if (isOne) cout << result[i];
		if (!isOne && i == result.length()-1) cout << '0';
	}
}