#include <iostream>
#include <string>

using namespace std;

int main() {
    while (true) {
        int num;
        string numToStr;
        bool isPalindrome = true;
        
        cin >> num;
        
        if (num == 0)
            break;

        numToStr = to_string(num);

        for (int i=0; i<(numToStr.length() >> 1); i++) {
            int idxFront = i;
            int idxBack  = numToStr.length() - i - 1;

            if (numToStr[idxFront] != numToStr[idxBack]) {
                isPalindrome = false;
                break;
            }
        }

        cout << ((isPalindrome) ? "yes" : "no") << "\n";
    }

    return 0;
}