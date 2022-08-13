#include <iostream>
using namespace std;


string quick_sort(string num) {
    string low="", high="", mid="";
    
    if (num.length() > 1) {
        mid = num[0];
    } else {
        return num;
    }
    
    for (int i=1; i<num.length(); i++) {
        if (num[i] > mid[0]) {
            high += num[i];
        } else {
            low += num[i];
        }
    }
    
    return quick_sort(high) + mid + quick_sort(low);
    
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    string num;
    cin >> num;
    
    cout << quick_sort(num);
    
}
