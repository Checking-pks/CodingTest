#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string bigNumSum(string num1, string num2) {
	if (num1.length() < num2.length() || (num1.length() == num2.length() && num1 < num2))
		swap(num1, num2);
	
    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());

    string result = num1;

    bool isCarry = false;
    
    for (int i=0; i<num2.length(); i++) {
        int sum = (num1[i] - '0') + (num2[i] - '0') + isCarry;
        
        isCarry = (sum >= 10);

        result[i] = sum % 10 + '0';
    }

    for (int i=num2.length(); isCarry; i++) {
        if (result.length() == i) {
            result.push_back('1');
            break;
        }
        
        if (result[i] != '9') {
            result[i]++;
            break;
        }
        
        result[i] = '0';
    }

    reverse(result.begin(), result.end());

    return result;
}

string bigNumMultiplication(string num1, string num2) {
	string result = "0";

    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());
	
	for (int i=0; i<num2.length(); i++) {
		string nowNum;
		int n2 = num2[i] - '0';

		if (n2 == 0) continue;
		
		for (int j=0; j<num1.length(); j++) {
			int n1 = num1[j] - '0';

			if (n1 == 0) continue;

			nowNum = to_string(n1 * n2);

			for (int k=0; k<i+j; k++)
				nowNum.push_back('0');

			result = bigNumSum(result, nowNum);
		}
	}
	
	return result;
}

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
	int n, r;
	cin >> n >> r;

	if (r > n-r)
		r = n-r;
	
	string result = "1", div = "1";
	
	for (int i=0; i<r; i++) 
		result = bigNumMultiplication(result, to_string(n - i));

	for (int i=1; i<r; i++) 
		div = bigNumMultiplication(div, to_string(i + 1));
	
	cout << bigNumDivision(result, div);
}