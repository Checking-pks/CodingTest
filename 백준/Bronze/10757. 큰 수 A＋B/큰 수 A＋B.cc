#include <iostream>
#include <algorithm>
#include <string>
using namespace std;



string plus_num(string a, string b) {
    
    string result = "";
    bool minus = false;
    int rest = 0;
    
    if (a[0] == '-') {
        minus = true;
        a = a.substr(1);
        b = b.substr(1);
    }
    
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    
    for (int i=0; i<a.length()+b.length(); i++) {
        if (a.length() > i) {
            rest += a[i] - '0';
        }
        if (b.length() > i) {
            rest += b[i] - '0';
        }
        
        result += rest%10 + '0';
        rest /= 10;
        
    }
    
    reverse(result.begin(),result.end());
    
    for (; result[0] == '0';) {
        result = result.substr(1);
    }
    
    if (minus == true) {
        result = '-' + result;
    }
    
    return result;
    
    
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    string a, b, result = "";
    
    cin >> a >> b;
    
    result = plus_num(a, b);
    
    cout << result;
}