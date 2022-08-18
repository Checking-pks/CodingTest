#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    cin >> input;
    
    string result(input.length() + 4, '0');
    
    for (int i=0; i<input.length(); i++) {
        if (input[i] == '1') {
            result[i]++;
            result[i+4]++;
        }
    }
    
    int binaryNum = 0;
    
    for (int i=result.size()-1; i>=0; i--) {
        if (result[i] + binaryNum > '0') {
            binaryNum += result[i] - '0';
            result[i] = binaryNum % 2 + '0';
            binaryNum /= 2;
        }
    }

	if (binaryNum) 
		result = "1" + result;
    
    cout << result;
    
    return 0;
}