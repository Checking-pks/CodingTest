#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string bigNumSubtraction(string num1, string num2) {
    if (num1.length() < num2.length() || (num1.length() == num2.length() && num1 < num2))
        return num1;
    
    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());

    for (int i=0; i<num2.length(); i++) {
        if (num1[i] < num2[i]) {
            for (int j=i+1; j<num1.length(); j++) {
                if (num1[j] != '0') {
                    num1[j]--;
                    break;
                } 

                num1[j] = '9';
            }
            num1[i] += 10 - (num2[i] - '0');
        } else 
            num1[i] -= num2[i] - '0';
    }

    while (num1.back() == '0')
        num1.pop_back();

    if (num1.empty())
        num1 = "0";
    else
        reverse(num1.begin(), num1.end());

    return num1;
}

string bigNumDivision(string num1, string num2) {
	string quotient = "";

	for (int i=num1.length() - num2.length(); i>=0; i--) {
		string div = num2;

		for (int j=0; j < i; j++) 
			div.push_back('0');

		string subtractionResult = bigNumSubtraction(num1, div);

		quotient.push_back('0');
		
		while (subtractionResult != num1) {
			quotient.back()++;
			num1 = subtractionResult;
			subtractionResult = bigNumSubtraction(num1, div);
		}
	}

	reverse(quotient.begin(), quotient.end());

	while (quotient.back() == '0')
        quotient.pop_back();

    if (quotient.empty())
        quotient = "0";
    else
        reverse(quotient.begin(), quotient.end());

	return quotient;
}

int main() {
    string a, b, c;
	cin >> a >> b >> c;

	cout << bigNumDivision(bigNumSubtraction(b, c), a);
}