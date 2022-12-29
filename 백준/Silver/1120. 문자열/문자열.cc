#include <iostream>
#include <string>

using namespace std;

int main() {
    int result = 50;
    string a, b;
    cin >> a >> b;
    
    for (int i=0; i<=b.length()-a.length(); i++) {
        int count = 0;
        
        for (int j=0; j<a.length(); j++)
            if (b[i+j] != a[j]) count++;
        
        if (result > count) 
            result = count;
    }
    
    cout << result;
}