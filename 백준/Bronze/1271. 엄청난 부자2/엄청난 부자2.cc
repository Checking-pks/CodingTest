#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string bigNumSubtraction(string num1, string num2) {
    // 예외 처리, num1 - num2 가 음수일 때 num1을 리턴
    if (num1.length() < num2.length() || (num1.length() == num2.length() && num1 < num2))
        return num1;
    
    // 문자열 뒤집기
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

int main() {
    string money, creatures, divisionNum;
    string resultDivision = "", resultRemaining = "";
    cin >> money >> creatures;

    divisionNum = creatures;

    while (money.length() > divisionNum.length())
        divisionNum.push_back('0');
    
    while (true) {
        string subtractionResult = bigNumSubtraction(money, divisionNum);
        
        if (subtractionResult == money) {
            if (divisionNum == creatures)
                break;

            divisionNum.pop_back();
            resultDivision.push_back('0');
        } else {
            if (resultDivision.empty())
                resultDivision = "0";
            
            resultDivision.back()++;
        }

        money = subtractionResult;
    }

    resultRemaining = money;

    cout << resultDivision << "\n" << resultRemaining;
    
    return 0;
}
