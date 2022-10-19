#include <iostream>

using namespace std;

int main() {
    int correct, result = 0;
    cin >> correct;
    
    for (int i=0, num; i<5; i++) {
        cin >> num;
        result += (correct == num);
    }
    
    cout << result;
}