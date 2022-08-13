#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int num, num2 = 0, cycle = 1;
    cin >> num;
    num2 = (int(num/10)+num%10)%10+num%10*10;
    
    while (num != num2) {
        cycle++;
        num2 = (int(num2/10)+num2%10)%10+num2%10*10;
    }
    cout << cycle;
}
